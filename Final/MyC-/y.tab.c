
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "myc.yacc"

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <map>
#include <list>
#include "myc.h"
using namespace std;
 extern FILE *yyin;
// the root of the abstract syntax tree
statement *root; 
// for keeping track of line numbers in the program we are parsing
  int line_num = 1;
// function prototypes, we need the yylex return prototype so C++ won't complain
int yylex();
void yyerror(const char *s);


/* Line 189 of yacc.c  */
#line 93 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     NUMBER = 259,
     NOTOKEN = 260,
     LPARENT = 261,
     RPARENT = 262,
     LCURLY = 263,
     RCURLY = 264,
     COMA = 265,
     SEMICOLON = 266,
     EQUAL = 267,
     INT = 268,
     FLOAT = 269,
     LONG = 270,
     VOID = 271,
     CHAR = 272,
     CHARSTAR = 273,
     AMPERSAND = 274,
     OROR = 275,
     ANDAND = 276,
     EQUALEQUAL = 277,
     NOTEQUAL = 278,
     LESS = 279,
     GREAT = 280,
     LESSEQUAL = 281,
     GREATEQUAL = 282,
     PLUS = 283,
     MINUS = 284,
     TIMES = 285,
     DIVIDE = 286,
     PERCENT = 287,
     IF = 288,
     ELSE = 289,
     WHILE = 290,
     DO = 291,
     FOR = 292,
     CONTINUE = 293,
     BREAK = 294,
     RETURN = 295,
     LSQUBRACKT = 296,
     RSQUBRACKT = 297,
     LOWER_THAN_ELSE = 298
   };
#endif
/* Tokens.  */
#define ID 258
#define NUMBER 259
#define NOTOKEN 260
#define LPARENT 261
#define RPARENT 262
#define LCURLY 263
#define RCURLY 264
#define COMA 265
#define SEMICOLON 266
#define EQUAL 267
#define INT 268
#define FLOAT 269
#define LONG 270
#define VOID 271
#define CHAR 272
#define CHARSTAR 273
#define AMPERSAND 274
#define OROR 275
#define ANDAND 276
#define EQUALEQUAL 277
#define NOTEQUAL 278
#define LESS 279
#define GREAT 280
#define LESSEQUAL 281
#define GREATEQUAL 282
#define PLUS 283
#define MINUS 284
#define TIMES 285
#define DIVIDE 286
#define PERCENT 287
#define IF 288
#define ELSE 289
#define WHILE 290
#define DO 291
#define FOR 292
#define CONTINUE 293
#define BREAK 294
#define RETURN 295
#define LSQUBRACKT 296
#define RSQUBRACKT 297
#define LOWER_THAN_ELSE 298




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 22 "myc.yacc"

  float num;
  char *id;
  exp_node *exp_node_ptr;
  statement *st;
  int t;



