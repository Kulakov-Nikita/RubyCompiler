/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "parser.y"

#include <stdio.h>
#include "tree_nodes.h"
#include "print_tree.h"
#include "create_tree.h"

struct program_struct * root;
void yyerror(const char* s);
int yylex();

#line 82 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AND = 3,                        /* AND  */
  YYSYMBOL_BEGIN_KEYWORD = 4,              /* BEGIN_KEYWORD  */
  YYSYMBOL_CLASS = 5,                      /* CLASS  */
  YYSYMBOL_NEW = 6,                        /* NEW  */
  YYSYMBOL_DEF = 7,                        /* DEF  */
  YYSYMBOL_DEFINED = 8,                    /* DEFINED  */
  YYSYMBOL_DO = 9,                         /* DO  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_ELSIF = 12,                     /* ELSIF  */
  YYSYMBOL_END = 13,                       /* END  */
  YYSYMBOL_FALSE = 14,                     /* FALSE  */
  YYSYMBOL_FOR = 15,                       /* FOR  */
  YYSYMBOL_IN = 16,                        /* IN  */
  YYSYMBOL_NOT = 17,                       /* NOT  */
  YYSYMBOL_OR = 18,                        /* OR  */
  YYSYMBOL_RETURN = 19,                    /* RETURN  */
  YYSYMBOL_SELF = 20,                      /* SELF  */
  YYSYMBOL_SUPER = 21,                     /* SUPER  */
  YYSYMBOL_THEN = 22,                      /* THEN  */
  YYSYMBOL_TRUE = 23,                      /* TRUE  */
  YYSYMBOL_UNTIL = 24,                     /* UNTIL  */
  YYSYMBOL_WHILE = 25,                     /* WHILE  */
  YYSYMBOL_ARITHMETIC_PLUS_OP = 26,        /* ARITHMETIC_PLUS_OP  */
  YYSYMBOL_ARITHMETIC_MINUS_OP = 27,       /* ARITHMETIC_MINUS_OP  */
  YYSYMBOL_ARITHMETIC_MUL_OP = 28,         /* ARITHMETIC_MUL_OP  */
  YYSYMBOL_ARITHMETIC_DIV_OP = 29,         /* ARITHMETIC_DIV_OP  */
  YYSYMBOL_ARITHMETIC_MOD_OP = 30,         /* ARITHMETIC_MOD_OP  */
  YYSYMBOL_ARITHMETIC_POW_OP = 31,         /* ARITHMETIC_POW_OP  */
  YYSYMBOL_EQL_OP = 32,                    /* EQL_OP  */
  YYSYMBOL_NOT_EQL_OP = 33,                /* NOT_EQL_OP  */
  YYSYMBOL_GREATER_OP = 34,                /* GREATER_OP  */
  YYSYMBOL_LESS_OP = 35,                   /* LESS_OP  */
  YYSYMBOL_GREATER_OR_EQL_OP = 36,         /* GREATER_OR_EQL_OP  */
  YYSYMBOL_LESS_OR_EQL_OP = 37,            /* LESS_OR_EQL_OP  */
  YYSYMBOL_COMB_COMPRASION_OP = 38,        /* COMB_COMPRASION_OP  */
  YYSYMBOL_CASE_EQL_OP = 39,               /* CASE_EQL_OP  */
  YYSYMBOL_ASSIGN_OP = 40,                 /* ASSIGN_OP  */
  YYSYMBOL_LOGICAL_AND_OP = 41,            /* LOGICAL_AND_OP  */
  YYSYMBOL_LOGICAL_OR_OP = 42,             /* LOGICAL_OR_OP  */
  YYSYMBOL_LOGICAL_NOT_OP = 43,            /* LOGICAL_NOT_OP  */
  YYSYMBOL_INCLUSIVE_RANGE_OP = 44,        /* INCLUSIVE_RANGE_OP  */
  YYSYMBOL_EXCLUSIVE_RANGE_OP = 45,        /* EXCLUSIVE_RANGE_OP  */
  YYSYMBOL_OPEN_ROUND_BRACKET = 46,        /* OPEN_ROUND_BRACKET  */
  YYSYMBOL_CLOSE_ROUND_BRACKET = 47,       /* CLOSE_ROUND_BRACKET  */
  YYSYMBOL_OPEN_CURLY_BRACKET = 48,        /* OPEN_CURLY_BRACKET  */
  YYSYMBOL_CLOSE_CURLY_BRACKET = 49,       /* CLOSE_CURLY_BRACKET  */
  YYSYMBOL_OPEN_SQUARE_BRACKET = 50,       /* OPEN_SQUARE_BRACKET  */
  YYSYMBOL_CLOSE_SQUARE_BRACKET = 51,      /* CLOSE_SQUARE_BRACKET  */
  YYSYMBOL_COMMERCIAL_AT = 52,             /* COMMERCIAL_AT  */
  YYSYMBOL_DOT_SYMBOL = 53,                /* DOT_SYMBOL  */
  YYSYMBOL_COMMA_SYMBOL = 54,              /* COMMA_SYMBOL  */
  YYSYMBOL_SEMICOLON_SYMBOL = 55,          /* SEMICOLON_SYMBOL  */
  YYSYMBOL_NEW_LINE_SYMBOL = 56,           /* NEW_LINE_SYMBOL  */
  YYSYMBOL_STR = 57,                       /* STR  */
  YYSYMBOL_INTEGER_NUMBER = 58,            /* INTEGER_NUMBER  */
  YYSYMBOL_FLOAT_NUMBER = 59,              /* FLOAT_NUMBER  */
  YYSYMBOL_VAR_OR_METHOD_NAME = 60,        /* VAR_OR_METHOD_NAME  */
  YYSYMBOL_INSTANCE_VAR_NAME = 61,         /* INSTANCE_VAR_NAME  */
  YYSYMBOL_CLASS_NAME = 62,                /* CLASS_NAME  */
  YYSYMBOL_CLASS_VAR_NAME = 63,            /* CLASS_VAR_NAME  */
  YYSYMBOL_UNARY_MINUS = 64,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 65,                /* UNARY_PLUS  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_program = 67,                   /* program  */
  YYSYMBOL_program_item = 68,              /* program_item  */
  YYSYMBOL_program_items_list_not_empty = 69, /* program_items_list_not_empty  */
  YYSYMBOL_program_items_list = 70,        /* program_items_list  */
  YYSYMBOL_expr = 71,                      /* expr  */
  YYSYMBOL_stmt_ends = 72,                 /* stmt_ends  */
  YYSYMBOL_new_lines_op = 73,              /* new_lines_op  */
  YYSYMBOL_new_lines = 74,                 /* new_lines  */
  YYSYMBOL_stmt_ends_op = 75,              /* stmt_ends_op  */
  YYSYMBOL_stmt = 76,                      /* stmt  */
  YYSYMBOL_stmt_list_not_empty = 77,       /* stmt_list_not_empty  */
  YYSYMBOL_stmt_list = 78,                 /* stmt_list  */
  YYSYMBOL_stmt_block = 79,                /* stmt_block  */
  YYSYMBOL_if_start_stmt = 80,             /* if_start_stmt  */
  YYSYMBOL_elsif_stmt = 81,                /* elsif_stmt  */
  YYSYMBOL_elsif_stmt_list = 82,           /* elsif_stmt_list  */
  YYSYMBOL_if_stmt = 83,                   /* if_stmt  */
  YYSYMBOL_for_stmt = 84,                  /* for_stmt  */
  YYSYMBOL_while_stmt = 85,                /* while_stmt  */
  YYSYMBOL_until_stmt = 86,                /* until_stmt  */
  YYSYMBOL_method_param = 87,              /* method_param  */
  YYSYMBOL_method_params_list = 88,        /* method_params_list  */
  YYSYMBOL_method_params_list_not_empty = 89, /* method_params_list_not_empty  */
  YYSYMBOL_def_method_stmt = 90,           /* def_method_stmt  */
  YYSYMBOL_expr_list = 91,                 /* expr_list  */
  YYSYMBOL_expr_list_not_empty = 92,       /* expr_list_not_empty  */
  YYSYMBOL_class_declaration = 93,         /* class_declaration  */
  YYSYMBOL_def_method_list_op = 94,        /* def_method_list_op  */
  YYSYMBOL_def_method_list = 95            /* def_method_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  63
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1091

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  297

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   156,   156,   159,   160,   161,   164,   165,   168,   169,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   219,   220,   221,   222,   225,
     226,   229,   230,   233,   234,   237,   238,   239,   240,   241,
     242,   243,   244,   247,   248,   251,   252,   255,   258,   259,
     260,   263,   264,   265,   268,   269,   272,   273,   274,   275,
     278,   279,   280,   281,   284,   285,   288,   289,   292,   293,
     296,   297,   300,   301,   304,   305,   308,   309,   312,   313,
     316,   317,   321,   322,   325,   326
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "AND", "BEGIN_KEYWORD",
  "CLASS", "NEW", "DEF", "DEFINED", "DO", "IF", "ELSE", "ELSIF", "END",
  "FALSE", "FOR", "IN", "NOT", "OR", "RETURN", "SELF", "SUPER", "THEN",
  "TRUE", "UNTIL", "WHILE", "ARITHMETIC_PLUS_OP", "ARITHMETIC_MINUS_OP",
  "ARITHMETIC_MUL_OP", "ARITHMETIC_DIV_OP", "ARITHMETIC_MOD_OP",
  "ARITHMETIC_POW_OP", "EQL_OP", "NOT_EQL_OP", "GREATER_OP", "LESS_OP",
  "GREATER_OR_EQL_OP", "LESS_OR_EQL_OP", "COMB_COMPRASION_OP",
  "CASE_EQL_OP", "ASSIGN_OP", "LOGICAL_AND_OP", "LOGICAL_OR_OP",
  "LOGICAL_NOT_OP", "INCLUSIVE_RANGE_OP", "EXCLUSIVE_RANGE_OP",
  "OPEN_ROUND_BRACKET", "CLOSE_ROUND_BRACKET", "OPEN_CURLY_BRACKET",
  "CLOSE_CURLY_BRACKET", "OPEN_SQUARE_BRACKET", "CLOSE_SQUARE_BRACKET",
  "COMMERCIAL_AT", "DOT_SYMBOL", "COMMA_SYMBOL", "SEMICOLON_SYMBOL",
  "NEW_LINE_SYMBOL", "STR", "INTEGER_NUMBER", "FLOAT_NUMBER",
  "VAR_OR_METHOD_NAME", "INSTANCE_VAR_NAME", "CLASS_NAME",
  "CLASS_VAR_NAME", "UNARY_MINUS", "UNARY_PLUS", "$accept", "program",
  "program_item", "program_items_list_not_empty", "program_items_list",
  "expr", "stmt_ends", "new_lines_op", "new_lines", "stmt_ends_op", "stmt",
  "stmt_list_not_empty", "stmt_list", "stmt_block", "if_start_stmt",
  "elsif_stmt", "elsif_stmt_list", "if_stmt", "for_stmt", "while_stmt",
  "until_stmt", "method_param", "method_params_list",
  "method_params_list_not_empty", "def_method_stmt", "expr_list",
  "expr_list_not_empty", "class_declaration", "def_method_list_op",
  "def_method_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-113)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-62)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     401,   -34,   -42,   -22,   -19,   -19,  -113,   -19,   -19,   719,
       4,    -2,  -113,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
    -113,  -113,  -113,    42,  -113,    60,  -113,   401,  -113,   599,
    -113,   -34,    14,   -34,   -34,   -34,   -34,  -113,  -113,   -34,
     -34,  -113,   126,   -27,   -23,   -19,   740,  -113,   740,    26,
     740,   599,  -113,   -19,   -19,   740,   740,   740,   740,   740,
     740,   740,   -19,  -113,  -113,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
    -113,  -113,   -34,   -19,  -113,  -113,    43,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,   126,    83,   -19,    94,    45,   126,
    -113,   926,   639,    90,    91,   926,  -113,    49,   740,   439,
     479,   -14,   -14,   -14,   778,   328,    61,    59,   740,   740,
     740,   740,   740,   740,   740,   740,   740,   740,   740,   740,
     740,   740,   740,   740,   740,   740,   740,   740,   740,   740,
     740,   740,   740,    56,   126,   740,   -34,  -113,  -113,  -113,
    -113,    58,  -113,   107,    94,    85,  -113,    76,    72,   114,
     -15,    -3,   126,   110,   -19,   -19,    87,    82,   -34,   126,
     -34,   126,  -113,  -113,  -113,   -19,    88,   926,   926,   898,
     898,    69,    69,   -14,   -14,   -14,   -14,  1010,  1010,    64,
      64,    64,    64,  1010,  1010,   926,  1038,   982,   954,   954,
     818,    92,   129,   679,   126,   -34,   -34,  -113,   740,   -34,
     -19,   -34,   117,  -113,   -34,   740,   740,   740,  -113,   126,
     131,   126,   135,   740,  -113,  -113,   740,  -113,   -15,   126,
     132,   142,    94,  -113,   858,   126,    45,  -113,   -34,   126,
     519,   559,   109,   144,  -113,   145,  -113,   328,   112,   138,
    -113,   -34,  -113,   150,   151,  -113,   126,  -113,   -34,   126,
     -34,   126,  -113,  -113,  -113,  -113,  -113,   -34,   126,   -34,
     -34,  -113,   126,   152,   126,   154,   126,  -113,  -113,  -113,
     160,  -113,   162,  -113,  -113,  -113,  -113
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,    63,     0,     0,    59,    59,    14,    59,    59,     0,
       0,    15,    13,    59,    59,    59,    59,    59,    59,    59,
      12,    10,    11,    49,    50,     0,     6,     9,     2,     0,
       3,    63,     0,    63,    63,    63,    63,     4,     5,    55,
      56,    64,    75,     0,     0,    61,     0,    60,     0,     0,
       0,     0,    72,    59,    59,     0,     0,     0,     0,     0,
       0,   106,    59,     1,     7,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      65,    66,    63,    59,    86,    84,     0,    67,    68,    69,
      70,    57,    58,    73,    76,     0,    59,   112,   100,    75,
      62,    40,    59,     0,     0,    41,    71,     0,   106,     0,
       0,    17,    19,    16,     0,    59,     0,   107,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,    63,    88,    85,    74,
      77,     0,   114,     0,   113,    98,   102,     0,   101,     0,
      55,    56,    75,     0,    59,    59,    53,     0,    63,    75,
      63,    75,    44,   108,    46,    59,     0,    42,    43,    38,
      39,    23,    24,    20,    21,    22,    18,    30,    32,    25,
      26,    27,    28,    29,    31,    37,    33,    34,    35,    36,
       0,    51,     0,    59,    75,     0,     0,   115,     0,    63,
      59,    63,     0,    78,    63,     0,     0,   106,    48,    75,
       0,    75,     0,     0,    47,    45,   106,    87,    55,    75,
       0,     0,   112,   110,    99,    75,     0,   104,    63,    75,
       0,     0,     0,     0,    96,     0,    94,    59,     0,     0,
      81,    63,    89,     0,     0,   103,    75,    80,    63,    75,
      63,    75,    54,    97,    95,   109,    52,    63,    75,     0,
      63,    79,    75,     0,    75,     0,    75,    82,   111,   105,
       0,    90,     0,    91,    83,    92,    93
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,   153,  -113,  -113,   165,    -9,    -4,   -40,    12,
      24,  -113,   168,  -113,  -113,    81,  -113,  -113,  -113,  -113,
    -113,   -68,  -113,  -113,  -105,  -112,  -113,  -113,   -63,  -113
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    25,    26,    27,    28,    29,    41,    46,    47,    42,
     103,   104,   105,    31,    32,    95,    96,    33,    34,    35,
      36,   166,   167,   168,    37,   126,   127,    38,   163,   164
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    48,   162,    49,    50,   110,   177,   -59,   106,    55,
      56,    57,    58,    59,    60,    61,   186,    74,    43,   -61,
      90,    39,    40,   108,    30,    92,    93,    94,    39,    40,
     101,   102,    39,    40,   107,   109,    88,    45,    44,    89,
      39,   171,   116,    91,    54,    97,    98,    99,   100,   117,
     118,    30,    39,   171,   156,    93,   157,    53,   128,   217,
      63,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   113,   114,    62,   155,
      69,    70,    71,    72,    73,    74,   160,    71,    72,    73,
      74,     3,   161,   172,   154,   165,   174,   175,   173,   176,
     179,   181,   184,   185,    88,   252,   211,    89,   215,    88,
     216,   183,    89,   219,   258,   218,   220,   221,   159,   228,
       1,   110,   224,   227,     4,   234,     5,   162,   236,   248,
       6,     7,   237,     8,   254,     9,    10,    11,   256,    12,
      13,    14,    15,    16,   261,   262,   272,   273,   274,   276,
     277,   101,   102,   279,   280,   291,   222,   293,   214,    17,
     225,   226,    18,   295,    51,   296,    19,   158,   265,   263,
      64,   233,     0,    20,    21,    22,    23,    24,     0,     0,
     229,     0,   231,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   239,     0,   242,   243,     0,   240,
       0,   111,     0,   112,     0,   115,   246,     0,     0,     0,
     119,   120,   121,   122,   123,   124,   125,     0,     0,   101,
       0,   245,     0,   247,   259,     0,   249,     0,     0,     0,
       0,   269,   271,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   275,     0,     0,     0,     0,     0,     0,
     266,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     288,     0,     0,   278,     0,     0,     0,   169,     0,     0,
     282,     0,   284,   125,     0,     0,     0,     0,     0,   286,
       0,     0,   289,   125,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
     213,     0,   212,     0,     0,     0,     0,     0,     0,     0,
       0,    65,     0,     0,     0,     0,     0,     0,     0,     0,
     223,     0,     0,     0,     0,     0,    66,   230,     0,   232,
       0,     0,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,     0,    86,    87,     0,     0,     0,     0,    88,     0,
       0,    89,   241,   244,    45,     0,     0,     0,     0,     0,
     250,   251,   125,     0,     0,     0,     0,   253,   257,   255,
       0,   125,     0,     0,     0,     1,     2,   260,     3,     4,
       0,     5,     0,   264,     0,     6,     7,   267,     8,     0,
       9,    10,    11,     0,    12,    13,    14,    15,    16,     0,
       0,     0,     0,     0,   281,     0,     0,   283,     0,   285,
       0,     0,    65,     0,    17,     0,   287,    18,   178,     0,
     290,    19,   292,     0,   294,     0,     0,    66,    20,    21,
      22,    23,    24,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    65,    86,    87,     0,     0,     0,   180,    88,
       0,     0,    89,     0,    39,    40,     0,    66,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    65,    86,    87,     0,     0,     0,   268,    88,
       0,     0,    89,     0,    39,    40,     0,    66,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    65,    86,    87,     0,     0,     0,   270,    88,
       0,     0,    89,     0,    39,    40,     0,    66,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    65,    86,    87,     0,     0,     0,     0,    88,
       0,     0,    89,     0,    39,    40,     0,    66,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    65,    86,    87,     0,     0,     0,     0,    88,
       0,     0,    89,     0,    39,    40,     0,    66,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    65,    86,    87,     0,     0,     0,     0,    88,
       0,     0,    89,     0,   170,   171,     0,    66,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,     0,    86,    87,     0,     0,     4,     0,    88,
       0,     0,    89,     6,   238,   171,     8,     0,     0,    10,
      11,     0,    12,     0,     0,    15,    16,     0,     4,     0,
       0,     0,     0,     0,     6,     0,     0,     8,     0,     0,
      10,    11,    17,    12,     0,    18,    15,    16,     0,    19,
       0,     0,     0,     0,    39,    40,    20,    21,    22,    23,
      24,    65,     0,    17,     0,     0,    18,     0,     0,     0,
      19,     0,     0,     0,     0,     0,    66,    20,    21,    22,
      23,    24,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    65,    86,    87,     0,   182,     0,     0,    88,     0,
       0,    89,     0,     0,     0,     0,    66,     0,     0,     0,
       0,     0,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    65,    86,    87,     0,     0,     0,     0,    88,   235,
       0,    89,     0,     0,     0,     0,    66,     0,     0,     0,
       0,     0,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    65,    86,    87,     0,     0,     0,     0,    88,     0,
       0,    89,     0,     0,     0,     0,    66,     0,     0,     0,
       0,     0,     0,     0,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,     0,    86,    87,     0,     0,     0,     0,    88,     0,
       0,    89,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,     0,
      86,    87,     0,     0,     0,     0,    88,     0,     0,    89,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,     0,    84,    85,     0,   -62,   -62,
       0,     0,     0,     0,    88,     0,     0,    89,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,    89,    69,    70,    71,    72,
      73,    74,   -62,   -62,    77,    78,    79,    80,   -62,   -62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,    89,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,    89
};

static const yytype_int16 yycheck[] =
{
       9,     5,   107,     7,     8,    45,   118,    22,    35,    13,
      14,    15,    16,    17,    18,    19,   128,    31,    60,    22,
      29,    55,    56,    46,     0,    11,    12,    13,    55,    56,
      39,    40,    55,    56,    43,    44,    50,    56,    60,    53,
      55,    56,    51,    31,    46,    33,    34,    35,    36,    53,
      54,    27,    55,    56,    11,    12,    13,    53,    62,   164,
       0,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    60,    61,    46,    93,
      26,    27,    28,    29,    30,    31,    13,    28,    29,    30,
      31,     7,   106,   112,    92,    60,    16,    16,   112,    60,
     119,   120,    51,    54,    50,   227,    60,    53,    60,    50,
      13,   125,    53,    47,   236,    40,    54,    13,   104,    47,
       4,   171,    22,    46,     8,    47,    10,   242,    46,    22,
      14,    15,    13,    17,    13,    19,    20,    21,    13,    23,
      24,    25,    26,    27,    22,    13,    47,    13,    13,    47,
      22,   170,   171,    13,    13,    13,   170,    13,   156,    43,
     174,   175,    46,    13,     9,    13,    50,    96,   246,   242,
      27,   185,    -1,    57,    58,    59,    60,    61,    -1,    -1,
     178,    -1,   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   213,    -1,   215,   216,    -1,   213,
      -1,    46,    -1,    48,    -1,    50,   220,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,   238,
      -1,   219,    -1,   221,   238,    -1,   224,    -1,    -1,    -1,
      -1,   250,   251,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,
     248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     279,    -1,    -1,   261,    -1,    -1,    -1,   109,    -1,    -1,
     268,    -1,   270,   118,    -1,    -1,    -1,    -1,    -1,   277,
      -1,    -1,   280,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,    -1,
     155,    -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    -1,    -1,    -1,    -1,    -1,    18,   179,    -1,   181,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    53,   214,   218,    56,    -1,    -1,    -1,    -1,    -1,
     225,   226,   227,    -1,    -1,    -1,    -1,   229,   233,   231,
      -1,   236,    -1,    -1,    -1,     4,     5,   239,     7,     8,
      -1,    10,    -1,   245,    -1,    14,    15,   249,    17,    -1,
      19,    20,    21,    -1,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,   266,    -1,    -1,   269,    -1,   271,
      -1,    -1,     3,    -1,    43,    -1,   278,    46,     9,    -1,
     282,    50,   284,    -1,   286,    -1,    -1,    18,    57,    58,
      59,    60,    61,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     3,    44,    45,    -1,    -1,    -1,     9,    50,
      -1,    -1,    53,    -1,    55,    56,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     3,    44,    45,    -1,    -1,    -1,     9,    50,
      -1,    -1,    53,    -1,    55,    56,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     3,    44,    45,    -1,    -1,    -1,     9,    50,
      -1,    -1,    53,    -1,    55,    56,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     3,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    55,    56,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     3,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    55,    56,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     3,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    55,    56,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    44,    45,    -1,    -1,     8,    -1,    50,
      -1,    -1,    53,    14,    55,    56,    17,    -1,    -1,    20,
      21,    -1,    23,    -1,    -1,    26,    27,    -1,     8,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,
      20,    21,    43,    23,    -1,    46,    26,    27,    -1,    50,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,     3,    -1,    43,    -1,    -1,    46,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    18,    57,    58,    59,
      60,    61,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     3,    44,    45,    -1,    47,    -1,    -1,    50,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     3,    44,    45,    -1,    -1,    -1,    -1,    50,    51,
      -1,    53,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     3,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    53,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,    53,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    42,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    53,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    53,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    53,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    53
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     7,     8,    10,    14,    15,    17,    19,
      20,    21,    23,    24,    25,    26,    27,    43,    46,    50,
      57,    58,    59,    60,    61,    67,    68,    69,    70,    71,
      76,    79,    80,    83,    84,    85,    86,    90,    93,    55,
      56,    72,    75,    60,    60,    56,    73,    74,    73,    73,
      73,    71,    72,    53,    46,    73,    73,    73,    73,    73,
      73,    73,    46,     0,    68,     3,    18,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    44,    45,    50,    53,
      72,    75,    11,    12,    13,    81,    82,    75,    75,    75,
      75,    72,    72,    76,    77,    78,    35,    72,    46,    72,
      74,    71,    71,    60,    61,    71,    72,    73,    73,    71,
      71,    71,    71,    71,    71,    71,    91,    92,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    75,    73,    11,    13,    81,    76,
      13,    73,    90,    94,    95,    60,    87,    88,    89,    78,
      55,    56,    72,    73,    16,    16,    60,    91,     9,    72,
       9,    72,    47,    73,    51,    54,    91,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    60,    78,    71,    75,    60,    13,    90,    40,    47,
      54,    13,    73,    78,    22,    73,    73,    46,    47,    75,
      78,    75,    78,    73,    47,    51,    46,    13,    55,    72,
      73,    78,    72,    72,    71,    75,    73,    75,    22,    75,
      71,    71,    91,    78,    13,    78,    13,    71,    91,    73,
      78,    22,    13,    94,    78,    87,    75,    78,     9,    72,
       9,    72,    47,    13,    13,    73,    47,    22,    75,    13,
      13,    78,    75,    78,    75,    78,    75,    78,    72,    75,
      78,    13,    78,    13,    78,    13,    13
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    68,    68,    68,    69,    69,    70,    70,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    72,    72,    73,
      73,    74,    74,    75,    75,    76,    76,    76,    76,    76,
      76,    76,    76,    77,    77,    78,    78,    79,    80,    80,
      80,    81,    81,    81,    82,    82,    83,    83,    83,    83,
      84,    84,    84,    84,    85,    85,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    91,    92,    92,
      93,    93,    94,    94,    95,    95
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     4,     3,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       3,     3,     4,     4,     4,     5,     4,     5,     5,     1,
       1,     4,     7,     4,     7,     1,     1,     2,     2,     0,
       1,     1,     2,     0,     1,     2,     2,     2,     2,     2,
       2,     3,     2,     1,     2,     0,     1,     4,     5,     8,
       7,     5,     7,     8,     1,     2,     2,     5,     3,     6,
       9,     9,    10,    10,     6,     7,     6,     7,     1,     3,
       0,     1,     1,     4,     6,     9,     0,     1,     2,     5,
       6,     9,     0,     1,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: program_items_list  */
