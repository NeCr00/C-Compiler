/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  // Declare stuff from Flex that Bison needs to know about:
  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;
  extern int yylineno;
  extern int  yywrap;
  void yyerror(const char *s);



#line 82 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 17 "parser.y" /* yacc.c:355  */


#include "helper.h"
struct Array variables;
struct Array functions;
struct Array structures;

#line 120 "parser.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PROGRAM = 258,
    IF = 259,
    FOR = 260,
    FUNCTION = 261,
    ELSEIF = 262,
    ELSE = 263,
    NEWLINE = 264,
    THEN = 265,
    ENDIF = 266,
    CHAR = 267,
    INTEGER = 268,
    VARS = 269,
    ENDFUNCTION = 270,
    RETURN = 271,
    STARTMAIN = 272,
    ENDMAIN = 273,
    WHILE = 274,
    ENDWHILE = 275,
    TO = 276,
    ENDFOR = 277,
    AND = 278,
    OR = 279,
    SWITCH = 280,
    CASE = 281,
    DEFAULT = 282,
    PRINT = 283,
    BREAK = 284,
    COL = 285,
    COMMA = 286,
    COLON = 287,
    EQUAL = 288,
    LPAR = 289,
    RPAR = 290,
    LSBRA = 291,
    RSBRA = 292,
    LBRA = 293,
    RBRA = 294,
    MINUS = 295,
    PLUS = 296,
    PERCENT = 297,
    LESS_THAN_OP = 298,
    GREATER_THAN_OP = 299,
    OR_SIGN = 300,
    STAR = 301,
    SLASH = 302,
    LE_OP = 303,
    GE_OP = 304,
    EQ_OP = 305,
    NE_OP = 306,
    APOSTROPHE = 307,
    QUOTATION = 308,
    FLOAT = 309,
    INTPART = 310,
    STEP = 311,
    ENDSWITCH = 312,
    STRUCT = 313,
    ENDSTRUCT = 314,
    TYPEDEF = 315,
    EXP = 316,
    CHARACTER = 317,
    DECINTEGER = 318,
    POINTFLOAT = 319,
    IDENTIFIER = 320,
    SHORTSTRING = 321
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "parser.y" /* yacc.c:355  */

    struct Variable item ;
	

#line 204 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 221 "parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   667

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  232

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      65,    66
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    65,    66,    69,    70,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    84,    86,    88,    93,
      94,    96,    98,   100,   104,   105,   108,   112,   113,   116,
     117,   120,   124,   126,   130,   131,   133,   135,   136,   139,
     143,   151,   152,   155,   158,   159,   162,   165,   168,   169,
     170,   171,   174,   177,   178,   181,   184,   187,   190,   193,
     194,   197,   198,   200,   206,   208,   210,   212,   214,   219,
     220,   221,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   237,   239,   241,   243,   251,   252,   255,   256,
     257,   258,   262,   266,   268,   273,   274,   275,   278,   280,
     286,   287,   288,   289,   290,   291,   294,   295,   298,   302,
     304,   306,   308,   310,   314,   318,   322,   326
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "IF", "FOR", "FUNCTION",
  "ELSEIF", "ELSE", "NEWLINE", "THEN", "ENDIF", "CHAR", "INTEGER", "VARS",
  "ENDFUNCTION", "RETURN", "STARTMAIN", "ENDMAIN", "WHILE", "ENDWHILE",
  "TO", "ENDFOR", "AND", "OR", "SWITCH", "CASE", "DEFAULT", "PRINT",
  "BREAK", "COL", "COMMA", "COLON", "EQUAL", "LPAR", "RPAR", "LSBRA",
  "RSBRA", "LBRA", "RBRA", "MINUS", "PLUS", "PERCENT", "LESS_THAN_OP",
  "GREATER_THAN_OP", "OR_SIGN", "STAR", "SLASH", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "APOSTROPHE", "QUOTATION", "FLOAT", "INTPART", "STEP",
  "ENDSWITCH", "STRUCT", "ENDSTRUCT", "TYPEDEF", "EXP", "CHARACTER",
  "DECINTEGER", "POINTFLOAT", "IDENTIFIER", "SHORTSTRING", "$accept",
  "program", "main_section", "statement_list", "statement", "call_fun",
  "function_list", "function", "fun_target_list", "fun_target",
  "return_stmt", "target_return", "break_stmt", "create_struct",
  "struct_stmt_list", "struct_stmt", "struct", "typedef_struct",
  "switch_case_stmt", "switch", "case_list", "case", "default", "if_stmt",
  "if", "elseif_list", "elseif", "else", "while_stmt", "for_stmt",
  "target_for", "print_stmt", "print_input", "expression_list",
  "expression", "atom", "assignment_stmt_list", "assignment_stmt",
  "empty_assignment_stmt_list", "empty_assignment_stmt", "type", "target",
  "comparison_op", "logical_op", "string", "literal", "character",
  "floatnum", "integer", "identifier", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321
};
# endif

