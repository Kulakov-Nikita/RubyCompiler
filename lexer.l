%{
#include <stdio.h>
%}

%%

[0-9]+          { printf("Found number: %s\n", yytext); }

[ \t\n]+        { /* nothing to do */ }

.               { printf("Incorrect lexem: %s\n", yytext); }

%%

// Основная функция
int main(int argc, char **argv) {
    yylex(); // Запуск лексического анализатора
    return 0;
}

int yywrap() {
    return 1; // Завершение работы
}