#line 156 "parser.y"
                                                                        { root=create_program_struct((yyvsp[0].program_item_list_un)); }
#line 1790 "parser.tab.c"
    break;

  case 3: /* program_item: stmt  */
#line 159 "parser.y"
                                                                        { (yyval.program_item_un)=create_stmt_program_item((yyvsp[0].stmt_un)); }
#line 1796 "parser.tab.c"
    break;

  case 4: /* program_item: def_method_stmt  */
#line 160 "parser.y"
                                                                        { (yyval.program_item_un)=create_def_method_program_item((yyvsp[0].def_method_un)); }
#line 1802 "parser.tab.c"
    break;

  case 5: /* program_item: class_declaration  */
#line 161 "parser.y"
                                                                        { (yyval.program_item_un)=(yyvsp[0].program_item_un); }
#line 1808 "parser.tab.c"
    break;

  case 6: /* program_items_list_not_empty: program_item  */
#line 164 "parser.y"
                                                                        { (yyval.program_item_list_un)=create_program_item_list((yyvsp[0].program_item_un)); }
#line 1814 "parser.tab.c"
    break;

  case 7: /* program_items_list_not_empty: program_items_list_not_empty program_item  */
#line 165 "parser.y"
                                                                        { (yyval.program_item_list_un)=add_to_program_item_list((yyvsp[-1].program_item_list_un), (yyvsp[0].program_item_un)); }