#define YYPACT_NINF -194

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-194)))

#define YYTABLE_NINF -84

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,   -35,    36,   -33,  -194,    -3,   -11,    -2,  -194,  -194,
    -194,  -194,    60,    -3,    -3,     9,  -194,  -194,    63,    77,
      66,    14,  -194,  -194,  -194,  -194,  -194,    19,   142,    41,
      63,    63,    74,    -3,    63,    76,    78,    79,    23,    -3,
      83,   215,  -194,  -194,  -194,  -194,  -194,    97,  -194,    30,
    -194,  -194,  -194,  -194,    65,  -194,   382,  -194,   150,  -194,
      41,   440,    83,  -194,    48,    24,  -194,    -3,   449,    92,
     181,   449,   449,   -15,  -194,    -3,    62,  -194,  -194,    99,
      39,  -194,   102,   308,  -194,   107,  -194,   128,  -194,   440,
     191,   -19,  -194,  -194,  -194,  -194,   119,   563,  -194,  -194,
    -194,  -194,  -194,  -194,   118,   286,   119,   331,  -194,   122,
     119,  -194,    63,   233,  -194,   323,   360,   126,   246,   389,
     418,   131,    34,  -194,   127,   449,   133,  -194,  -194,   106,
     449,   308,  -194,  -194,   160,  -194,   119,  -194,    57,   447,
    -194,  -194,   449,  -194,  -194,   449,   449,  -194,  -194,   449,
     449,  -194,  -194,  -194,  -194,   449,   449,   449,    62,   476,
     440,  -194,    63,   265,   447,   166,   -19,  -194,   308,  -194,
    -194,   148,    18,  -194,   505,   308,  -194,   534,  -194,  -194,
    -194,   563,   592,   592,   606,   606,   563,   563,   563,   145,
     119,   181,   252,   175,   308,   170,  -194,  -194,   281,  -194,
     155,  -194,  -194,  -194,  -194,  -194,   163,   308,   308,  -194,
     265,   168,  -194,  -194,  -194,   308,   -19,  -194,   161,   308,
     308,   184,  -194,   147,   171,   308,  -194,   -19,  -194,   308,
     303,  -194
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    36,     1,     0,     0,    21,    34,    37,
      38,   117,     0,     0,     0,     0,    19,    35,     0,     0,
       0,     0,     2,    20,    96,    95,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     6,    15,     9,    14,    13,     0,    12,     0,
      10,    11,     8,     7,     0,    93,     0,    39,     0,    86,
       0,     0,    98,    88,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     4,     5,     0,
       0,    45,     0,     0,    48,     0,    54,     0,    92,     0,
       0,     0,   114,   116,   115,   108,    18,    71,    72,    84,
      82,   111,   110,   109,    83,     0,    17,    33,    87,    90,
      89,    40,     0,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,    42,    44,     0,
       0,    56,    50,    53,     0,    49,    94,    81,     0,    71,
     113,   112,     0,   106,   107,     0,     0,   103,   102,     0,
       0,   104,   105,   100,   101,     0,     0,     0,     0,    16,
       0,    25,     0,     0,     0,     0,     0,     3,     0,    43,
      61,     0,     0,    99,     0,     0,    41,     0,    51,    70,
      80,    69,    74,    73,    75,    76,    77,    78,    79,     0,
      91,     0,    27,     0,     0,     0,    60,    59,     0,    62,
       0,    68,    67,    66,    65,    64,     0,    47,     0,    85,
       0,     0,    29,    30,    23,    52,     0,    57,     0,     0,
      55,     0,    28,     0,     0,    46,    22,     0,    63,     0,
       0,    58
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,  -194,   -59,   -41,  -194,  -194,   189,  -194,    93,
       1,  -194,  -194,  -194,  -194,   200,  -194,  -194,  -194,  -194,
    -194,   132,  -194,  -194,  -194,  -194,   123,   130,  -194,  -194,
    -193,  -194,  -194,   -40,    72,  -194,   -28,   -24,  -194,  -194,
     -18,   -12,  -194,  -194,   -68,    21,    44,   -79,   -69,    -4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    22,    41,    42,    43,    15,    16,    65,    66,
     193,   211,    44,    45,     7,     8,     9,    10,    46,    47,
      80,    81,   129,    48,    49,    85,    86,    87,    50,    51,
     195,    52,   200,   138,    97,    98,    27,    28,    53,    54,
      29,    55,   156,   157,    99,   100,   101,   102,   103,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,    12,    64,    58,    14,   122,    70,   124,     1,    19,
      20,   118,   140,    67,    96,    14,   106,    63,    32,    33,
     121,   110,   141,   223,   131,     5,    21,     6,    34,    69,
       3,    24,    25,    35,   229,    75,     4,    82,    83,    36,
      58,    84,    37,    38,    93,    94,    58,    13,   109,   136,
     104,    95,   107,    74,   163,   112,     5,   104,     6,   113,
      24,    25,    11,   114,   104,    79,   126,   104,   104,   171,
     172,   123,    39,    26,    18,    24,    25,    78,    57,    40,
      92,    93,    94,    11,    95,   104,   104,   196,   142,   189,
      78,    30,   179,   203,    67,    88,   127,   197,    89,    90,
      31,   104,    26,   204,   201,    91,    62,   111,    68,   198,
      71,   104,    72,    73,    82,    83,   207,    26,   132,    76,
     190,   104,    78,    79,   117,    93,   104,    92,    93,    94,
      11,    95,   210,   125,   191,   215,   130,   196,   104,   135,
     116,   104,   104,   119,   120,   104,   104,   197,   196,   220,
     142,   104,   104,   104,   158,   160,   104,    78,   197,   166,
     225,   170,   139,   176,   173,   175,    78,    58,   205,    78,
     230,   178,    59,    60,    78,    61,   194,   139,   199,    78,
     108,    60,   209,    61,    78,    32,    33,   164,   213,    78,
     214,   216,   218,    24,    25,   219,   224,   174,   222,   226,
      35,   228,   177,   227,    23,   161,    36,    17,   133,    37,
      38,   221,   128,   212,   181,   134,   202,   182,   183,    32,
      33,   184,   185,     0,     0,    90,   137,   186,   187,   188,
       0,    91,     0,    77,    35,    26,     0,    32,    33,    39,
      36,     0,     0,    37,    38,     0,    40,   162,     0,     0,
      32,    33,    35,    92,    93,    94,    11,    95,    36,     0,
       0,    37,    38,     0,   167,    35,     0,     0,     0,    32,
      33,    36,     0,    39,    37,    38,     0,     0,     0,     0,
      40,   192,     0,     0,    35,    32,    33,     0,     0,     0,
      36,    39,    91,    37,    38,     0,     0,     0,    40,     0,
      35,   217,     0,     0,    39,     0,    36,    32,    33,    37,
      38,    40,    32,    33,    92,    93,    94,    11,     0,     0,
      90,   159,    35,    39,     0,   231,    91,    35,    36,     0,
      40,    37,    38,    36,     0,     0,    37,    38,     0,    39,
       0,     0,     0,     0,     0,     0,    40,     0,    92,    93,
      94,    11,    95,     0,   -83,   -83,     0,   115,   137,     0,
       0,    39,   -83,    91,     0,     0,    39,   158,    40,     0,
       0,   -83,   -83,    40,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   143,   144,    92,    93,    94,    11,    95,
       0,     0,   -83,     0,     0,   165,     0,     0,     0,     0,
     145,   146,     0,   147,   148,     0,   149,   150,   151,   152,
     153,   154,   143,   144,     0,     0,   105,     0,     0,     0,
       0,   155,    91,     0,   168,     0,     0,     0,     0,   145,
     146,     0,   147,   148,     0,   149,   150,   151,   152,   153,
     154,   143,   144,     0,    92,    93,    94,    11,    95,     0,
     155,     0,     0,   169,     0,     0,     0,     0,   145,   146,
       0,   147,   148,     0,   149,   150,   151,   152,   153,   154,
     143,   144,     0,     0,    90,     0,     0,     0,     0,   155,
      91,     0,   180,   115,     0,     0,     0,   145,   146,    91,
     147,   148,     0,   149,   150,   151,   152,   153,   154,   -81,
     -81,     0,    92,    93,    94,    11,    95,   -81,   155,     0,
       0,    92,    93,    94,    11,    95,   -81,   -81,     0,   -81,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   143,   144,
       0,     0,     0,     0,     0,     0,     0,   -81,     0,     0,
     206,     0,     0,     0,     0,   145,   146,     0,   147,   148,
       0,   149,   150,   151,   152,   153,   154,   143,   144,     0,
       0,     0,     0,     0,     0,     0,   155,     0,     0,   208,
       0,     0,     0,     0,   145,   146,     0,   147,   148,     0,
     149,   150,   151,   152,   153,   154,   143,   144,     0,     0,
       0,     0,     0,     0,     0,   155,     0,     0,     0,     0,
       0,     0,     0,   145,   146,     0,   147,   148,     0,   149,
     150,   151,   152,   153,   154,   143,   144,     0,     0,     0,
       0,     0,     0,     0,   155,     0,     0,     0,     0,   143,
     144,     0,     0,     0,     0,   147,   148,     0,   149,   150,
     151,   152,   153,   154,     0,     0,     0,     0,     0,   147,
     148,     0,     0,   155,   151,   152,   153,   154,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   155
};