/* Line 214 of yacc.c  */
#line 225 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 237 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   149

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNRULES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    13,    14,    21,    25,
      27,    28,    30,    34,    37,    42,    46,    47,    49,    51,
      53,    55,    57,    59,    66,    76,    78,    80,    86,    89,
      94,    96,   101,   109,   111,   115,   120,   122,   123,   125,
     129,   131,   133,   137,   139,   143,   145,   149,   153,   155,
     159,   163,   167,   171,   173,   177,   181,   183,   187,   191,
     195,   198,   200,   201,   203,   206,   208,   214,   222,   234,
     242,   252
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    46,    -1,    47,    -1,    47,    48,    -1,
      47,    53,    -1,    -1,    55,     3,     6,    50,     7,    49,
      -1,     8,    69,     9,    -1,    51,    -1,    -1,    52,    -1,
      51,    10,    52,    -1,    55,     3,    -1,    55,     3,    54,
      11,    -1,    54,    10,     3,    -1,    -1,    17,    -1,    13,
      -1,    14,    -1,    18,    -1,    15,    -1,    16,    -1,    55,
       3,    41,     4,    42,    11,    -1,    55,     3,    41,     4,
      42,    41,     4,    42,    11,    -1,    53,    -1,    56,    -1,
      55,     3,    12,    58,    11,    -1,    62,    11,    -1,     3,
      12,    62,    11,    -1,     3,    -1,     3,    41,     4,    42,
      -1,     3,    41,     4,    42,    41,     4,    42,    -1,     4,
      -1,     6,    62,     7,    -1,     3,     6,    60,     7,    -1,
      61,    -1,    -1,    58,    -1,    61,    10,    58,    -1,    63,
      -1,    64,    -1,    63,    20,    64,    -1,    65,    -1,    64,
      21,    65,    -1,    66,    -1,    65,    22,    66,    -1,    65,
      23,    66,    -1,    67,    -1,    66,    24,    67,    -1,    66,
      25,    67,    -1,    66,    26,    67,    -1,    66,    27,    67,
      -1,    68,    -1,    67,    28,    68,    -1,    67,    29,    68,
      -1,    58,    -1,    68,    30,    58,    -1,    68,    31,    58,
      -1,    68,    32,    58,    -1,    70,    69,    -1,    71,    -1,
      -1,    57,    -1,    59,    11,    -1,    72,    -1,    40,     6,
      58,     7,    11,    -1,    33,     6,    62,     7,     8,    69,
       9,    -1,    33,     6,    62,     7,     8,    69,     9,    34,
       8,    69,     9,    -1,    35,     6,    62,     7,     8,    69,
       9,    -1,    36,     8,    69,     9,    35,     6,    62,     7,
      11,    -1,    37,     6,     3,    11,    62,    11,    62,     7,
       8,    69,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    74,    79,    83,    88,    95,   102,   109,
     114,   121,   124,   132,   140,   148,   153,   159,   160,   161,
     162,   163,   164,   169,   173,   181,   186,   191,   196,   201,
     207,   211,   215,   219,   223,   232,   239,   244,   250,   255,
     263,   273,   277,   284,   288,   295,   299,   303,   310,   314,
     318,   322,   326,   333,   337,   341,   348,   352,   356,   360,
     368,   372,   377,   384,   388,   392,   399,   406,   410,   414,
     418,   422
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUMBER", "NOTOKEN", "LPARENT",
  "RPARENT", "LCURLY", "RCURLY", "COMA", "SEMICOLON", "EQUAL", "INT",
  "FLOAT", "LONG", "VOID", "CHAR", "CHARSTAR", "AMPERSAND", "OROR",
  "ANDAND", "EQUALEQUAL", "NOTEQUAL", "LESS", "GREAT", "LESSEQUAL",
  "GREATEQUAL", "PLUS", "MINUS", "TIMES", "DIVIDE", "PERCENT", "IF",
  "ELSE", "WHILE", "DO", "FOR", "CONTINUE", "BREAK", "RETURN",
  "LSQUBRACKT", "RSQUBRACKT", "LOWER_THAN_ELSE", "$accept", "status",
  "program", "function_list", "function", "compound_stmt", "arguments",
  "arg_list", "arg", "global_var", "global_var_list", "var_type", "array",
  "assignment", "primary_expr", "call", "call_arguments", "call_arg_list",
  "expression", "logical_or_expr", "logical_and_expr", "equality_expr",
  "relational_expr", "additive_expr", "multiplicative_expr",
  "statement_list", "statement", "return_stmt", "conditional_statement", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    47,    47,    47,    48,    49,    50,
      50,    51,    51,    52,    53,    54,    54,    55,    55,    55,
      55,    55,    55,    56,    56,    57,    57,    57,    57,    57,
      58,    58,    58,    58,    58,    59,    60,    60,    61,    61,
      62,    63,    63,    64,    64,    65,    65,    65,    66,    66,
      66,    66,    66,    67,    67,    67,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    70,    71,    72,    72,    72,
      72,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     0,     6,     3,     1,
       0,     1,     3,     2,     4,     3,     0,     1,     1,     1,
       1,     1,     1,     6,     9,     1,     1,     5,     2,     4,
       1,     4,     7,     1,     3,     4,     1,     0,     1,     3,
       1,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       2,     1,     0,     1,     2,     1,     5,     7,    11,     7,
       9,    11
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     2,     3,     1,    18,    19,    21,    22,    17,
      20,     4,     5,     0,    16,    10,     0,     0,     9,    11,
       0,     0,    14,     0,     0,    13,    15,    62,     7,    12,
      30,    33,     0,     0,     0,     0,     0,     0,    25,     0,
      26,    63,    56,     0,     0,    40,    41,    43,    45,    48,
      53,     0,    62,    61,    65,    37,     0,     0,    30,     0,
       0,     0,    62,     0,     0,    16,    64,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,    60,    38,     0,    36,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,    42,    44,    46,    47,
      49,    50,    51,    52,    54,    55,    57,    58,    59,    35,
       0,    29,    31,     0,     0,     0,     0,     0,     0,     0,
      39,     0,    62,    62,     0,     0,    66,    27,     0,     0,
       0,     0,     0,     0,    23,     0,    32,    67,    69,     0,
       0,     0,     0,     0,     0,     0,    62,    70,    62,    24,
       0,     0,    68,    71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     3,    11,    28,    17,    18,    19,    38,
      16,    39,    40,    41,    42,    43,    84,    85,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -54