#line 1820 "parser.tab.c"
    break;

  case 8: /* program_items_list: %empty  */
#line 168 "parser.y"
                                                                        { (yyval.program_item_list_un)=0; }
#line 1826 "parser.tab.c"
    break;

  case 9: /* program_items_list: program_items_list_not_empty  */
#line 169 "parser.y"
                                                                        { (yyval.program_item_list_un)=(yyvsp[0].program_item_list_un); }
#line 1832 "parser.tab.c"
    break;

  case 10: /* expr: INTEGER_NUMBER  */
#line 172 "parser.y"
                                                                                                        { (yyval.expr_un)=create_const_integer_expr(Integer, (yyvsp[0].int_un)); }
#line 1838 "parser.tab.c"
    break;

  case 11: /* expr: FLOAT_NUMBER  */
#line 173 "parser.y"
                                                                                                        { (yyval.expr_un)=create_const_float_expr((yyvsp[0].float_un)); }
#line 1844 "parser.tab.c"
    break;

  case 12: /* expr: STR  */
#line 174 "parser.y"
                                                                                                        { (yyval.expr_un)=create_const_string_expr(String, (yyvsp[0].string_un)); }
#line 1850 "parser.tab.c"
    break;

  case 13: /* expr: TRUE  */
#line 175 "parser.y"
                                                                                                        { (yyval.expr_un)=create_const_integer_expr(Boolean, 1); }