static const yytype_int16 yycheck[] =
{
      41,     5,    30,    27,     6,    73,    34,    76,     3,    13,
      14,    70,    91,    31,    54,     6,    56,    29,     4,     5,
      35,    61,    91,   216,    83,    58,    17,    60,    14,    33,
      65,    12,    13,    19,   227,    39,     0,     7,     8,    25,
      64,    11,    28,    29,    63,    64,    70,    58,    60,    89,
      54,    66,    56,    30,   113,    31,    58,    61,    60,    35,
      12,    13,    65,    67,    68,    26,    27,    71,    72,    35,
      36,    75,    58,    54,    14,    12,    13,   118,    59,    65,
      62,    63,    64,    65,    66,    89,    90,   166,    31,   158,
     131,    14,    35,   172,   112,    30,    57,   166,    33,    34,
      34,   105,    54,   172,   172,    40,    65,    59,    34,   168,
      34,   115,    34,    34,     7,     8,   175,    54,    11,    36,
     160,   125,   163,    26,    32,    63,   130,    62,    63,    64,
      65,    66,   191,    34,   162,   194,    34,   216,   142,    11,
      68,   145,   146,    71,    72,   149,   150,   216,   227,   208,
      31,   155,   156,   157,    36,    33,   160,   198,   227,    33,
     219,    30,    90,    57,    37,    32,   207,   191,   172,   210,
     229,    11,    30,    31,   215,    33,    10,   105,    30,   220,
      30,    31,    37,    33,   225,     4,     5,   115,   192,   230,
      15,    21,    37,    12,    13,    32,    35,   125,    30,    15,
      19,    30,   130,    56,    15,   112,    25,     7,    85,    28,
      29,   210,    80,   192,   142,    85,   172,   145,   146,     4,
       5,   149,   150,    -1,    -1,    34,    35,   155,   156,   157,
      -1,    40,    -1,    18,    19,    54,    -1,     4,     5,    58,
      25,    -1,    -1,    28,    29,    -1,    65,    14,    -1,    -1,
       4,     5,    19,    62,    63,    64,    65,    66,    25,    -1,
      -1,    28,    29,    -1,    18,    19,    -1,    -1,    -1,     4,
       5,    25,    -1,    58,    28,    29,    -1,    -1,    -1,    -1,
      65,    16,    -1,    -1,    19,     4,     5,    -1,    -1,    -1,
      25,    58,    40,    28,    29,    -1,    -1,    -1,    65,    -1,
      19,    20,    -1,    -1,    58,    -1,    25,     4,     5,    28,
      29,    65,     4,     5,    62,    63,    64,    65,    -1,    -1,
      34,    35,    19,    58,    -1,    22,    40,    19,    25,    -1,
      65,    28,    29,    25,    -1,    -1,    28,    29,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    62,    63,
      64,    65,    66,    -1,    23,    24,    -1,    34,    35,    -1,
      -1,    58,    31,    40,    -1,    -1,    58,    36,    65,    -1,
      -1,    40,    41,    65,    43,    44,    -1,    46,    47,    48,
      49,    50,    51,    23,    24,    62,    63,    64,    65,    66,
      -1,    -1,    61,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    -1,    46,    47,    48,    49,
      50,    51,    23,    24,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    61,    40,    -1,    35,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    -1,    46,    47,    48,    49,    50,
      51,    23,    24,    -1,    62,    63,    64,    65,    66,    -1,
      61,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    -1,    46,    47,    48,    49,    50,    51,
      23,    24,    -1,    -1,    34,    -1,    -1,    -1,    -1,    61,
      40,    -1,    35,    34,    -1,    -1,    -1,    40,    41,    40,
      43,    44,    -1,    46,    47,    48,    49,    50,    51,    23,
      24,    -1,    62,    63,    64,    65,    66,    31,    61,    -1,
      -1,    62,    63,    64,    65,    66,    40,    41,    -1,    43,
      44,    -1,    46,    47,    48,    49,    50,    51,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,
      -1,    46,    47,    48,    49,    50,    51,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    -1,
      46,    47,    48,    49,    50,    51,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    -1,    46,
      47,    48,    49,    50,    51,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    -1,    43,    44,    -1,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    61,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    68,    65,     0,    58,    60,    81,    82,    83,
      84,    65,   116,    58,     6,    73,    74,    82,    14,   116,
     116,    17,    69,    74,    12,    13,    54,   103,   104,   107,
      14,    34,     4,     5,    14,    19,    25,    28,    29,    58,
      65,    70,    71,    72,    79,    80,    85,    86,    90,    91,
      95,    96,    98,   105,   106,   108,   116,    59,   104,    30,
      31,    33,    65,   108,   103,    75,    76,   107,    34,   116,
     103,    34,    34,    34,    30,   116,    36,    18,    71,    26,
      87,    88,     7,     8,    11,    92,    93,    94,    30,    33,
      34,    40,    62,    63,    64,    66,   100,   101,   102,   111,
     112,   113,   114,   115,   116,    34,   100,   116,    30,   108,
     100,    59,    31,    35,   116,    34,   101,    32,    70,   101,
     101,    35,   111,   116,   115,    34,    27,    57,    88,    89,
      34,    70,    11,    93,    94,    11,   100,    35,   100,   101,
     114,   115,    31,    23,    24,    40,    41,    43,    44,    46,
      47,    48,    49,    50,    51,    61,   109,   110,    36,    35,
      33,    76,    14,    70,   101,    35,    33,    18,    35,    35,
      30,    35,    36,    37,   101,    32,    57,   101,    11,    35,
      35,   101,   101,   101,   101,   101,   101,   101,   101,   115,
     100,   103,    16,    77,    10,    97,   114,   115,    70,    30,
      99,   111,   113,   114,   115,   116,    35,    70,    35,    37,
      70,    78,   112,   116,    15,    70,    21,    20,    37,    32,
      70,    77,    30,    97,    35,    70,    15,    56,    30,    97,
      70,    22
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    72,    73,
      73,    74,    74,    74,    75,    75,    76,    77,    77,    78,
      78,    79,    80,    80,    81,    81,    82,    82,    82,    83,
      84,    85,    85,    86,    87,    87,    88,    89,    90,    90,
      90,    90,    91,    92,    92,    93,    94,    95,    96,    97,
      97,    98,    98,    98,    99,    99,    99,    99,    99,   100,
     100,   100,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   102,   102,   102,   102,   103,   103,   104,   104,
     104,   104,   105,   106,   106,   107,   107,   107,   108,   108,
     109,   109,   109,   109,   109,   109,   110,   110,   111,   112,
     112,   112,   112,   112,   113,   114,   115,   116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     5,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     1,
       2,     0,    10,     8,     1,     3,     2,     1,     3,     1,
       1,     2,     3,     2,     1,     2,     0,     1,     1,     5,
       6,     4,     3,     4,     2,     1,     6,     3,     2,     3,
       3,     4,     6,     2,     1,     5,     2,     6,    11,     1,
       1,     4,     5,     8,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     1,     1,     1,     4,     2,     3,     2,     3,
       3,     5,     2,     1,     3,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 61 "parser.y" /* yacc.c:1646  */
    {printf("Success! You are awesome. \n");}
#line 1560 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 85 "parser.y" /* yacc.c:1646  */
    {checkDefinition((yyvsp[-2].item),&functions);}
#line 1566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 87 "parser.y" /* yacc.c:1646  */
    {checkDefinition ((yyvsp[-1].item),&functions);}
#line 1572 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 99 "parser.y" /* yacc.c:1646  */
    {(yyvsp[-8].item).type=FUN; insertArray(&functions,(yyvsp[-8].item));}
#line 1578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 101 "parser.y" /* yacc.c:1646  */
    {(yyvsp[-6].item).type=FUN; insertArray(&functions,(yyvsp[-6].item));}
#line 1584 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 125 "parser.y" /* yacc.c:1646  */
    {checkDefinition((yyvsp[-1].item), &structures);}
#line 1590 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 127 "parser.y" /* yacc.c:1646  */
    {checkDefinition((yyvsp[-1].item), &structures);}
#line 1596 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 140 "parser.y" /* yacc.c:1646  */
    {insertArray(&structures, (yyvsp[-3].item));}
#line 1602 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 144 "parser.y" /* yacc.c:1646  */
    {insertArray(&structures, (yyvsp[-3].item));}
#line 1608 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 199 "parser.y" /* yacc.c:1646  */
    { struct Variable empty; empty.type=FUN;  print((yyvsp[-2].item).string,empty, &variables);}
#line 1614 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 201 "parser.y" /* yacc.c:1646  */
    {print((yyvsp[-5].item).string,(yyvsp[-3].item), &variables);}
#line 1620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 207 "parser.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item);}
#line 1626 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 209 "parser.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item);}
#line 1632 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 211 "parser.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item);}
#line 1638 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 213 "parser.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item);}
#line 1644 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 215 "parser.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item);}
#line 1650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 299 "parser.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item); }
#line 1656 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 303 "parser.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item); }
#line 1662 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 305 "parser.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item); }
#line 1668 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 307 "parser.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item); }
#line 1674 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 309 "parser.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item); }
#line 1680 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 311 "parser.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item); }
#line 1686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 315 "parser.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item); }
#line 1692 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 319 "parser.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item); }
#line 1698 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 323 "parser.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item); }
#line 1704 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 327 "parser.y" /* yacc.c:1646  */
    {(yyval.item) = (yyvsp[0].item); }
#line 1710 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1714 "parser.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 329 "parser.y" /* yacc.c:1906  */


int main(int argc, char** argv) {

   initArray(&variables, 5);
   initArray(&functions , 5);  // initially 5 elements   
   initArray(&structures, 5)   ;
 
 extern int yydebug;
 yydebug =1;

  // Open a file 
  FILE *myfile = fopen(argv[1], "r");
  //  is valid?
  if (!myfile) {
    
    return -1;
  }
  // read the file
  yyin = myfile;
  
  // Parse through the input:
  yyparse();
 
}
void yyerror(const char* s) {
	fprintf(stderr, "Line: %d --> Parser error\n", yylineno);
	exit(1);
}
