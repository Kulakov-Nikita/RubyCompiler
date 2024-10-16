%option noyywrap
%option never-interactive
%option yylineno

%{
	#include <stdio.h> 
    #include <string.h>   
    #include "parser.tab.h"
    void removeCharacterFromString(const char * str, char * dest, char deleted_char);
    int btoi(const char * str);
%}

DIGIT [0-9]
HEX_DIGIT [0-9A-Fa-f]
OCT_DIGIT [0-7]
BIN_DIGIT [01]
OCT_NUMBER {OCT_DIGIT}+(_{OCT_DIGIT}+)*
HEX_NUMBER {HEX_DIGIT}+(_{HEX_DIGIT}+)*
BIN_NUMBER {BIN_DIGIT}+(_{BIN_DIGIT}+)*
DIGIT_NUMBER {DIGIT}+(_{DIGIT}+)*

LETTER_NUMBER_UNDERSCOPE [a-zA-Z0-9_]
EXPONENT [eE][+-]?{DIGIT_NUMBER}

%x ML_COMMENT
%x STRING

%% 

%{   
    int num;
    float real_num;
    char temp1[100];
    char temp2[100];
    char comment[1000];
    char string[1000];
    int concatenation = 0;
%}

and             { printf("Keyword: and\n; return AND}
begin		    { printf("Keyword: begin\n"); return BEGIN_KEYWORD; }
class           { printf("Keyword: class\n"); return CLASS; }
new             { printf("Keyword: new\n"); return NEW; }
def             { printf("Keyword: def\n"); return DEF; }
"defined?"	    { printf("Keyword: defined?\n"); return DEFINED; }
do              { printf("Keyword: do\n"); return DO; }
if              { printf("Keyword: if\n"); return IF; }
else            { printf("Keyword: else\n"); return ELSE; }
elsif           { printf("Keyword: elsif\n"); return ELSIF; }
end             { printf("Keyword: end\n"); return END; }
false           { printf("Keyword: false\n"); return FALSE; }
for             { printf("Keyword: for\n"); return FOR; }
in              { printf("Keyword: in\n"); return IN; }
not             { printf("Keyword: not\n"); return NOT; }
or              { printf("Keyword: or\n"); return OR; }
return          { printf("Keyword: return\n"); return RETURN; }
self            { printf("Keyword: self\n"); return SELF; }
super           { printf("Keyword: super\n"); return SUPER; }
then            { printf("Keyword: then\n"); return THEN; }
true            { printf("Keyword: true\n"); return TRUE; }
until           { printf("Keyword: until\n"); return UNTIL; }
while           { printf("Keyword: while\n"); return WHILE; }


"+"         { printf("Operator: +\n"); return ARITHMETIC_PLUS_OP; }
"-"         { printf("Operator: -\n"); return ARITHMETIC_MINUS_OP; }
"*"         { printf("Operator: *\n"); return ARITHMETIC_MUL_OP; }
"/"         { printf("Operator: /\n"); return ARITHMETIC_DIV_OP; }
"%"         { printf("Operator: %%\n"); return ARITHMETIC_MOD_OP; }
"**"        { printf("Operator: **\n"); return ARITHMETIC_POW_OP; }

"=="        { printf("Operator: ==\n"); return EQL_OP; }
"!="        { printf("Operator: !=\n"); return NOT_EQL_OP; }
">"         { printf("Operator: >\n"); return GREATER_OP; }
"<"         { printf("Operator: <\n"); return LESS_OP; }
">="        { printf("Operator: >=\n"); return GREATER_OR_EQL_OP; }
"<="        { printf("Operator: <=\n"); return LESS_OR_EQL_OP; }
"<=>"       { printf("Operator: <=>\n"); return COMB_COMPRASION_OP; }
"==="       { printf("Operator: ===\n"); return CASE_EQL_OP; }

"="         { printf("Operator: =\n"); return ASSIGN_OP; }

"&&"        { printf("Operator: &&\n"); return LOGICAL_AND_OP; }
"||"        { printf("Operator: ||\n"); return LOGICAL_OR_OP; }
"!"         { printf("Operator: !\n"); return LOGICAL_NOT_OP; }

".."        { printf("Operator: ..\n"); return INCLUSIVE_RANGE_OP; }
"..."       { printf("Operator: ...\n"); return EXCLUSIVE_RANGE_OP; }

\n          { return NEW_LINE_SYMBOL;  }
"."         { printf("Sign: .\n");
                return DOT_SYMBOL; }
","         { printf("Sign: ,\n");
                return COMMA_SYMBOL; }
";"         { printf("Sign: ;\n");
                return SEMICOLON_SYMBOL; }
"("         { printf("Bracket: (\n");
                return OPEN_ROUND_BRACKET; }
")"         { printf("Bracket: )\n");
                return CLOSE_ROUND_BRACKET; }
"{"         { printf("Bracket: {\n");
                return OPEN_CURLY_BRACKET; }
"}"         {
                if(concatenation == 0) {
                printf("Bracket: }\n");
                    return CLOSE_CURLY_BRACKET;
                } else {
                    concatenation--;
                    BEGIN(STRING);
                    string[0] = 0;
                    return ARITHMETIC_PLUS_OP;
                }
            }
"["         { return OPEN_SQUARE_BRACKET; }
"]"         { return CLOSE_SQUARE_BRACKET; }
"@"         { return COMMERCIAL_AT; }
\"          { 
                string[0] = 0; 
                BEGIN(STRING);    
            }

<STRING>\#\{          { 
                        printf("String: %s\n", string);
                        printf("Found concatenation with string\n");
                        concatenation++;
                        BEGIN(INITIAL);
                    }            