#line 1856 "parser.tab.c"
    break;

  case 14: /* expr: FALSE  */
#line 176 "parser.y"
                                                                                                        { (yyval.expr_un)=create_const_integer_expr(Boolean, 0); }
#line 1862 "parser.tab.c"
    break;

  case 15: /* expr: SUPER  */
#line 177 "parser.y"
                                                                                                        { puts("SUPER are not allowed\n");}
#line 1868 "parser.tab.c"
    break;

  case 16: /* expr: LOGICAL_NOT_OP new_lines_op expr  */
#line 178 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(logical_not, (yyvsp[0].expr_un), 0); }
#line 1874 "parser.tab.c"
    break;

  case 17: /* expr: ARITHMETIC_PLUS_OP new_lines_op expr  */
#line 179 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(unary_plus, (yyvsp[0].expr_un), 0); }
#line 1880 "parser.tab.c"
    break;

  case 18: /* expr: expr ARITHMETIC_POW_OP new_lines_op expr  */
#line 180 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(pow_, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1886 "parser.tab.c"
    break;

  case 19: /* expr: ARITHMETIC_MINUS_OP new_lines_op expr  */
#line 181 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(unary_minus, (yyvsp[0].expr_un), 0); }
#line 1892 "parser.tab.c"
    break;

  case 20: /* expr: expr ARITHMETIC_MUL_OP new_lines_op expr  */