static const yytype_int8 yypact[] =
{
     -54,     4,   -54,    25,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,    14,    17,    25,    -1,    43,    56,   -54,
      64,    65,   -54,    61,    25,   -54,   -54,    41,   -54,   -54,
      -4,   -54,    45,    67,    69,    62,    73,    74,   -54,    79,
     -54,   -54,   -54,    72,    75,    68,    66,    13,   -12,    -3,
      33,    76,    41,   -54,   -54,    45,    45,    85,    49,    84,
      45,    45,    41,    89,    45,    -7,   -54,   -54,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,   -54,   -54,   -54,    86,    88,    83,    54,   -54,    92,
      95,    94,    93,    98,    45,   102,    66,    13,   -12,   -12,
      -3,    -3,    -3,    -3,    33,    33,   -54,   -54,   -54,   -54,
      45,   -54,    70,    99,   100,    77,    45,   103,   104,    71,
     -54,   105,    41,    41,   110,   106,   -54,   -54,    -8,    78,
     101,   109,    45,    45,   -54,   115,   -54,    87,   -54,   116,
     117,    80,   118,   114,   119,   120,    41,   -54,    41,   -54,
     121,   123,   -54,   -54
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   111,   125,
     -54,     3,   -54,   -54,   -48,   -54,   -54,   -54,   -32,   -54,
      81,    60,   -18,   -53,   -16,   -51,   -54,   -54,   -54
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      59,    82,    55,   134,     4,    94,    13,    83,    56,    21,
      22,    91,    72,    73,    74,    75,    93,    14,    20,   100,
     101,   102,   103,    15,    86,    76,    77,    20,    89,    90,
     106,   107,   108,   135,    95,    70,    71,    57,     5,     6,
       7,     8,     9,    10,    30,    31,   118,    32,    58,    31,
      23,    32,    98,    99,     5,     6,     7,     8,     9,    10,
     104,   105,   120,    78,    79,    80,    24,    25,    26,    27,
      62,   130,   131,    60,    33,    61,    34,    35,    36,    63,
      64,    37,    65,    66,   125,    81,    67,    69,    68,    87,
      57,    88,    92,   109,   111,   150,   112,   151,   110,   113,
     139,   140,   114,   115,   116,   117,   119,   122,   123,   129,
     137,   121,   124,   128,   126,   127,   132,   133,   138,   141,
     136,   142,   145,   143,   144,   147,   146,   148,    12,    97,
     152,   149,   153,     0,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96
};