<STRING>[^\\\"\n#{}]+     { strcat(string, yytext); }
<STRING>[#{}]             { strcat(string, yytext); }
<STRING>\\n               { strcat(string, "\n"); }
<STRING>\\a               { strcat(string, "\a"); }
<STRING>\\b               { strcat(string, "\b"); }
<STRING>\\t               { strcat(string, "\t"); }
<STRING>\\v               { strcat(string, "\v"); }
<STRING>\\f               { strcat(string, "\f"); }
<STRING>\\r               { strcat(string, "\r"); }
<STRING>\\e               { strcat(string, "\e"); }
<STRING>\\s               { strcat(string, " "); }
<STRING>\\\\              { strcat(string, "\\"); }
<STRING>\\\"              { strcat(string, "\""); }
<STRING>\\{OCT_DIGIT}{1,3} { 
                                sscanf(yytext + 1, "%o", &num);
                                temp1[0] = (char) num;
                                temp1[1] = 0;
                                strcat(string, temp1);
                                return INTEGER_NUMBER; 
                            }

<STRING>\\x{HEX_DIGIT}{1,2} { 
                                sscanf(yytext + 2, "%x", &num);
                                temp1[0] = (char) num;
                                temp1[1] = 0;
                                strcat(string, temp1);
                                return INTEGER_NUMBER; 
                            }