#line 182 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(mul, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1898 "parser.tab.c"
    break;

  case 21: /* expr: expr ARITHMETIC_DIV_OP new_lines_op expr  */
#line 183 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(div_, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1904 "parser.tab.c"
    break;

  case 22: /* expr: expr ARITHMETIC_MOD_OP new_lines_op expr  */
#line 184 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(mod, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1910 "parser.tab.c"
    break;

  case 23: /* expr: expr ARITHMETIC_PLUS_OP new_lines_op expr  */
#line 185 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(plus, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1916 "parser.tab.c"
    break;

  case 24: /* expr: expr ARITHMETIC_MINUS_OP new_lines_op expr  */
#line 186 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(minus, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1922 "parser.tab.c"
    break;

  case 25: /* expr: expr GREATER_OP new_lines_op expr  */
#line 187 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(greater, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1928 "parser.tab.c"
    break;

  case 26: /* expr: expr LESS_OP new_lines_op expr  */
#line 188 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(less, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1934 "parser.tab.c"
    break;

  case 27: /* expr: expr GREATER_OR_EQL_OP new_lines_op expr  */
#line 189 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(greater_eql, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1940 "parser.tab.c"
    break;

  case 28: /* expr: expr LESS_OR_EQL_OP new_lines_op expr  */
#line 190 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(less_eql, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1946 "parser.tab.c"
    break;

  case 29: /* expr: expr COMB_COMPRASION_OP new_lines_op expr  */
#line 191 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(comb_comprassion, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1952 "parser.tab.c"
    break;

  case 30: /* expr: expr EQL_OP new_lines_op expr  */
#line 192 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(equal, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1958 "parser.tab.c"
    break;

  case 31: /* expr: expr CASE_EQL_OP new_lines_op expr  */
#line 193 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(case_equal, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1964 "parser.tab.c"
    break;

  case 32: /* expr: expr NOT_EQL_OP new_lines_op expr  */
#line 194 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(not_equal, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1970 "parser.tab.c"
    break;

  case 33: /* expr: expr LOGICAL_AND_OP new_lines_op expr  */
#line 195 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(logical_and, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1976 "parser.tab.c"
    break;

  case 34: /* expr: expr LOGICAL_OR_OP new_lines_op expr  */
#line 196 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(logical_or, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1982 "parser.tab.c"
    break;

  case 35: /* expr: expr INCLUSIVE_RANGE_OP new_lines_op expr  */