static const yytype_int16 yycheck[] =
{
      32,    52,     6,    11,     0,    12,     3,    55,    12,    10,
      11,    62,    24,    25,    26,    27,    64,     3,    15,    72,
      73,    74,    75,     6,    56,    28,    29,    24,    60,    61,
      78,    79,    80,    41,    41,    22,    23,    41,    13,    14,
      15,    16,    17,    18,     3,     4,    94,     6,     3,     4,
       7,     6,    70,    71,    13,    14,    15,    16,    17,    18,
      76,    77,   110,    30,    31,    32,    10,     3,     3,     8,
       8,   122,   123,     6,    33,     6,    35,    36,    37,     6,
       6,    40,     3,    11,   116,     9,    11,    21,    20,     4,
      41,     7,     3,     7,    11,   146,    42,   148,    10,     7,
     132,   133,     7,     9,    11,     7,     4,     8,     8,     4,
       9,    41,    35,    42,    11,    11,     6,    11,     9,     4,
      42,    34,    42,     7,     7,    11,     8,     8,     3,    69,
       9,    11,     9,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,    46,    47,     0,    13,    14,    15,    16,    17,
      18,    48,    53,    55,     3,     6,    54,    50,    51,    52,
      55,    10,    11,     7,    10,     3,     3,     8,    49,    52,
       3,     4,     6,    33,    35,    36,    37,    40,    53,    55,
      56,    57,    58,    59,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     6,    12,    41,     3,    62,
       6,     6,     8,     6,     6,     3,    11,    11,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     9,    69,    58,    60,    61,    62,     4,     7,    62,
      62,    69,     3,    58,    12,    41,    64,    65,    66,    66,
      67,    67,    67,    67,    68,    68,    58,    58,    58,     7,
      10,    11,    42,     7,     7,     9,    11,     7,    58,     4,
      58,    41,     8,     8,    35,    62,    11,    11,    42,     4,
      69,    69,     6,    11,    11,    41,    42,     9,     9,    62,
      62,     4,    34,     7,     7,    42,     8,    11,     8,    11,
      69,    69,     9,     9
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 71 "myc.yacc"
    {root = (yyval.st);}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 75 "myc.yacc"
    { (yyval.st)=(yyvsp[(1) - (1)].st); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 80 "myc.yacc"
    { 
             (yyval.st) = new function_parameter ((yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
            }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 84 "myc.yacc"
    {
             (yyval.st) = (yyval.st) = new function_parameter ((yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
            }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 88 "myc.yacc"
    {
             (yyval.st) = new skip_stmt();
            }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 96 "myc.yacc"
    {
        (yyval.st) = new function_definition ((yyvsp[(1) - (6)].t), (yyvsp[(2) - (6)].id), (yyvsp[(4) - (6)].exp_node_ptr), (yyvsp[(6) - (6)].st));
       }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 103 "myc.yacc"
    {
             (yyval.st) = (yyvsp[(2) - (3)].st);
             }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 110 "myc.yacc"
    {
          (yyval.exp_node_ptr) = (yyvsp[(1) - (1)].exp_node_ptr);
         }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 114 "myc.yacc"
    {
          (yyval.exp_node_ptr) = new skip_stmt();
         }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 122 "myc.yacc"
    { (yyval.exp_node_ptr) = (yyvsp[(1) - (1)].exp_node_ptr);}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 125 "myc.yacc"
    {
          (yyval.exp_node_ptr) = new arg_node ((yyvsp[(1) - (3)].exp_node_ptr),(yyvsp[(3) - (3)].exp_node_ptr));//reusing the global_var declaration node
          }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 133 "myc.yacc"
    {
    (yyval.exp_node_ptr) = new param_node((yyvsp[(1) - (2)].t),(yyvsp[(2) - (2)].id));
   }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 141 "myc.yacc"
    {
         (yyval.st) = new var_node ( (yyvsp[(1) - (4)].t),(yyvsp[(2) - (4)].id),(yyvsp[(3) - (4)].exp_node_ptr));
        }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 149 "myc.yacc"
    {
          (yyval.exp_node_ptr) = new var_node ((yyvsp[(3) - (3)].id),(yyvsp[(1) - (3)].exp_node_ptr));
         }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 153 "myc.yacc"
    {
          (yyval.exp_node_ptr) = new skip_stmt();
         }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 170 "myc.yacc"
    {
      (yyval.exp_node_ptr) = new arr1d_var((yyvsp[(1) - (6)].t),(yyvsp[(2) - (6)].id),(yyvsp[(4) - (6)].num));
      }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 174 "myc.yacc"
    {
      (yyval.exp_node_ptr) = new arr2d_var((yyvsp[(1) - (9)].t),(yyvsp[(2) - (9)].id),(yyvsp[(4) - (9)].num),(yyvsp[(7) - (9)].num));
     }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 182 "myc.yacc"
    {
           (yyval.st) = (yyvsp[(1) - (1)].st);
           }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 187 "myc.yacc"
    {
           (yyval.st) = (yyvsp[(1) - (1)].exp_node_ptr);
            }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 192 "myc.yacc"
    {
	 	       (yyval.st) = new assignment_stmt ((yyvsp[(1) - (5)].t),(yyvsp[(2) - (5)].id),(yyvsp[(4) - (5)].exp_node_ptr));          
		       }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 197 "myc.yacc"
    {
            (yyval.st) = (yyvsp[(1) - (2)].exp_node_ptr);
           }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 202 "myc.yacc"
    {
           (yyval.st) = new assignment_stmt ((yyvsp[(1) - (4)].id),(yyvsp[(3) - (4)].exp_node_ptr));
           }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 208 "myc.yacc"
    {
             (yyval.exp_node_ptr)=new id_node((yyvsp[(1) - (1)].id));
		        }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 212 "myc.yacc"
    {
             (yyval.exp_node_ptr) = new arr1d_var((yyvsp[(1) - (4)].id),(yyvsp[(3) - (4)].num));
            }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 216 "myc.yacc"
    {
             (yyval.exp_node_ptr) = new arr2d_var((yyvsp[(1) - (7)].id),(yyvsp[(3) - (7)].num),(yyvsp[(6) - (7)].num));
            }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 220 "myc.yacc"
    {
            (yyval.exp_node_ptr)= new number_node ((yyvsp[(1) - (1)].num));
            }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 224 "myc.yacc"
    {
             (yyval.exp_node_ptr) = (yyvsp[(2) - (3)].exp_node_ptr);
            }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 233 "myc.yacc"
    {
     (yyval.exp_node_ptr) = new call_stmt ((yyvsp[(1) - (4)].id),(yyvsp[(3) - (4)].exp_node_ptr));
    }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 240 "myc.yacc"
    {
              (yyval.exp_node_ptr) = (yyvsp[(1) - (1)].exp_node_ptr);
             }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 244 "myc.yacc"
    {
              (yyval.exp_node_ptr) = new skip_stmt();
             }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 251 "myc.yacc"
    {
              (yyval.exp_node_ptr) = (yyvsp[(1) - (1)].exp_node_ptr);
             }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 256 "myc.yacc"
    {
              (yyval.exp_node_ptr) = new call_list ((yyvsp[(1) - (3)].exp_node_ptr),(yyvsp[(3) - (3)].exp_node_ptr));
             }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 264 "myc.yacc"
    {
          (yyval.exp_node_ptr) = (yyvsp[(1) - (1)].exp_node_ptr);
          }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 274 "myc.yacc"
    {
               (yyval.exp_node_ptr) = (yyvsp[(1) - (1)].exp_node_ptr);
              }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 278 "myc.yacc"
    {
		           (yyval.exp_node_ptr) = new logical_oror ((yyvsp[(1) - (3)].exp_node_ptr),(yyvsp[(3) - (3)].exp_node_ptr));
              }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 285 "myc.yacc"
    {
                (yyval.exp_node_ptr) = (yyvsp[(1) - (1)].exp_node_ptr);
               }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 289 "myc.yacc"
    {
	              (yyval.exp_node_ptr) = new logical_andand ((yyvsp[(1) - (3)].exp_node_ptr),(yyvsp[(3) - (3)].exp_node_ptr));
               }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 296 "myc.yacc"
    {
             (yyval.exp_node_ptr) = (yyvsp[(1) - (1)].exp_node_ptr);
            }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 300 "myc.yacc"
    {
             (yyval.exp_node_ptr) = new logical_equalequal((yyvsp[(1) - (3)].exp_node_ptr),(yyvsp[(3) - (3)].exp_node_ptr));
	 	        }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 304 "myc.yacc"
    {
             (yyval.exp_node_ptr) = new logical_notequal((yyvsp[(1) - (3)].exp_node_ptr),(yyvsp[(3) - (3)].exp_node_ptr));
            }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 311 "myc.yacc"
    {
               (yyval.exp_node_ptr) = (yyvsp[(1) - (1)].exp_node_ptr);
              }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 315 "myc.yacc"
    {
               (yyval.exp_node_ptr) = new logical_less((yyvsp[(1) - (3)].exp_node_ptr),(yyvsp[(3) - (3)].exp_node_ptr));
	            }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 319 "myc.yacc"
    {
	 	           (yyval.exp_node_ptr) = new logical_great((yyvsp[(1) - (3)].exp_node_ptr),(yyvsp[(3) - (3)].exp_node_ptr));
	            }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 323 "myc.yacc"
    {
	 	           (yyval.exp_node_ptr) = new logical_lessequal((yyvsp[(1) - (3)].exp_node_ptr),(yyvsp[(3) - (3)].exp_node_ptr));
              }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 327 "myc.yacc"
    {
	 	           (yyval.exp_node_ptr) = new logical_greatequal((yyvsp[(1) - (3)].exp_node_ptr),(yyvsp[(3) - (3)].exp_node_ptr));
	            }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 334 "myc.yacc"
    {
             (yyval.exp_node_ptr) = (yyvsp[(1) - (1)].exp_node_ptr);
            }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 338 "myc.yacc"
    {
		          (yyval.exp_node_ptr) = new plus_expression((yyvsp[(1) - (3)].exp_node_ptr),(yyvsp[(3) - (3)].exp_node_ptr));
            }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 342 "myc.yacc"
    {
	  	       (yyval.exp_node_ptr) = new minus_expression((yyvsp[(1) - (3)].exp_node_ptr),(yyvsp[(3) - (3)].exp_node_ptr));
            }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 349 "myc.yacc"
    {
                   (yyval.exp_node_ptr) = (yyvsp[(1) - (1)].exp_node_ptr);
                  }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 353 "myc.yacc"
    {
                   (yyval.exp_node_ptr) = new times_expression((yyvsp[(1) - (3)].exp_node_ptr),(yyvsp[(3) - (3)].exp_node_ptr));
		              }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 357 "myc.yacc"
    {
                   (yyval.exp_node_ptr) = new divide_expression((yyvsp[(1) - (3)].exp_node_ptr),(yyvsp[(3) - (3)].exp_node_ptr));
  	              }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 361 "myc.yacc"
    {
                   (yyval.exp_node_ptr) = new modulo_expression((yyvsp[(1) - (3)].exp_node_ptr),(yyvsp[(3) - (3)].exp_node_ptr));
  	              }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 369 "myc.yacc"
    {
             (yyval.st) = new statement_list((yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
            }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 373 "myc.yacc"
    {
          (yyval.st) = (yyvsp[(1) - (1)].st);
         }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 377 "myc.yacc"
    {
             (yyval.st) = new skip_stmt();
            }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 385 "myc.yacc"
    {
          (yyval.st) = (yyvsp[(1) - (1)].st);
         }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 389 "myc.yacc"
    {
          (yyval.st)=(yyvsp[(1) - (2)].exp_node_ptr);
         }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 393 "myc.yacc"
    {
          (yyval.st) = (yyvsp[(1) - (1)].st);
         }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 400 "myc.yacc"
    {
           (yyval.st) = new return_stmt((yyvsp[(3) - (5)].exp_node_ptr));
          }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 407 "myc.yacc"
    {
          (yyval.st) = new if_then_stmt((yyvsp[(3) - (7)].exp_node_ptr),(yyvsp[(6) - (7)].st));
         }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 411 "myc.yacc"
    {
           (yyval.st) = new if_then_else_stmt((yyvsp[(3) - (11)].exp_node_ptr),(yyvsp[(6) - (11)].st),(yyvsp[(10) - (11)].st));
         }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 415 "myc.yacc"
    {
		      (yyval.st) = new while_stmt((yyvsp[(3) - (7)].exp_node_ptr),(yyvsp[(6) - (7)].st));      
         }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 419 "myc.yacc"
    {
          (yyval.st) = new do_while_stmt((yyvsp[(3) - (9)].st),(yyvsp[(7) - (9)].exp_node_ptr)); 
	 	     }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 423 "myc.yacc"
    {
	 	      (yyval.st) = new for_stmt((yyvsp[(3) - (11)].id),(yyvsp[(5) - (11)].exp_node_ptr),(yyvsp[(7) - (11)].exp_node_ptr),(yyvsp[(10) - (11)].st));            
	       }
    break;



/* Line 1455 of yacc.c  */
#line 2134 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 428 "myc.yacc"





int main(int argc, char **argv)
{ 
  if (argc>1) yyin=fopen(argv[1],"r");

  //  yydebug = 1;
  yyparse();

  cout << "---------- list of input program------------" << endl << endl;

  root -> print();
  

  cout << "---------- end of input program------------" << endl << endl;
  

  //root->evaluate();
}

void yyerror( const char *s)
{
  fprintf(stderr, "line %d: %s\n", line_num, s);
}