<STRING>\\x[^0-9A-Fa-f\n"]* { printf("ERROR: invalid hex escape \n"); } 
<STRING><<EOF>>             { printf("ERROR: expected \" \n");}
<STRING>\"                  { printf("String: %s\n", string); BEGIN(INITIAL); }

#.*                         { printf("Single-line comment: %s\n", yytext + 1); }

^=begin                 {                                     
                            comment[0] = 0; 
                            BEGIN(ML_COMMENT);
                        }

<ML_COMMENT>^=end       {
                            strcat(comment, yytext+4);
                            printf("Multi-line comment: %s\n", comment);
                            BEGIN(INITIAL);
                        }

<ML_COMMENT>.*          { 
                            strcat(comment, yytext); 
                        }

<ML_COMMENT><<EOF>>     { 
                            printf("expected =end"); BEGIN(INITIAL); 
                        }

0{OCT_NUMBER}           {
                                removeCharacterFromString(yytext + 1,temp1,'_');
                                num = strtoll(temp1, NULL, 8);
                                printf("Binary number: %d\n", num);
                                return INTEGER_NUMBER; 
                            }

{DIGIT_NUMBER}\.?   { 
                                removeCharacterFromString(yytext,temp1,'_');
                                num = atoi(temp1);
                                printf("Decimal number: %d\n", num);
                                return INTEGER_NUMBER; 
                            }

[1-9](_*{DIGIT}+)*_*        { printf("ERROR: invalid decimal number: %s\n", yytext); }

0[dD][1-9]{DIGIT_NUMBER}    {
                                removeCharacterFromString(yytext+2,temp1,'_');
                                num = atoi(temp1);
                                printf("Decimal number: %d\n", num);    
                                return INTEGER_NUMBER; 
                            }

0_*[dD]_*[1-9](_*{DIGIT}+)*_* { printf("ERROR: invalid decimal number with dD: %s\n", yytext); }

0[oO]?{OCT_NUMBER}          {
                                removeCharacterFromString(yytext,temp1,'_');
                                removeCharacterFromString(temp1,temp2,'o');
                                removeCharacterFromString(temp2,temp1,'O');
                                sscanf(temp1,"%o",&num);
                                printf("Octal number: %d\n", num);
                                return INTEGER_NUMBER; 
                            }

0_*[oO]?_*{OCT_DIGIT}(_*{OCT_DIGIT}+)*_* { printf("ERROR: invalid octal number: %s\n", yytext); }

0[xX]{HEX_NUMBER}           {
                                removeCharacterFromString(yytext + 2,temp1,'_');
                                sscanf(temp1,"%x",&num);
                                printf("Hexadecimal number: %d\n", num);
                                return INTEGER_NUMBER; 
                            }

0_*[xX]_*{HEX_DIGIT}(_*{HEX_DIGIT}+)*_* { printf("ERROR: invalid hexadecimal number: %s\n", yytext); }

0[bB]{BIN_NUMBER}           {
                                removeCharacterFromString(yytext + 2,temp1,'_');
                                num = btoi(temp1);
                                printf("Binary number: %d\n", num); 
                                return INTEGER_NUMBER; 
                            }

0_*[bB]_*{BIN_DIGIT}(_*{BIN_DIGIT}+)*_* { printf("ERROR: invalid binary number: %s\n", yytext); }


(0|[1-9](_?{DIGIT})*)(\.{DIGIT}+(_{DIGIT}+)*)?({EXPONENT})? {
                                                                 removeCharacterFromString(yytext,temp1,'_'); 
                                                                 real_num = atof(temp1);                                                                
                                                                 printf("Float number: %f\n", real_num);
                                                                 return FLOAT_NUMBER;
                                                            }

[a-z_]{LETTER_NUMBER_UNDERSCOPE}*           {
                                                printf("Local variable or method name: %s\n", yytext);
                                                return VAR_OR_METHOD_NAME;
                                            }

\@[a-z_]{LETTER_NUMBER_UNDERSCOPE}*         {
                                                printf("Instance variable: %s\n", yytext);
                                                return INSTANCE_VAR_NAME;
                                            }

\@\@[a-z_]{LETTER_NUMBER_UNDERSCOPE}*       {
                                                printf("Class variable: %s\n", yytext);
                                                return CLASS_VAR_NAME;
                                            }

[A-Z]{LETTER_NUMBER_UNDERSCOPE}*            {
                                                printf("Class name: %s\n", yytext);
                                                return CLASS_NAME;
                                            }

. {}

%% 

void removeCharacterFromString(const char * str, char * dest, char deleted_char) {
	int j = 0;
	
    for(int i = 0; str[i] != 0; i++) {
        if(str[i] != deleted_char) {
            dest[j++] = str[i];
        }
    }

    dest[j] = 0;
}

int btoi(const char * str) {
    const char *p = str;
    unsigned int   r = 0;

    while (p && *p ) {
        r <<= 1;
        r += (unsigned int)((*p++) & 0x01);
    }

    return (int) r;
}

int main(int argc, char **argv ){
	yyin = fopen(argv[1], "r" );

    yylex();
    return 0;
}