#line 197 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(inclusive_range, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1988 "parser.tab.c"
    break;

  case 36: /* expr: expr EXCLUSIVE_RANGE_OP new_lines_op expr  */
#line 198 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(exclusive_range, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 1994 "parser.tab.c"
    break;

  case 37: /* expr: expr ASSIGN_OP new_lines_op expr  */
#line 199 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(assign, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 2000 "parser.tab.c"
    break;

  case 38: /* expr: expr UNTIL new_lines_op expr  */
#line 200 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(until_op, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 2006 "parser.tab.c"
    break;

  case 39: /* expr: expr WHILE new_lines_op expr  */
#line 201 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(while_op, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 2012 "parser.tab.c"
    break;

  case 40: /* expr: DEFINED new_lines_op expr  */
#line 202 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(defined, (yyvsp[0].expr_un), 0); }
#line 2018 "parser.tab.c"
    break;

  case 41: /* expr: NOT new_lines_op expr  */
#line 203 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(not_keyword, (yyvsp[0].expr_un), 0); }
#line 2024 "parser.tab.c"
    break;

  case 42: /* expr: expr AND new_lines_op expr  */
#line 204 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(and_keyword, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 2030 "parser.tab.c"
    break;

  case 43: /* expr: expr OR new_lines_op expr  */
#line 205 "parser.y"
                                                                                                        { (yyval.expr_un)=create_op_expr(or_keyword, (yyvsp[-3].expr_un), (yyvsp[0].expr_un)); }
#line 2036 "parser.tab.c"
    break;

  case 44: /* expr: OPEN_ROUND_BRACKET new_lines_op expr CLOSE_ROUND_BRACKET  */
#line 206 "parser.y"
                                                                                                        { (yyval.expr_un)=(yyvsp[-1].expr_un); }
#line 2042 "parser.tab.c"
    break;

  case 45: /* expr: expr OPEN_SQUARE_BRACKET new_lines_op expr CLOSE_SQUARE_BRACKET  */
#line 207 "parser.y"
                                                                                                            { (yyval.expr_un)=create_op_expr(member_access, (yyvsp[-4].expr_un), (yyvsp[-1].expr_un)); }
#line 2048 "parser.tab.c"
    break;

  case 46: /* expr: OPEN_SQUARE_BRACKET new_lines_op expr_list CLOSE_SQUARE_BRACKET  */
#line 208 "parser.y"
                                                                                                        { (yyval.expr_un)=create_array_struct((yyvsp[-1].expr_list_un)); }
#line 2054 "parser.tab.c"
    break;

  case 47: /* expr: VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET new_lines_op expr_list CLOSE_ROUND_BRACKET  */
#line 209 "parser.y"
                                                                                                        { (yyval.expr_un)=create_method_call_expr((yyvsp[-4].var_name_un), (yyvsp[-1].expr_list_un)); }
#line 2060 "parser.tab.c"
    break;

  case 48: /* expr: SUPER OPEN_ROUND_BRACKET new_lines_op expr_list CLOSE_ROUND_BRACKET  */
#line 210 "parser.y"
                                                                                                        { puts("SUPER are not allowed\n"); }
#line 2066 "parser.tab.c"
    break;

  case 49: /* expr: VAR_OR_METHOD_NAME  */
#line 211 "parser.y"
                                                                                                        { (yyval.expr_un)=create_const_string_expr(var_or_method, (yyvsp[0].var_name_un)); }
#line 2072 "parser.tab.c"
    break;

  case 50: /* expr: INSTANCE_VAR_NAME  */
#line 212 "parser.y"
                                                                                                        { (yyval.expr_un)=create_const_string_expr(instance_var, (yyvsp[0].instance_var_name_un)); }
#line 2078 "parser.tab.c"
    break;

  case 51: /* expr: expr DOT_SYMBOL new_lines_op VAR_OR_METHOD_NAME  */
#line 213 "parser.y"
                                                                                                        { (yyval.expr_un)=create_field_call_expr((yyvsp[-3].expr_un), (yyvsp[0].var_name_un)); }
#line 2084 "parser.tab.c"
    break;

  case 52: /* expr: expr DOT_SYMBOL new_lines_op VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET  */
#line 214 "parser.y"
                                                                                                        { (yyval.expr_un)=create_object_method_call_expr((yyvsp[-6].expr_un), (yyvsp[-3].var_name_un), (yyvsp[-1].expr_list_un)); }
#line 2090 "parser.tab.c"
    break;

  case 53: /* expr: SELF DOT_SYMBOL new_lines_op VAR_OR_METHOD_NAME  */
#line 215 "parser.y"
                                                                                                        { (yyval.expr_un)=create_self_field_call_expr((yyvsp[0].var_name_un)); }
#line 2096 "parser.tab.c"
    break;

  case 54: /* expr: SELF DOT_SYMBOL new_lines_op VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET expr_list CLOSE_ROUND_BRACKET  */
#line 216 "parser.y"
                                                                                                        { (yyval.expr_un)=create_self_method_call_expr((yyvsp[-3].var_name_un), (yyvsp[-1].expr_list_un)); }
#line 2102 "parser.tab.c"
    break;

  case 65: /* stmt: expr stmt_ends  */
#line 237 "parser.y"
                                    { (yyval.stmt_un)=create_expr_stmt((yyvsp[-1].expr_un)); }
#line 2108 "parser.tab.c"
    break;

  case 66: /* stmt: stmt_block stmt_ends_op  */
#line 238 "parser.y"
                                    { (yyval.stmt_un)=create_block_stmt((yyvsp[-1].block_un)); }
#line 2114 "parser.tab.c"
    break;

  case 67: /* stmt: if_stmt stmt_ends_op  */
#line 239 "parser.y"
                                    { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 2120 "parser.tab.c"
    break;

  case 68: /* stmt: for_stmt stmt_ends_op  */
#line 240 "parser.y"
                                    { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 2126 "parser.tab.c"
    break;

  case 69: /* stmt: while_stmt stmt_ends_op  */
#line 241 "parser.y"
                                    { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 2132 "parser.tab.c"
    break;

  case 70: /* stmt: until_stmt stmt_ends_op  */
#line 242 "parser.y"
                                    { (yyval.stmt_un)=(yyvsp[-1].stmt_un); }
#line 2138 "parser.tab.c"
    break;

  case 71: /* stmt: RETURN expr stmt_ends  */
#line 243 "parser.y"
                                    { (yyval.stmt_un)=create_return_stmt((yyvsp[-1].expr_un)); }
#line 2144 "parser.tab.c"
    break;

  case 72: /* stmt: RETURN stmt_ends  */
#line 244 "parser.y"
                                    { (yyval.stmt_un)=create_return_stmt(0); }
#line 2150 "parser.tab.c"
    break;

  case 73: /* stmt_list_not_empty: stmt  */
#line 247 "parser.y"
                                    { (yyval.stmt_list_un)=create_stmt_list((yyvsp[0].stmt_un)); }
#line 2156 "parser.tab.c"
    break;

  case 74: /* stmt_list_not_empty: stmt_list_not_empty stmt  */
#line 248 "parser.y"
                                    { (yyval.stmt_list_un)=add_to_stmt_list((yyvsp[-1].stmt_list_un), (yyvsp[0].stmt_un)); }
#line 2162 "parser.tab.c"
    break;

  case 75: /* stmt_list: %empty  */
#line 251 "parser.y"
                                    { (yyval.stmt_list_un)=0; }
#line 2168 "parser.tab.c"
    break;

  case 76: /* stmt_list: stmt_list_not_empty  */
#line 252 "parser.y"
                                    { (yyval.stmt_list_un)=(yyvsp[0].stmt_list_un); }
#line 2174 "parser.tab.c"
    break;

  case 77: /* stmt_block: BEGIN_KEYWORD stmt_ends_op stmt_list END  */
#line 255 "parser.y"
                                                      { (yyval.block_un)=create_stmt_block_struct((yyvsp[-1].stmt_list_un)); }
#line 2180 "parser.tab.c"
    break;

  case 78: /* if_start_stmt: IF new_lines_op expr stmt_ends stmt_list  */
#line 258 "parser.y"
                                                                                            { (yyval.if_part_un)=create_if_part_struct((yyvsp[-2].expr_un), (yyvsp[0].stmt_list_un)); }
#line 2186 "parser.tab.c"
    break;

  case 79: /* if_start_stmt: IF new_lines_op expr SEMICOLON_SYMBOL new_lines_op THEN stmt_ends_op stmt_list  */
#line 259 "parser.y"
                                                                                            { (yyval.if_part_un)=create_if_part_struct((yyvsp[-5].expr_un), (yyvsp[0].stmt_list_un)); }
#line 2192 "parser.tab.c"
    break;

  case 80: /* if_start_stmt: IF new_lines_op expr new_lines_op THEN stmt_ends_op stmt_list  */
#line 260 "parser.y"
                                                                                            { (yyval.if_part_un)=create_if_part_struct((yyvsp[-4].expr_un), (yyvsp[0].stmt_list_un)); }
#line 2198 "parser.tab.c"
    break;

  case 81: /* elsif_stmt: ELSIF new_lines_op expr stmt_ends stmt_list  */
#line 263 "parser.y"
                                                                                            { (yyval.if_part_un)=create_if_part_struct((yyvsp[-2].expr_un), (yyvsp[0].stmt_list_un)); }
#line 2204 "parser.tab.c"
    break;

  case 82: /* elsif_stmt: ELSIF new_lines_op expr new_lines_op THEN stmt_ends_op stmt_list  */
#line 264 "parser.y"
                                                                                            { (yyval.if_part_un)=create_if_part_struct((yyvsp[-4].expr_un), (yyvsp[0].stmt_list_un)); }
#line 2210 "parser.tab.c"
    break;

  case 83: /* elsif_stmt: ELSIF new_lines_op expr SEMICOLON_SYMBOL new_lines_op THEN stmt_ends_op stmt_list  */
#line 265 "parser.y"
                                                                                            { (yyval.if_part_un)=create_if_part_struct((yyvsp[-5].expr_un), (yyvsp[0].stmt_list_un)); }
#line 2216 "parser.tab.c"
    break;

  case 84: /* elsif_stmt_list: elsif_stmt  */
#line 268 "parser.y"
                                                                                            { (yyval.elsif_list_un)=create_elsif_stmt_list((yyvsp[0].if_part_un)); }
#line 2222 "parser.tab.c"
    break;

  case 85: /* elsif_stmt_list: elsif_stmt_list elsif_stmt  */
#line 269 "parser.y"
                                                                                            { (yyval.elsif_list_un)=add_to_elsif_stmt_list((yyvsp[-1].elsif_list_un), (yyvsp[0].if_part_un)); }
#line 2228 "parser.tab.c"
    break;

  case 86: /* if_stmt: if_start_stmt END  */
#line 272 "parser.y"
                                                                                            { (yyval.stmt_un)=create_if_stmt((yyvsp[-1].if_part_un), 0, 0); }
#line 2234 "parser.tab.c"
    break;

  case 87: /* if_stmt: if_start_stmt ELSE stmt_ends_op stmt_list END  */
#line 273 "parser.y"
                                                                                            { (yyval.stmt_un)=create_if_stmt((yyvsp[-4].if_part_un), 0, (yyvsp[-1].stmt_list_un)); }
#line 2240 "parser.tab.c"
    break;

  case 88: /* if_stmt: if_start_stmt elsif_stmt_list END  */
#line 274 "parser.y"
                                                                                            { (yyval.stmt_un)=create_if_stmt((yyvsp[-2].if_part_un), (yyvsp[-1].elsif_list_un), 0); }
#line 2246 "parser.tab.c"
    break;

  case 89: /* if_stmt: if_start_stmt elsif_stmt_list ELSE stmt_ends_op stmt_list END  */
#line 275 "parser.y"
                                                                                            { (yyval.stmt_un)=create_if_stmt((yyvsp[-5].if_part_un), (yyvsp[-4].elsif_list_un), (yyvsp[-1].stmt_list_un)); }
#line 2252 "parser.tab.c"
    break;

  case 90: /* for_stmt: FOR new_lines_op VAR_OR_METHOD_NAME IN new_lines_op expr stmt_ends stmt_list END  */
#line 278 "parser.y"
                                                                                                { (yyval.stmt_un)=create_for_stmt((yyvsp[-6].var_name_un), (yyvsp[-3].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 2258 "parser.tab.c"
    break;

  case 91: /* for_stmt: FOR new_lines_op INSTANCE_VAR_NAME IN new_lines_op expr stmt_ends stmt_list END  */
#line 279 "parser.y"
                                                                                                { (yyval.stmt_un)=create_for_stmt((yyvsp[-6].instance_var_name_un), (yyvsp[-3].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 2264 "parser.tab.c"
    break;

  case 92: /* for_stmt: FOR new_lines_op VAR_OR_METHOD_NAME IN new_lines_op expr DO stmt_ends_op stmt_list END  */
#line 280 "parser.y"
                                                                                                    { (yyval.stmt_un)=create_for_stmt((yyvsp[-7].var_name_un), (yyvsp[-4].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 2270 "parser.tab.c"
    break;

  case 93: /* for_stmt: FOR new_lines_op INSTANCE_VAR_NAME IN new_lines_op expr DO stmt_ends_op stmt_list END  */
#line 281 "parser.y"
                                                                                                { (yyval.stmt_un)=create_for_stmt((yyvsp[-7].instance_var_name_un), (yyvsp[-4].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 2276 "parser.tab.c"
    break;

  case 94: /* while_stmt: WHILE new_lines_op expr stmt_ends stmt_list END  */
#line 284 "parser.y"
                                                                                                { (yyval.stmt_un)=create_while_stmt((yyvsp[-3].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 2282 "parser.tab.c"
    break;

  case 95: /* while_stmt: WHILE new_lines_op expr DO stmt_ends_op stmt_list END  */
#line 285 "parser.y"
                                                                                                    { (yyval.stmt_un)=create_while_stmt((yyvsp[-4].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 2288 "parser.tab.c"
    break;

  case 96: /* until_stmt: UNTIL new_lines_op expr stmt_ends stmt_list END  */
#line 288 "parser.y"
                                                                                                { (yyval.stmt_un)=create_until_stmt((yyvsp[-3].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 2294 "parser.tab.c"
    break;

  case 97: /* until_stmt: UNTIL new_lines_op expr DO stmt_ends_op stmt_list END  */
#line 289 "parser.y"
                                                                                                    { (yyval.stmt_un)=create_until_stmt((yyvsp[-4].expr_un), (yyvsp[-1].stmt_list_un)); }
#line 2300 "parser.tab.c"
    break;

  case 98: /* method_param: VAR_OR_METHOD_NAME  */
#line 292 "parser.y"
                                                                                                { (yyval.method_param_un)=create_method_param_struct((yyvsp[0].var_name_un), 0); }
#line 2306 "parser.tab.c"
    break;

  case 99: /* method_param: VAR_OR_METHOD_NAME ASSIGN_OP expr  */
#line 293 "parser.y"
                                                                                                    { (yyval.method_param_un)=create_method_param_struct((yyvsp[-2].var_name_un), (yyvsp[0].expr_un)); }
#line 2312 "parser.tab.c"
    break;

  case 100: /* method_params_list: %empty  */
#line 296 "parser.y"
                                                                                                { (yyval.method_param_list_un)=0; }
#line 2318 "parser.tab.c"
    break;

  case 101: /* method_params_list: method_params_list_not_empty  */
#line 297 "parser.y"
                                                                                                    { (yyval.method_param_list_un)=(yyvsp[0].method_param_list_un); }
#line 2324 "parser.tab.c"
    break;

  case 102: /* method_params_list_not_empty: method_param  */
#line 300 "parser.y"
                                                                                                { (yyval.method_param_list_un)=create_method_param_list((yyvsp[0].method_param_un)); }
#line 2330 "parser.tab.c"
    break;

  case 103: /* method_params_list_not_empty: method_params_list_not_empty COMMA_SYMBOL new_lines_op method_param  */
#line 301 "parser.y"
                                                                                                    { (yyval.method_param_list_un)=add_to_method_param_list((yyvsp[-3].method_param_list_un), (yyvsp[0].method_param_un)); }
#line 2336 "parser.tab.c"
    break;

  case 104: /* def_method_stmt: DEF VAR_OR_METHOD_NAME stmt_ends stmt_list END stmt_ends_op  */
#line 304 "parser.y"
                                                                                                                                   { (yyval.def_method_un)=create_def_method_struct((yyvsp[-4].var_name_un), 0, (yyvsp[-2].stmt_list_un)); }
#line 2342 "parser.tab.c"
    break;

  case 105: /* def_method_stmt: DEF VAR_OR_METHOD_NAME OPEN_ROUND_BRACKET method_params_list CLOSE_ROUND_BRACKET stmt_ends_op stmt_list END stmt_ends_op  */
#line 305 "parser.y"
                                                                                                                                   { (yyval.def_method_un)=create_def_method_struct((yyvsp[-7].var_name_un), (yyvsp[-5].method_param_list_un), (yyvsp[-2].stmt_list_un)); }
#line 2348 "parser.tab.c"
    break;

  case 106: /* expr_list: %empty  */
#line 308 "parser.y"
                                                                                                    { (yyval.expr_list_un)=0; }
#line 2354 "parser.tab.c"
    break;

  case 107: /* expr_list: expr_list_not_empty  */
#line 309 "parser.y"
                                                                                                        { (yyval.expr_list_un)=(yyvsp[0].expr_list_un); }
#line 2360 "parser.tab.c"
    break;

  case 108: /* expr_list_not_empty: expr new_lines_op  */
#line 312 "parser.y"
                                                                                                    { (yyval.expr_list_un)=create_expr_list((yyvsp[-1].expr_un)); }
#line 2366 "parser.tab.c"
    break;

  case 109: /* expr_list_not_empty: expr_list_not_empty COMMA_SYMBOL new_lines_op expr new_lines_op  */
#line 313 "parser.y"
                                                                                                        { (yyval.expr_list_un)=add_to_expr_list((yyvsp[-4].expr_list_un), (yyvsp[-1].expr_un)); }
#line 2372 "parser.tab.c"
    break;

  case 110: /* class_declaration: CLASS VAR_OR_METHOD_NAME stmt_ends def_method_list_op END stmt_ends  */
#line 316 "parser.y"
                                                                                                            { (yyval.program_item_un)=create_class_declaration_program_item((yyvsp[-4].var_name_un), 0, (yyvsp[-2].def_method_list_un)); }
#line 2378 "parser.tab.c"
    break;

  case 111: /* class_declaration: CLASS VAR_OR_METHOD_NAME LESS_OP new_lines_op VAR_OR_METHOD_NAME stmt_ends def_method_list_op END stmt_ends  */
#line 317 "parser.y"
                                                                                                                    { (yyval.program_item_un)=create_class_declaration_program_item((yyvsp[-7].var_name_un), (yyvsp[-4].var_name_un), (yyvsp[-2].def_method_list_un));  }
#line 2384 "parser.tab.c"
    break;

  case 112: /* def_method_list_op: %empty  */
#line 321 "parser.y"
                                                                                                    { (yyval.def_method_list_un)=0; }
#line 2390 "parser.tab.c"
    break;

  case 113: /* def_method_list_op: def_method_list  */
#line 322 "parser.y"
                                                                                                    { (yyval.def_method_list_un)=(yyvsp[0].def_method_list_un); }
#line 2396 "parser.tab.c"
    break;

  case 114: /* def_method_list: def_method_stmt  */
#line 325 "parser.y"
                                                                                                    { (yyval.def_method_list_un)=create_def_method_list((yyvsp[0].def_method_un)); }
#line 2402 "parser.tab.c"
    break;

  case 115: /* def_method_list: def_method_list def_method_stmt  */
#line 326 "parser.y"
                                                                                                    { (yyval.def_method_list_un)=add_to_def_method_list((yyvsp[-1].def_method_list_un), (yyvsp[0].def_method_un)); }
#line 2408 "parser.tab.c"
    break;


#line 2412 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 329 "parser.y"


void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
