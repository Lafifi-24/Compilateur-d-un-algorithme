
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
#line 1 "syntaxe.y"

   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>
   #include "syntaxe.h"
   #include "vars.h"
   extern FILE* yyin; //file pointer by default points to terminal
   int yylex(void); // defini dans progL.cpp, utilise par yyparse()
   void yyerror(const char * msg);
   int isToken(char *s, char t[][16]);
   int isDeclared(char *s);

   void isUsable(char *s);
   void identifTest(int tab,char *s,char t[][16]);
   vars *Creation(char *s);
   void Insertvar(char *s,int tab);
   int Chercher(char *s);
   int cherche(char *s);
  void returntype(char *s);
   void affiche(int a,int b);
   void affect_type_fun(int tab,char s[31],char type[20]);
   void dicolocal();
   void dicoglobal();
   vars *CHERCHE(char *s);
   
  void affect_type(int a,char s[20]);
  void affect_indix(char *s,int a,int b);
  fonction *Creationfon(char *s);
  void fonctionTest(int proc,int arg,char *s,char *type,char t[][16]);
  int isDeclaredfon(char *s);
  void Insertfonction(char *s,int arg,char *type,int proc);
  int Chercherfon(char *s);
  fonction *CHERCHEFON(char *s);
  void returnformat(char *k);
   int lineNumber,local;
   int firstloc=0,continst=0,firstelement=0;
  char tokens[38][16] = {"debut","fin","Algorithme","retourne","si","alors","sinon","pour","faire","tantque","selonque","case","defaut","de","repeter","ftq","fpour","fsq","fsi","afficher","lire","par","jusqua","structure","Entier","Reel","Caractere","Chaine_Caractere","Fonction","Vrai","Faux","arret","continue","var","conste","Procedure"};
   char expr[300],exp1[300],instruc[400][300];
   char ex2[300],ex1[300];
   int infunction=0;
   
   
   vars *base,*sommet,*first,*p;
   fonction *basefonction,*sommetfonction,*f;
   int conteurfonction,a=0;
   int conteur=0,conteurbase=0,c=0,c1=0;
   FILE *file;
   
   char k[10];



/* Line 189 of yacc.c  */
#line 126 "syntaxe.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     ALGO = 258,
     DEBUT = 259,
     FIN = 260,
     AFFECT = 261,
     DIFF = 262,
     SUP_E = 263,
     INF_E = 264,
     EGAL_EGAL = 265,
     ET = 266,
     OU = 267,
     A = 268,
     PTVIRG = 269,
     DEUX_POINT = 270,
     VIRG = 271,
     PLUS = 272,
     MOIN = 273,
     MULT = 274,
     DIV = 275,
     NON = 276,
     MODULO = 277,
     PARENT_O = 278,
     PARENT_F = 279,
     CROCH_F = 280,
     CROCH_O = 281,
     AC_O = 282,
     AC_F = 283,
     VAR = 284,
     RETOURNE = 285,
     SI = 286,
     ALORS = 287,
     SINON = 288,
     POUR = 289,
     FAIRE = 290,
     TANTQUE = 291,
     SELONQUE = 292,
     REPETER = 293,
     FINTANTQUE = 294,
     FINPOUR = 295,
     FINSELONQUE = 296,
     FINSI = 297,
     AFFICHER = 298,
     LIRE = 299,
     PAR = 300,
     JUSQUA = 301,
     FONCTION = 302,
     VRAI = 303,
     FAUX = 304,
     CONTINUE = 305,
     ARRET = 306,
     DEFAUT = 307,
     ENT = 308,
     REEL = 309,
     IDENTIF = 310,
     CH_CRT = 311,
     DE = 312,
     CAS = 313,
     TYPE = 314,
     POINT = 315,
     POINT_EGAL = 316,
     CRT = 317,
     CONSTANTE = 318,
     PLUS_PLUS = 319,
     MOIN_MOIN = 320,
     PLUS_EGAL = 321,
     MOIN_EGAL = 322,
     DIV_EGAL = 323,
     MULT_EGAL = 324,
     MODULO_EGAL = 325,
     VARIABLE = 326,
     SUP = 327,
     INF = 328,
     PROCEDURE = 329
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 52 "syntaxe.y"

char var1[255];
int entier;
float reel;



/* Line 214 of yacc.c  */
#line 244 "syntaxe.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 256 "syntaxe.c"

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
#define YYLAST   978

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNRULES -- Number of states.  */
#define YYNSTATES  360

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,    14,    20,    23,    25,    28,
      30,    33,    36,    38,    40,    42,    44,    46,    48,    54,
      63,    67,    77,    84,    88,    90,    94,   104,   111,   113,
     121,   126,   134,   144,   148,   152,   156,   160,   162,   166,
     168,   172,   176,   180,   184,   188,   192,   194,   195,   208,
     209,   210,   220,   221,   222,   223,   234,   238,   240,   244,
     246,   250,   252,   256,   258,   260,   264,   269,   274,   275,
     276,   291,   292,   293,   308,   311,   313,   314,   324,   338,
     351,   364,   376,   385,   395,   403,   412,   416,   418,   423,
     427,   433,   438,   440,   442,   450,   455,   460,   465,   470,
     475,   480,   485,   490,   495,   500,   505,   510,   515,   520,
     525,   527,   529,   531,   534,   537,   540,   543,   545,   548,
     552,   556,   558,   562,   566,   570,   572,   574,   576,   578,
     580,   582,   584,   587,   591,   594,   597,   600,   603,   606,
     609,   612,   615,   617
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      76,     0,    -1,    -1,    -1,     3,    55,    77,    80,     4,
      78,    79,     5,    -1,     3,    55,     4,    79,     5,    -1,
      79,   116,    -1,   116,    -1,    80,    82,    -1,    82,    -1,
      80,   109,    -1,    80,   110,    -1,   109,    -1,   110,    -1,
      53,    -1,    54,    -1,    62,    -1,   121,    -1,    71,    85,
      15,    59,    14,    -1,    63,    55,    15,     6,    81,    15,
      59,    14,    -1,    55,    15,    59,    -1,    55,    26,    53,
      25,    26,    53,    25,    15,    59,    -1,    55,    26,    53,
      25,    15,    59,    -1,    84,    16,    83,    -1,    83,    -1,
      85,    16,    55,    -1,    85,    16,    55,    26,    53,    25,
      26,    53,    25,    -1,    85,    16,    55,    26,    53,    25,
      -1,    55,    -1,    55,    26,    53,    25,    26,    53,    25,
      -1,    55,    26,    53,    25,    -1,    31,    23,    87,    24,
      32,    79,    42,    -1,    31,    23,    87,    24,    32,    79,
      33,    79,    42,    -1,    87,    11,    88,    -1,    87,    12,
      88,    -1,    87,    10,   121,    -1,    87,     7,   121,    -1,
      88,    -1,    23,    87,    24,    -1,    89,    -1,   117,    10,
     117,    -1,   117,     7,   117,    -1,   117,     8,   117,    -1,
     117,    72,   117,    -1,   117,    73,   117,    -1,   117,     9,
     117,    -1,   121,    -1,    -1,    34,    55,    57,   117,    13,
     117,    45,   117,    35,    91,    79,    40,    -1,    -1,    -1,
      36,    23,    92,    87,    24,    93,    35,    79,    39,    -1,
      -1,    -1,    -1,    38,    94,    79,    46,    23,    95,    87,
      24,    96,    14,    -1,    97,    16,    55,    -1,    55,    -1,
      97,    16,   115,    -1,   115,    -1,    98,    16,    55,    -1,
      55,    -1,    98,    16,   115,    -1,   115,    -1,    56,    -1,
      98,    16,    56,    -1,    44,    23,    97,    24,    -1,    43,
      23,    98,    24,    -1,    -1,    -1,    37,    23,   117,    24,
      35,   102,   106,    52,   103,    15,    27,    79,    28,    41,
      -1,    -1,    -1,    37,    23,    62,    24,    35,   104,   106,
      52,   105,    15,    27,    79,    28,    41,    -1,   106,   107,
      -1,   107,    -1,    -1,    58,    81,    15,   108,    27,    79,
      28,    51,    14,    -1,    47,    55,    23,    84,    24,    15,
      59,    80,     4,    79,    30,   117,     5,    -1,    47,    55,
      23,    84,    24,    15,    59,     4,    79,    30,   117,     5,
      -1,    47,    55,    23,    24,    15,    59,    80,     4,    79,
      30,   117,     5,    -1,    47,    55,    23,    24,    15,    59,
       4,    79,    30,   117,     5,    -1,    74,    55,    23,    84,
      24,     4,    79,     5,    -1,    74,    55,    23,    84,    24,
      80,     4,    79,     5,    -1,    74,    55,    23,    24,     4,
      79,     5,    -1,    74,    55,    23,    24,    80,     4,    79,
       5,    -1,   111,    16,   117,    -1,   117,    -1,    55,    23,
     111,    24,    -1,    55,    23,    24,    -1,    55,    23,   111,
      24,    14,    -1,    55,    23,    24,    14,    -1,    53,    -1,
      55,    -1,    55,    26,   114,    25,    26,   114,    25,    -1,
      55,    26,   114,    25,    -1,   115,     6,   117,    14,    -1,
      55,     6,    62,    14,    -1,   115,    66,   117,    14,    -1,
     115,    67,   117,    14,    -1,   115,    68,   117,    14,    -1,
     115,    69,   117,    14,    -1,   115,    70,   117,    14,    -1,
      55,     6,   117,    14,    -1,    55,     6,   121,    14,    -1,
      55,    66,   117,    14,    -1,    55,    67,   117,    14,    -1,
      55,    68,   117,    14,    -1,    55,    69,   117,    14,    -1,
      55,    70,   117,    14,    -1,   101,    -1,    90,    -1,    86,
      -1,    99,    14,    -1,   100,    14,    -1,    51,    14,    -1,
      50,    14,    -1,   113,    -1,   120,    14,    -1,   117,    17,
     118,    -1,   117,    18,   118,    -1,   118,    -1,   118,    19,
     119,    -1,   118,    20,   119,    -1,   118,    22,   119,    -1,
     119,    -1,    53,    -1,    54,    -1,    55,    -1,   115,    -1,
     112,    -1,   120,    -1,    18,   119,    -1,    23,   117,    24,
      -1,    64,    55,    -1,    65,    55,    -1,    55,    64,    -1,
      55,    65,    -1,    64,   115,    -1,    65,   115,    -1,   115,
      64,    -1,   115,    65,    -1,    48,    -1,    49,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    75,    75,    76,    78,    79,    82,    83,
      88,    89,    90,    91,    93,    94,    95,    96,    97,    99,
     101,   106,   113,   120,   121,   127,   129,   132,   135,   137,
     140,   144,   145,   147,   148,   149,   150,   151,   154,   155,
     160,   161,   162,   163,   164,   165,   167,   173,   173,   180,
     180,   180,   181,   181,   181,   181,   184,   197,   209,   220,
     229,   241,   253,   263,   270,   271,   273,   275,   279,   279,
     279,   280,   280,   280,   282,   283,   285,   285,   289,   314,
     339,   364,   390,   399,   408,   416,   426,   427,   430,   438,
     447,   453,   460,   461,   470,   479,   491,   507,   522,   535,
     547,   558,   570,   585,   609,   620,   636,   652,   667,   683,
     701,   702,   703,   704,   705,   706,   707,   709,   710,   712,
     713,   714,   717,   718,   719,   720,   723,   724,   725,   741,
     749,   750,   752,   753,   760,   771,   782,   794,   806,   814,
     821,   827,   834,   835
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ALGO", "DEBUT", "FIN", "AFFECT", "DIFF",
  "SUP_E", "INF_E", "EGAL_EGAL", "ET", "OU", "A", "PTVIRG", "DEUX_POINT",
  "VIRG", "PLUS", "MOIN", "MULT", "DIV", "NON", "MODULO", "PARENT_O",
  "PARENT_F", "CROCH_F", "CROCH_O", "AC_O", "AC_F", "VAR", "RETOURNE",
  "SI", "ALORS", "SINON", "POUR", "FAIRE", "TANTQUE", "SELONQUE",
  "REPETER", "FINTANTQUE", "FINPOUR", "FINSELONQUE", "FINSI", "AFFICHER",
  "LIRE", "PAR", "JUSQUA", "FONCTION", "VRAI", "FAUX", "CONTINUE", "ARRET",
  "DEFAUT", "ENT", "REEL", "IDENTIF", "CH_CRT", "DE", "CAS", "TYPE",
  "POINT", "POINT_EGAL", "CRT", "CONSTANTE", "PLUS_PLUS", "MOIN_MOIN",
  "PLUS_EGAL", "MOIN_EGAL", "DIV_EGAL", "MULT_EGAL", "MODULO_EGAL",
  "VARIABLE", "SUP", "INF", "PROCEDURE", "$accept", "program", "$@1",
  "$@2", "listInstr", "declarations", "const", "declaration",
  "declarationfun", "declarationfuns", "ensidentif", "strccondition",
  "condition", "termlogi", "comparexp", "loop", "$@3", "$@4", "$@5", "$@6",
  "$@7", "$@8", "listexpsais", "listexpaff", "saisir", "ecrir", "swtch",
  "$@9", "$@10", "$@11", "$@12", "instselon", "cass", "$@13", "function",
  "procedure", "appelvars", "appelfun", "appelproc", "argaffectei",
  "affectei", "inst", "expr", "term", "factor", "incdec", "bool", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    77,    78,    76,    76,    79,    79,    80,    80,
      80,    80,    80,    80,    81,    81,    81,    81,    82,    82,
      83,    83,    83,    84,    84,    85,    85,    85,    85,    85,
      85,    86,    86,    87,    87,    87,    87,    87,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    91,    90,    92,
      93,    90,    94,    95,    96,    90,    97,    97,    97,    97,
      98,    98,    98,    98,    98,    98,    99,   100,   102,   103,
     101,   104,   105,   101,   106,   106,   108,   107,   109,   109,
     109,   109,   110,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   117,
     117,   117,   118,   118,   118,   118,   119,   119,   119,   119,
     119,   119,   119,   119,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     8,     5,     2,     1,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     5,     8,
       3,     9,     6,     3,     1,     3,     9,     6,     1,     7,
       4,     7,     9,     3,     3,     3,     3,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     0,    12,     0,
       0,     9,     0,     0,     0,    10,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     3,     4,     4,     0,     0,
      14,     0,     0,    14,     2,     1,     0,     9,    13,    12,
      12,    11,     8,     9,     7,     8,     3,     1,     4,     3,
       5,     4,     1,     1,     7,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       1,     1,     1,     2,     2,     2,     2,     1,     2,     3,
       3,     1,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
     112,   111,     0,     0,   110,   117,     0,     7,     0,     0,
       0,     0,     0,     0,     9,    12,    13,     0,     0,    49,
       0,     0,     0,     0,   116,   115,     0,     0,     0,   136,
     137,     0,     0,     0,     0,     0,   134,   138,   135,   139,
       5,     6,   113,   114,     0,   140,   141,     0,     0,     0,
       0,     0,   118,     0,     0,    28,     0,     0,     3,     8,
      10,    11,     0,     0,   142,   143,   126,   127,   128,     0,
      37,    39,   130,   129,     0,   121,   125,   131,    46,     0,
       0,     0,     0,     0,     0,    61,    64,     0,    63,    57,
       0,    59,     0,     0,     0,     0,     0,    87,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,    66,    97,
     103,   104,    91,     0,     0,    95,   105,   106,   107,   108,
     109,    96,    98,    99,   100,   101,   102,     0,     0,    24,
       0,     0,     0,     0,    25,     0,     0,     0,    38,   133,
      89,     0,    36,    35,    33,    34,     0,    41,    42,    45,
      40,   119,   120,    43,    44,   122,   123,   124,     0,    50,
      71,    68,    53,    60,    65,    62,    56,    58,    86,    90,
       0,     0,     0,     0,     0,     0,    14,    15,    16,     0,
      17,    30,    18,     0,     0,     0,     0,     4,    88,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,     0,    75,     0,     0,    94,     0,     0,
       0,     0,     0,     0,    27,    84,     0,     0,     0,     0,
       0,     0,     0,    72,    74,    69,    54,     0,     0,     0,
       0,     0,     0,    19,    29,     0,    85,    82,     0,    32,
      47,    51,    76,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,    83,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,    26,     0,     0,     0,     0,    81,
       0,     0,     0,     0,    48,     0,     0,     0,    80,    21,
      79,     0,     0,     0,     0,    78,     0,    73,    70,    77
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,   138,    19,    33,   239,    34,   189,   190,
      76,    20,    89,    90,    91,    21,   324,   100,   251,    41,
     254,   315,   110,   107,    22,    23,    24,   253,   314,   252,
     313,   273,   274,   325,    35,    36,   116,    92,    25,   120,
      93,    27,    94,    95,    96,    97,    98
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -257
static const yytype_int16 yypact[] =
{
       6,   -20,    57,    43,  -257,   913,    -7,   119,    11,   127,
     148,  -257,   152,   162,   120,   177,   393,   139,   161,   438,
    -257,  -257,   204,   214,  -257,  -257,   114,  -257,   219,   185,
     212,   215,   220,    12,  -257,  -257,  -257,   563,   150,  -257,
     133,   913,   157,   232,  -257,  -257,   272,   582,   104,  -257,
    -257,   320,   320,   320,   320,   320,   263,  -257,   263,  -257,
    -257,  -257,  -257,  -257,   320,  -257,  -257,   320,   320,   320,
     320,   320,  -257,   271,   289,   283,   211,   288,  -257,  -257,
    -257,  -257,   320,   563,  -257,  -257,  -257,  -257,   -15,   199,
    -257,  -257,  -257,   193,   432,   183,  -257,  -257,  -257,   320,
     563,   320,   293,   128,   819,   263,  -257,     7,  -257,   263,
      38,  -257,   308,    96,   310,   315,    47,   262,  -257,  -257,
     314,   182,   229,   237,   260,   296,   363,   434,   466,   478,
     494,   517,   -14,   329,   294,   292,   299,    -4,   913,  -257,
     210,   405,   597,   250,   250,   563,   563,   325,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   251,
     348,   207,   328,   347,   360,   297,  -257,   335,  -257,  -257,
    -257,  -257,  -257,   320,   379,   369,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,  -257,  -257,   381,    46,  -257,
      63,   417,   375,   388,   377,    21,    87,   463,  -257,  -257,
    -257,   111,  -257,  -257,  -257,  -257,   913,   262,   262,   262,
     262,   183,   183,   262,   262,  -257,  -257,  -257,   320,  -257,
    -257,  -257,  -257,   263,  -257,  -257,   263,  -257,   262,  -257,
     104,   350,   351,   354,   356,   403,  -257,  -257,  -257,   410,
    -257,   400,  -257,   401,   913,    30,    44,  -257,  -257,   796,
      15,   399,   370,   370,   563,   428,    65,  -257,   430,  -257,
     397,   408,   411,   448,   486,   913,   913,    69,   913,  -257,
     320,   913,   417,    86,  -257,   116,   420,  -257,   913,    84,
      74,    90,   471,   461,   464,  -257,   511,   534,   913,   844,
      35,   867,   472,  -257,  -257,  -257,  -257,   702,   913,   439,
     456,   913,   102,  -257,  -257,   457,  -257,  -257,   559,  -257,
    -257,  -257,  -257,   500,   504,   507,   320,   725,  -257,   501,
     748,   913,   508,  -257,   913,   498,   505,   513,  -257,    80,
     320,   523,   320,   771,  -257,   890,   913,   913,   913,  -257,
      91,   484,   149,   320,  -257,   629,   654,   679,  -257,  -257,
    -257,   172,   493,   512,   515,  -257,   532,  -257,  -257,  -257
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -257,  -257,  -257,  -257,   -36,  -191,   280,   -31,   323,   421,
    -257,  -257,   -82,   216,  -257,  -257,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,  -257,
    -257,   306,  -256,  -257,   -30,   -26,   418,  -257,  -257,   333,
      -5,    59,   -25,   217,   -76,   100,   -22
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      26,   140,    79,    80,   245,   104,   139,    81,   142,     1,
     187,    48,    57,    59,    26,   103,    78,   294,   160,   294,
     195,   113,   117,   165,   114,   244,   121,   122,   123,   124,
     125,   166,   152,   153,   265,     3,    26,   108,   111,   126,
      29,   188,   127,   128,   129,   130,   131,     5,   266,    49,
      50,   188,   152,   153,   167,   267,    30,     4,   141,    29,
     270,   232,   168,   173,    31,   279,    38,    32,    29,   278,
     310,   174,   233,   288,   159,    30,   161,    29,    61,   234,
     215,   216,   217,    31,    30,   339,    32,   235,   298,   299,
     302,    29,    31,    30,   301,    32,   348,   152,   153,    26,
     300,    31,   197,   234,    32,    28,   321,    30,   152,   153,
     170,   246,    29,   152,   153,    31,    29,   117,    32,    28,
      64,   202,   203,   207,   208,   209,   210,   173,    30,   213,
     214,    29,    30,    26,    44,   248,    31,    29,   293,    32,
      31,    28,    37,    32,   272,   152,   153,    30,   228,    29,
      39,    82,   163,    30,   350,    31,   101,   118,    32,   119,
     225,    31,   227,    61,    32,    30,   152,   153,   295,   240,
     249,    40,   276,    31,   272,    42,    32,   355,    65,    66,
      67,    68,    69,    70,    71,    43,    86,    87,    88,   152,
     153,    45,    26,   250,    56,   102,   176,    17,    18,   152,
     153,    26,   156,   157,    28,   158,   143,    99,   264,   144,
     145,   146,   105,   106,    79,    80,    58,   143,    62,    81,
     144,   145,   146,   147,   152,   153,   135,   136,    63,   286,
     287,   199,   289,    72,   198,   291,    79,    80,    28,    26,
      73,    81,   297,   177,    26,   290,   152,   153,    79,    80,
     240,   178,   308,    81,   152,   153,    61,    65,    66,    26,
      26,    26,   317,    26,   218,   320,    26,    74,   152,   153,
      75,    79,    80,    26,   179,    77,    81,   152,   153,   152,
     153,    26,    26,    26,    26,   333,    26,   109,   335,    48,
      82,   329,    26,    26,   132,   101,    26,    28,    84,    85,
     345,   346,   347,    26,   133,   340,    28,   342,    61,   134,
     180,   137,    26,   152,   153,    26,    26,   162,   351,    26,
      84,    85,   169,    61,   171,    86,    87,    88,    26,   172,
      26,    26,    26,    26,   112,   191,    17,    18,    82,   175,
      26,    26,    26,   101,    28,    61,    61,   192,    61,    28,
      61,   193,   223,   224,   194,   143,    61,   206,   144,   145,
     146,   204,   205,   220,    28,    28,    28,    61,    28,   211,
     212,    28,   219,    86,    87,    88,    61,   181,    28,    61,
     152,   153,   221,   222,    17,    18,    28,    28,    28,    28,
     226,    28,    61,   229,    61,   230,   231,    28,    28,    46,
     241,    28,   242,   243,    61,    61,    61,   258,    28,   256,
     257,   188,   148,   149,   150,   151,    47,    28,   260,    48,
      28,    28,   152,   153,    28,   261,   262,   143,   272,   199,
     144,   145,   146,    28,   271,    28,    28,    28,    28,   148,
     149,   150,   151,    60,   296,    28,    28,    28,   182,   152,
     153,   152,   153,   277,   263,   280,   281,    49,    50,    51,
      52,    53,    54,    55,   283,    84,    85,   282,   247,     7,
     236,   237,     8,   284,     9,    10,    11,   154,   155,   238,
     183,    12,    13,   152,   153,   303,   304,   312,    14,    15,
     305,   285,   184,    16,     7,   152,   153,     8,   318,     9,
      10,    11,    17,    18,   154,   155,    12,    13,   185,   319,
     322,   152,   153,    14,    15,   326,   306,     7,    16,   327,
       8,   328,     9,    10,    11,   336,   331,    17,    18,    12,
      13,   186,   337,   334,   152,   153,    14,    15,   341,   307,
     338,    16,     7,   349,   356,     8,   359,     9,    10,    11,
      17,    18,   292,   357,    12,    13,   358,   259,   196,   275,
     201,    14,    15,   255,   323,     7,    16,     0,     8,     0,
       9,    10,    11,     0,     0,    17,    18,    12,    13,     0,
       0,    82,     0,     0,    14,    15,    83,     0,     0,    16,
       7,     0,     0,     8,     0,     9,    10,    11,    17,    18,
      82,     0,    12,    13,     0,   101,   115,     0,     0,    14,
      15,    84,    85,     0,    16,    82,    86,    87,    88,     0,
     101,   200,     0,    17,    18,     0,     0,    17,    18,     0,
       0,     0,     0,     0,     0,    86,    87,    88,     0,     0,
       0,     0,     0,     0,     0,     0,    17,    18,     0,     0,
      86,    87,    88,     0,     0,     0,     0,   352,     0,     0,
       7,    17,    18,     8,     0,     9,    10,    11,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,     0,    14,
      15,     0,   353,     0,    16,     7,     0,     0,     8,     0,
       9,    10,    11,    17,    18,     0,     0,    12,    13,     0,
       0,     0,     0,     0,    14,    15,     0,   354,     0,    16,
       7,     0,     0,     8,     0,     9,    10,    11,    17,    18,
       0,     0,    12,    13,     0,     0,     0,     0,     0,    14,
      15,     0,   316,     7,    16,     0,     8,     0,     9,    10,
      11,     0,     0,    17,    18,    12,    13,     0,     0,     0,
       0,     0,    14,    15,     0,   330,     7,    16,     0,     8,
       0,     9,    10,    11,     0,     0,    17,    18,    12,    13,
       0,     0,     0,     0,     0,    14,    15,     0,   332,     7,
      16,     0,     8,     0,     9,    10,    11,     0,     0,    17,
      18,    12,    13,     0,     0,     0,     0,     0,    14,    15,
       0,   343,     7,    16,     0,     8,     0,     9,    10,    11,
       0,     0,    17,    18,    12,    13,     0,     0,     0,     0,
       0,    14,    15,     0,     0,     0,    16,     7,     0,   268,
       8,     0,     9,    10,    11,    17,    18,     0,   269,    12,
      13,     0,     0,     0,     0,     0,    14,    15,     0,     0,
       7,    16,     0,     8,     0,     9,    10,    11,     0,     0,
      17,    18,    12,    13,     0,   164,     0,     0,     0,    14,
      15,     0,     0,     0,    16,     7,     0,     0,     8,     0,
       9,    10,    11,    17,    18,     0,   309,    12,    13,     0,
       0,     0,     0,     0,    14,    15,     0,     0,     7,    16,
       0,     8,     0,     9,    10,    11,   311,     0,    17,    18,
      12,    13,     0,     0,     0,     0,     0,    14,    15,     0,
       0,     7,    16,     0,     8,     0,     9,    10,    11,     0,
     344,    17,    18,    12,    13,     0,     0,     0,     0,     0,
      14,    15,     0,     0,     7,    16,     0,     8,     0,     9,
      10,    11,     0,     0,    17,    18,    12,    13,     0,     0,
       0,     0,     0,    14,    15,     0,     0,     0,    16,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    18
};

static const yytype_int16 yycheck[] =
{
       5,    83,    33,    33,   195,    41,    82,    33,    23,     3,
      24,    26,    17,    18,    19,    40,     4,   273,   100,   275,
      24,    46,    47,    16,    46,     4,    51,    52,    53,    54,
      55,    24,    17,    18,     4,    55,    41,    42,    43,    64,
      47,    55,    67,    68,    69,    70,    71,     4,     4,    64,
      65,    55,    17,    18,    16,   246,    63,     0,    83,    47,
      45,    15,    24,    16,    71,   256,    55,    74,    47,     4,
      35,    24,    26,     4,    99,    63,   101,    47,    19,    16,
     156,   157,   158,    71,    63,     5,    74,    24,     4,    15,
     281,    47,    71,    63,     4,    74,     5,    17,    18,   104,
      26,    71,   138,    16,    74,     5,     4,    63,    17,    18,
      14,    24,    47,    17,    18,    71,    47,   142,    74,    19,
       6,   143,   144,   148,   149,   150,   151,    16,    63,   154,
     155,    47,    63,   138,    14,    24,    71,    47,    52,    74,
      71,    41,    23,    74,    58,    17,    18,    63,   173,    47,
      23,    18,    24,    63,     5,    71,    23,    53,    74,    55,
     165,    71,   167,   104,    74,    63,    17,    18,    52,   191,
     206,    23,   254,    71,    58,    23,    74,     5,    64,    65,
      66,    67,    68,    69,    70,    23,    53,    54,    55,    17,
      18,    14,   197,   218,    55,    62,    14,    64,    65,    17,
      18,   206,    19,    20,   104,    22,     7,    57,   244,    10,
      11,    12,    55,    56,   245,   245,    55,     7,    14,   245,
      10,    11,    12,    24,    17,    18,    15,    16,    14,   265,
     266,    24,   268,    14,    24,   271,   267,   267,   138,   244,
      55,   267,   278,    14,   249,   270,    17,    18,   279,   279,
     272,    14,   288,   279,    17,    18,   197,    64,    65,   264,
     265,   266,   298,   268,    13,   301,   271,    55,    17,    18,
      55,   302,   302,   278,    14,    55,   302,    17,    18,    17,
      18,   286,   287,   288,   289,   321,   291,    55,   324,    26,
      18,   316,   297,   298,    23,    23,   301,   197,    48,    49,
     336,   337,   338,   308,    15,   330,   206,   332,   249,    26,
      14,    23,   317,    17,    18,   320,   321,    24,   343,   324,
      48,    49,    14,   264,    14,    53,    54,    55,   333,    14,
     335,   336,   337,   338,    62,     6,    64,    65,    18,    25,
     345,   346,   347,    23,   244,   286,   287,    53,   289,   249,
     291,    59,    55,    56,    55,     7,   297,    32,    10,    11,
      12,   145,   146,    35,   264,   265,   266,   308,   268,   152,
     153,   271,    24,    53,    54,    55,   317,    14,   278,   320,
      17,    18,    35,    23,    64,    65,   286,   287,   288,   289,
      55,   291,   333,    14,   335,    26,    15,   297,   298,     6,
      25,   301,    14,    26,   345,   346,   347,    53,   308,    59,
      59,    55,     7,     8,     9,    10,    23,   317,    15,    26,
     320,   321,    17,    18,   324,    15,    26,     7,    58,    24,
      10,    11,    12,   333,    35,   335,   336,   337,   338,     7,
       8,     9,    10,     5,    24,   345,   346,   347,    14,    17,
      18,    17,    18,    25,    53,    25,    59,    64,    65,    66,
      67,    68,    69,    70,    53,    48,    49,    59,     5,    31,
      53,    54,    34,    25,    36,    37,    38,    72,    73,    62,
      14,    43,    44,    17,    18,    14,    25,    15,    50,    51,
      26,     5,    14,    55,    31,    17,    18,    34,    59,    36,
      37,    38,    64,    65,    72,    73,    43,    44,    14,    53,
      53,    17,    18,    50,    51,    15,     5,    31,    55,    15,
      34,    14,    36,    37,    38,    27,    25,    64,    65,    43,
      44,    14,    27,    25,    17,    18,    50,    51,    15,     5,
      27,    55,    31,    59,    51,    34,    14,    36,    37,    38,
      64,    65,   272,    41,    43,    44,    41,   234,   137,   253,
     142,    50,    51,   230,     5,    31,    55,    -1,    34,    -1,
      36,    37,    38,    -1,    -1,    64,    65,    43,    44,    -1,
      -1,    18,    -1,    -1,    50,    51,    23,    -1,    -1,    55,
      31,    -1,    -1,    34,    -1,    36,    37,    38,    64,    65,
      18,    -1,    43,    44,    -1,    23,    24,    -1,    -1,    50,
      51,    48,    49,    -1,    55,    18,    53,    54,    55,    -1,
      23,    24,    -1,    64,    65,    -1,    -1,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    -1,
      53,    54,    55,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    64,    65,    34,    -1,    36,    37,    38,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    28,    -1,    55,    31,    -1,    -1,    34,    -1,
      36,    37,    38,    64,    65,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    28,    -1,    55,
      31,    -1,    -1,    34,    -1,    36,    37,    38,    64,    65,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
      51,    -1,    30,    31,    55,    -1,    34,    -1,    36,    37,
      38,    -1,    -1,    64,    65,    43,    44,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    30,    31,    55,    -1,    34,
      -1,    36,    37,    38,    -1,    -1,    64,    65,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    30,    31,
      55,    -1,    34,    -1,    36,    37,    38,    -1,    -1,    64,
      65,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    30,    31,    55,    -1,    34,    -1,    36,    37,    38,
      -1,    -1,    64,    65,    43,    44,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    55,    31,    -1,    33,
      34,    -1,    36,    37,    38,    64,    65,    -1,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      31,    55,    -1,    34,    -1,    36,    37,    38,    -1,    -1,
      64,    65,    43,    44,    -1,    46,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    55,    31,    -1,    -1,    34,    -1,
      36,    37,    38,    64,    65,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    31,    55,
      -1,    34,    -1,    36,    37,    38,    39,    -1,    64,    65,
      43,    44,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    31,    55,    -1,    34,    -1,    36,    37,    38,    -1,
      40,    64,    65,    43,    44,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    31,    55,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    64,    65,    43,    44,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    76,    55,     0,     4,    77,    31,    34,    36,
      37,    38,    43,    44,    50,    51,    55,    64,    65,    79,
      86,    90,    99,   100,   101,   113,   115,   116,   120,    47,
      63,    71,    74,    80,    82,   109,   110,    23,    55,    23,
      23,    94,    23,    23,    14,    14,     6,    23,    26,    64,
      65,    66,    67,    68,    69,    70,    55,   115,    55,   115,
       5,   116,    14,    14,     6,    64,    65,    66,    67,    68,
      69,    70,    14,    55,    55,    55,    85,    55,     4,    82,
     109,   110,    18,    23,    48,    49,    53,    54,    55,    87,
      88,    89,   112,   115,   117,   118,   119,   120,   121,    57,
      92,    23,    62,   117,    79,    55,    56,    98,   115,    55,
      97,   115,    62,   117,   121,    24,   111,   117,    53,    55,
     114,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,    23,    15,    26,    15,    16,    23,    78,   119,
      87,   117,    23,     7,    10,    11,    12,    24,     7,     8,
       9,    10,    17,    18,    72,    73,    19,    20,    22,   117,
      87,   117,    24,    24,    46,    16,    24,    16,    24,    14,
      14,    14,    14,    16,    24,    25,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    24,    55,    83,
      84,     6,    53,    59,    55,    24,    84,    79,    24,    24,
      24,   111,   121,   121,    88,    88,    32,   117,   117,   117,
     117,   118,   118,   117,   117,   119,   119,   119,    13,    24,
      35,    35,    23,    55,    56,   115,    55,   115,   117,    14,
      26,    15,    15,    26,    16,    24,    53,    54,    62,    81,
     121,    25,    14,    26,     4,    80,    24,     5,    24,    79,
     117,    93,   104,   102,    95,   114,    59,    59,    53,    83,
      15,    15,    26,    53,    79,     4,     4,    80,    33,    42,
      45,    35,    58,   106,   107,   106,    87,    25,     4,    80,
      25,    59,    59,    53,    25,     5,    79,    79,     4,    79,
     117,    79,    81,    52,   107,    52,    24,    79,     4,    15,
      26,     4,    80,    14,    25,    26,     5,     5,    79,    42,
      35,    39,    15,   105,   103,    96,    30,    79,    59,    53,
      79,     4,    53,     5,    91,   108,    15,    15,    14,   117,
      30,    25,    30,    79,    25,    79,    27,    27,    27,     5,
     117,    15,   117,    30,    40,    79,    79,    79,     5,    59,
       5,   117,    28,    28,    28,     5,    51,    41,    41,    14
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
#line 75 "syntaxe.y"
    {file=fopen(strcat((yyvsp[(2) - (2)].var1),".c"),"w");fprintf(file,"#include<stdio.h>\n #include<string.h>\n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 75 "syntaxe.y"
    {fprintf(file,"int main(){\n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 75 "syntaxe.y"
    {affiche(continst,0);fprintf(file,"}");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 83 "syntaxe.y"
    {if(firstloc==1){
                                        base=base->next;
                                        firstloc=0;
                                        }
                                        ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 88 "syntaxe.y"
    {dicoglobal();;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 89 "syntaxe.y"
    {dicoglobal();;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 90 "syntaxe.y"
    {dicoglobal();;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 91 "syntaxe.y"
    {dicoglobal();;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 93 "syntaxe.y"
    {sprintf((yyval.var1),"%d",(yyvsp[(1) - (1)].entier));;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 94 "syntaxe.y"
    {sprintf((yyval.var1),"%f",(yyvsp[(1) - (1)].reel));;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 95 "syntaxe.y"
    {sprintf((yyval.var1),"%c",(yyvsp[(1) - (1)].var1));;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 96 "syntaxe.y"
    {sprintf((yyval.var1),"%s",(yyvsp[(1) - (1)].var1));;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 97 "syntaxe.y"
    {affect_type(0,(yyvsp[(4) - (5)].var1));/*lparametre lawal dyal wax const ola la tadir 1 ila kan cnste*/
                                                        ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 99 "syntaxe.y"
    {identifTest(0,(yyvsp[(2) - (8)].var1),tokens);strcpy(ex2,(yyvsp[(5) - (8)].var1));affect_type(1,(yyvsp[(7) - (8)].var1));p=CHERCHE((yyvsp[(2) - (8)].var1));p->checkval=1;;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 101 "syntaxe.y"
    {affect_type_fun(0,(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));
                                      strcpy(ex2,(yyvsp[(3) - (3)].var1));
                                      returntype(ex2);
                                      sprintf((yyval.var1),"%s %s",ex2,(yyvsp[(1) - (3)].var1));
                                      ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 106 "syntaxe.y"
    {affect_type_fun(1,(yyvsp[(1) - (9)].var1),(yyvsp[(9) - (9)].var1));
                                                                          affect_indix((yyvsp[(1) - (9)].var1),(yyvsp[(3) - (9)].entier),(yyvsp[(6) - (9)].entier));
                                                                          if((yyvsp[(3) - (9)].entier)==0 && (yyvsp[(6) - (9)].entier)>0)yyerror("erreur segmentation");
                                                                          strcpy(ex2,(yyvsp[(9) - (9)].var1));
                                                                          returntype(ex2);
                                                                          sprintf((yyval.var1),"%s[%d][%d] %s",ex2,(yyvsp[(3) - (9)].entier),(yyvsp[(6) - (9)].entier),(yyvsp[(1) - (9)].var1));
                                                                          ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 113 "syntaxe.y"
    {affect_type_fun(1,(yyvsp[(1) - (6)].var1),(yyvsp[(6) - (6)].var1));
                                                        affect_indix((yyvsp[(1) - (6)].var1),(yyvsp[(3) - (6)].entier),0);
                                                        strcpy(ex2,(yyvsp[(6) - (6)].var1));
                                                        returntype(ex2);
                                                        sprintf((yyval.var1),"%s[%d] %s",ex2,(yyvsp[(3) - (6)].entier),(yyvsp[(1) - (6)].var1));
                                                        ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 120 "syntaxe.y"
    {c++;sprintf(instruc[continst++],",%s",(yyvsp[(3) - (3)].var1));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 121 "syntaxe.y"
    {if(firstloc==1){
                                      strcpy(instruc[continst++],(yyvsp[(1) - (1)].var1));
                                      base=base->next;
                                      firstloc=0;}
                                      c++;;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 127 "syntaxe.y"
    {identifTest(0,(yyvsp[(3) - (3)].var1),tokens);
                                      ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 129 "syntaxe.y"
    {identifTest(1,(yyvsp[(3) - (9)].var1),tokens);
                                            affect_indix((yyvsp[(3) - (9)].var1),(yyvsp[(5) - (9)].entier),(yyvsp[(8) - (9)].entier));
                                            /*lparametr lawal dyal wach tablo ola la tadir 1 ila kan tableu*/;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 132 "syntaxe.y"
    {identifTest(1,(yyvsp[(3) - (6)].var1),tokens);
                                            affect_indix((yyvsp[(3) - (6)].var1),(yyvsp[(5) - (6)].entier),0);
                                           /*lparametr lawal dyal wach tablo ola la tadir 1 ila kan tableu*/;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 135 "syntaxe.y"
    {identifTest(0,(yyvsp[(1) - (1)].var1),tokens);
                  ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 137 "syntaxe.y"
    {identifTest(1,(yyvsp[(1) - (7)].var1),tokens);
                          affect_indix((yyvsp[(1) - (7)].var1),(yyvsp[(3) - (7)].entier),(yyvsp[(6) - (7)].entier));
                          ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 140 "syntaxe.y"
    {identifTest(1,(yyvsp[(1) - (4)].var1),tokens);
                          affect_indix((yyvsp[(1) - (4)].var1),(yyvsp[(3) - (4)].entier),0);
                          ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 147 "syntaxe.y"
    {sprintf((yyval.var1),"%s && %s",(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));strcpy(expr,(yyval.var1));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 148 "syntaxe.y"
    {sprintf((yyval.var1),"%s || %s",(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));strcpy(expr,(yyval.var1));;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 149 "syntaxe.y"
    {sprintf((yyval.var1),"%s == %s",(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));strcpy(expr,(yyval.var1));;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 150 "syntaxe.y"
    {sprintf((yyval.var1),"%s != %s",(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));strcpy(expr,(yyval.var1));;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 151 "syntaxe.y"
    {sprintf((yyval.var1),"%s ",(yyvsp[(1) - (1)].var1));strcpy(expr,(yyval.var1));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 154 "syntaxe.y"
    {sprintf((yyval.var1),"(%s)",(yyvsp[(2) - (3)].var1));;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 155 "syntaxe.y"
    {sprintf((yyval.var1),"%s",(yyvsp[(1) - (1)].var1));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 160 "syntaxe.y"
    {sprintf((yyval.var1),"%s == %s",(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 161 "syntaxe.y"
    {sprintf((yyval.var1),"%s != %s",(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 162 "syntaxe.y"
    {sprintf((yyval.var1),"%s >= %s",(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 163 "syntaxe.y"
    {sprintf((yyval.var1),"%s > %s",(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 164 "syntaxe.y"
    {sprintf((yyval.var1),"%s < %s",(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 165 "syntaxe.y"
    {sprintf((yyval.var1),"%s <= %s",(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 167 "syntaxe.y"
    {sprintf((yyval.var1)," %s",(yyvsp[(1) - (1)].var1));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 173 "syntaxe.y"
    {sprintf(instruc[continst++],"for(%s=%s;%s<%s;%s+=%s){\n",(yyvsp[(2) - (9)].var1),(yyvsp[(4) - (9)].var1),(yyvsp[(2) - (9)].var1),(yyvsp[(6) - (9)].var1),(yyvsp[(2) - (9)].var1),(yyvsp[(8) - (9)].var1));isUsable((yyvsp[(2) - (9)].var1)); p=CHERCHE((yyvsp[(2) - (9)].var1));
                                                          p->checkval=1;;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 174 "syntaxe.y"
    {
                                                         p=CHERCHE((yyvsp[(2) - (12)].var1));
                                                          if(strcmp(p->type,"Entier")!=0){printf("%s ",p->identif);
                                                                                         yyerror("doit étre de type entier");
                                                                                         }
                                        sprintf(instruc[continst++],"}\n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 180 "syntaxe.y"
    {sprintf(instruc[continst++],"while(");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 180 "syntaxe.y"
    {sprintf(instruc[continst++],"%s){\n",(yyvsp[(4) - (5)].var1));;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 180 "syntaxe.y"
    {sprintf(instruc[continst++],"}\n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 181 "syntaxe.y"
    {sprintf(instruc[continst++],"do{\n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 181 "syntaxe.y"
    {sprintf(instruc[continst++],"}while(");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 181 "syntaxe.y"
    {sprintf(instruc[continst++],"%s);\n",(yyvsp[(7) - (8)].var1));;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 184 "syntaxe.y"
    {isUsable((yyvsp[(3) - (3)].var1));
                                      strcat(ex1,",");
                                      strcat(ex1,"&");
                                      strcat(ex1,(yyvsp[(3) - (3)].var1));
                                      p=CHERCHE((yyvsp[(3) - (3)].var1));
                                      strcpy(k,p->type);
                                      returnformat(k);
                                      strcat(exp1,k);
                                      if(p->lignex>0){
                                        printf("%s",(yyvsp[(3) - (3)].var1));
                                        yyerror("est un tableau ou un matrice");
                                        }
                                      ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 197 "syntaxe.y"
    {isUsable((yyvsp[(1) - (1)].var1));
            sprintf(ex1,",&%s",(yyvsp[(1) - (1)].var1));
            p=CHERCHE((yyvsp[(1) - (1)].var1));
            p->checkval=1;
            strcpy(k,p->type);
            returnformat(k);
            strcpy(exp1,k);
            if(p->lignex>0){
              printf("%s",(yyvsp[(1) - (1)].var1));
              yyerror("est un tableau ou un matrice");
              }
            ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 209 "syntaxe.y"
    {isUsable(ex2);
                                      strcat(ex1,",");
                                      strcat(ex1,"&");
                                      strcat(ex1,(yyvsp[(3) - (3)].var1));
                                      p=CHERCHE(ex2);
                                      strcpy(k,p->type);
                                      returnformat(k);
                                      strcat(exp1,k);
                                      

                                      ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 220 "syntaxe.y"
    {isUsable(ex2);
            sprintf(ex1,",&%s",(yyvsp[(1) - (1)].var1));
            p=CHERCHE(ex2);
            strcpy(k,p->type);
            returnformat(k);
            strcpy(exp1,k);
            ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 229 "syntaxe.y"
    {isUsable((yyvsp[(3) - (3)].var1));
                                      strcat(ex1,",");
                                      strcat(ex1,(yyvsp[(3) - (3)].var1));
                                      p=CHERCHE((yyvsp[(3) - (3)].var1));
                                      strcpy(k,p->type);
                                      returnformat(k);
                                      strcat(exp1,k);
                                      if(p->lignex>0){
                                        printf("%s",(yyvsp[(3) - (3)].var1));
                                        yyerror("est un tableau ou un matrice");
                                        }
                                      ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 241 "syntaxe.y"
    {isUsable((yyvsp[(1) - (1)].var1));
            sprintf(ex1,",%s",(yyvsp[(1) - (1)].var1));
            p=CHERCHE((yyvsp[(1) - (1)].var1));
            
            strcpy(k,p->type);
            returnformat(k);
            strcpy(exp1,k);
            if(p->lignex>0){
              printf("%s",(yyvsp[(1) - (1)].var1));
              yyerror("est un tableau ou un matrice");
              }
            ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 253 "syntaxe.y"
    {isUsable(ex2);
                                      strcat(ex1,",");
                                      strcat(ex1,(yyvsp[(3) - (3)].var1));
                                      p=CHERCHE(ex2);
                                      strcpy(k,p->type);
                                      returnformat(k);
                                      strcat(exp1,k);
                                      

                                      ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 263 "syntaxe.y"
    {isUsable(ex2);
            sprintf(ex1,",%s",(yyvsp[(1) - (1)].var1));
            p=CHERCHE(ex2);
            strcpy(k,p->type);
            returnformat(k);
            strcpy(exp1,k);
            ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 270 "syntaxe.y"
    {sprintf(ex1,",%s",(yyvsp[(1) - (1)].var1));strcpy(exp1,"%s");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 271 "syntaxe.y"
    {strcat(ex1,",");strcat(ex1,(yyvsp[(3) - (3)].var1));strcat(exp1,"%s");;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 273 "syntaxe.y"
    {sprintf(instruc[continst++],"scanf(\"%s\"%s);\n",exp1,ex1);;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 275 "syntaxe.y"
    {sprintf(instruc[continst++],"printf(\"%s\"%s);\n",exp1,ex1);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 279 "syntaxe.y"
    {sprintf(instruc[continst++],"switch((int)%s){\n",(yyvsp[(3) - (5)].var1));;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 279 "syntaxe.y"
    {sprintf(instruc[continst++],"default :{ \n");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 279 "syntaxe.y"
    {sprintf(instruc[continst++],"}}");;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 280 "syntaxe.y"
    {sprintf(instruc[continst++],"switch(%s){\n",(yyvsp[(3) - (5)].var1));;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 280 "syntaxe.y"
    {sprintf(instruc[continst++],"default :{ \n");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 280 "syntaxe.y"
    {sprintf(instruc[continst++],"}}");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 285 "syntaxe.y"
    {sprintf(instruc[continst++],"case %s : { \n",(yyvsp[(2) - (3)].var1));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 285 "syntaxe.y"
    {sprintf(instruc[continst++],"}break; \n");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 289 "syntaxe.y"
    {fonctionTest(0,c,(yyvsp[(2) - (13)].var1),(yyvsp[(7) - (13)].var1),tokens);
                                                                                                                                      strcpy(exp1,(yyvsp[(12) - (13)].var1));
                                                                                                                                      if((strcmp(sommetfonction->type,"Reel")==0)||(strcmp(sommetfonction->type,"Entier")==0)||(strcmp(sommetfonction->type,"booleen")==0)){
                                                                                                                                        
                                                                                                                                        }else{
                                                                                                                                          yyerror("ce type est interdit pour les fonctions  ");
                                                                                                                                          }
                                                                                                                                      
                                                                                                                                        if(strcmp(sommetfonction->type,"Entier")==0){
                                                                                                                                        strcpy(exp1,"(int)");
                                                                                                                                        strcat(exp1,(yyvsp[(12) - (13)].var1));
                                                                                                                                        
                                                                                                                                        }
                                                                                                                                        
                                                                                                                                        strcpy(ex2,(yyvsp[(7) - (13)].var1));
                                                                                                                                        returntype(ex2);
                                                                                                                                        
                                                                                                                                        fprintf(file,"%s %s(",ex2,(yyvsp[(2) - (13)].var1));
                                                                                                                                        affiche(c,0);
                                                                                                                                        fprintf(file,"){\n");
                                                                                                                                        affiche(continst,c);
                                                                                                                                        continst=0;
                                                                                                                                        fprintf(file,"return %s;\n }\n",exp1);
                                                                                                                                        c=0;
                                                                                                                                        ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 314 "syntaxe.y"
    {fonctionTest(0,c,(yyvsp[(2) - (12)].var1),(yyvsp[(7) - (12)].var1),tokens);
                                                                                                                                      strcpy(exp1,(yyvsp[(11) - (12)].var1));
                                                                                                                                      if((strcmp(sommetfonction->type,"Reel")==0)||(strcmp(sommetfonction->type,"Entier")==0)){
                                                                                                                                        
                                                                                                                                        }else{
                                                                                                                                          yyerror("ce type est interdit pour les fonctions  ");
                                                                                                                                          }
                                                                                                                                     
                                                                                                                                        if(strcmp(sommetfonction->type,"Entier")==0){
                                                                                                                                        strcpy(exp1,"(int)");
                                                                                                                                        strcat(exp1,(yyvsp[(11) - (12)].var1));
                                                                                                                                        
                                                                                                                                        }
                                                                                                                                        
                                                                                                                                        strcpy(ex2,(yyvsp[(7) - (12)].var1));
                                                                                                                                        returntype(ex2);
                                                                                                                                        
                                                                                                                                        fprintf(file,"%s %s(",ex2,(yyvsp[(2) - (12)].var1));
                                                                                                                                        affiche(c,0);
                                                                                                                                        fprintf(file,"){\n");
                                                                                                                                        affiche(continst,c);
                                                                                                                                        continst=0;
                                                                                                                                        fprintf(file,"return %s;\n }\n",exp1);
                                                                                                                                        c=0;
                                                                                                                      ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 339 "syntaxe.y"
    {fonctionTest(0,0,(yyvsp[(2) - (12)].var1),(yyvsp[(6) - (12)].var1),tokens);
                                                                                                            strcpy(exp1,(yyvsp[(11) - (12)].var1));
                                                                                                                                      if((strcmp(sommetfonction->type,"Reel")==0)||(strcmp(sommetfonction->type,"Entier")==0)){
                                                                                                                                        
                                                                                                                                        }else{
                                                                                                                                          yyerror("ce type est interdit pour les fonctions  ");
                                                                                                                                          }
                                                                                                                                      
                                                                                                                                        if(strcmp(sommetfonction->type,"Entier")==0){
                                                                                                                                        strcpy(exp1,"(int)");
                                                                                                                                        strcat(exp1,(yyvsp[(11) - (12)].var1));
                                                                                                                                        
                                                                                                                                        }
                                                                                                                                        
                                                                                                                                        strcpy(ex2,(yyvsp[(6) - (12)].var1));
                                                                                                                                        returntype(ex2);
                                                                                                                                        
                                                                                                                                        fprintf(file,"%s %s(",ex2,(yyvsp[(2) - (12)].var1));
                                                                                                                                        
                                                                                                                                        fprintf(file,"){\n");
                                                                                                                                        affiche(continst,c);
                                                                                                                                        continst=0;
                                                                                                                                        fprintf(file,"return %s;\n }\n",exp1);
                                                                                                                                        
                                                                                                                  ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 364 "syntaxe.y"
    {fonctionTest(0,0,(yyvsp[(2) - (11)].var1),(yyvsp[(6) - (11)].var1),tokens);
                                                                                                  strcpy(exp1,(yyvsp[(10) - (11)].var1));
                                                                                                                                      if((strcmp(sommetfonction->type,"Reel")==0)||(strcmp(sommetfonction->type,"Entier")==0)){
                                                                                                                                        
                                                                                                                                        }else{
                                                                                                                                          yyerror("ce type est interdit pour les fonctions  ");
                                                                                                                                          }
                                                                                                                                     
                                                                                                                                        if(strcmp(sommetfonction->type,"Entier")==0){
                                                                                                                                        strcpy(exp1,"(int)");
                                                                                                                                        strcat(exp1,(yyvsp[(10) - (11)].var1));
                                                                                                                                        
                                                                                                                                        }
                                                                                                                                        
                                                                                                                                        strcpy(ex2,(yyvsp[(6) - (11)].var1));
                                                                                                                                        returntype(ex2);
                                                                                                                                        
                                                                                                                                        fprintf(file,"%s %s(",ex2,(yyvsp[(2) - (11)].var1));
                                                                                                                                        
                                                                                                                                        fprintf(file,"){\n");
                                                                                                                                        affiche(continst,c);
                                                                                                                                        continst=0;
                                                                                                                                        fprintf(file,"return %s;\n }\n",exp1);
                                                                                                                                        ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 390 "syntaxe.y"
    {fonctionTest(1,c,(yyvsp[(2) - (8)].var1),"NULL",tokens);
                                                                                                                                                                      
                                                                                    fprintf(file,"void %s(",(yyvsp[(2) - (8)].var1));
                                                                                    affiche(c,0);
                                                                                    fprintf(file,"){\n");
                                                                                    affiche(continst,c);
                                                                                    continst=0;
                                                                                    fprintf(file," }\n");
                                                                                    c=0;;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 399 "syntaxe.y"
    {fonctionTest(1,c,(yyvsp[(2) - (9)].var1),"NULL",tokens);
                                                                                                fprintf(file,"void %s(",(yyvsp[(2) - (9)].var1));
                                                                                    affiche(c,0);
                                                                                    fprintf(file,"){\n");
                                                                                    affiche(continst,c);
                                                                                    continst=0;
                                                                                    fprintf(file," }\n");
                                                                                    c=0;
                                                                                                ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 408 "syntaxe.y"
    {fonctionTest(1,0,(yyvsp[(2) - (7)].var1),"NULL",tokens);
                                                                fprintf(file,"void %s(",(yyvsp[(2) - (7)].var1));
                                                                                    
                                                                                    fprintf(file,"){\n");
                                                                                    affiche(continst,c);
                                                                                    continst=0;
                                                                                    fprintf(file," }\n");
                                                                                    ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 416 "syntaxe.y"
    {fonctionTest(1,0,(yyvsp[(2) - (8)].var1),"NULL",tokens);
                                                                            fprintf(file,"void %s(",(yyvsp[(2) - (8)].var1));
                                                                                    
                                                                                    fprintf(file,"){\n");
                                                                                    affiche(continst,c);
                                                                                    continst=0;
                                                                                    fprintf(file," }\n");
                                                                                    ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 426 "syntaxe.y"
    {c1++;sprintf(ex2,",%s",(yyvsp[(3) - (3)].var1));strcat((yyval.var1),ex2);;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 427 "syntaxe.y"
    {c1++;strcpy((yyval.var1),(yyvsp[(1) - (1)].var1));;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 430 "syntaxe.y"
    {f=CHERCHEFON((yyvsp[(1) - (4)].var1));
                                              if(f==NULL){
                                                yyerror("fonction inconnu");}
                                                if(f->proc==1){
                                                  yyerror("les procedures ne retournent aucune valeur");}
                                                  if(f->arg!=c1){
                                                    yyerror("trop peu d'arguments pour fonctionner");}
                                                    sprintf((yyval.var1),"%s(%s)",(yyvsp[(1) - (4)].var1),(yyvsp[(3) - (4)].var1));c1=0;;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 438 "syntaxe.y"
    {f=CHERCHEFON((yyvsp[(1) - (3)].var1));
                                  if(f==NULL){
                                    yyerror("fonction inconnu");}
                                  if(f->proc==1){
                                    yyerror("les procedures ne retournent aucune valeur");}
                                    if(f->arg!=c1){
                                      yyerror("trop peu d'arguments pour fonctionner");}
                                       sprintf((yyval.var1),"%s()",(yyvsp[(1) - (3)].var1));c1=0;;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 447 "syntaxe.y"
    {f=CHERCHEFON((yyvsp[(1) - (5)].var1));
                                                        if(f==NULL){
                                                          yyerror("procedure inconnu");}
                                                          if(f->arg!=c1){
                                                                       yyerror("trop peu d'arguments pour fonctionner");}
                                                          sprintf((yyval.var1),"%s(%s)",(yyvsp[(1) - (5)].var1),(yyvsp[(3) - (5)].var1));c1=0;;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 453 "syntaxe.y"
    {f=CHERCHEFON((yyvsp[(1) - (4)].var1));
                                        if(f==NULL){
                                          yyerror("procedure inconnu");}
                                          if(f->arg!=c1){
                                            yyerror("trop peu d'arguments pour fonctionner");}
                                          sprintf((yyval.var1),"%s())",(yyvsp[(1) - (4)].var1));c1=0;;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 460 "syntaxe.y"
    {sprintf((yyval.var1),"%d",(yyvsp[(1) - (1)].entier));;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 461 "syntaxe.y"
    {
                  isUsable((yyvsp[(1) - (1)].var1));
                  p=CHERCHE((yyvsp[(1) - (1)].var1));
                  if(p->checkval==0){
                    printf("%s  ",p->identif);yyerror("la variable est null");
                  }
                  sprintf((yyval.var1),"%s",(yyvsp[(1) - (1)].var1));
            ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 470 "syntaxe.y"
    {isUsable((yyvsp[(1) - (7)].var1));
                        p=CHERCHE((yyvsp[(1) - (7)].var1));
                        strcpy(ex2,p->identif);
                        if(p->lignex<=atoi((yyvsp[(3) - (7)].var1)) || p->colonney<=atoi((yyvsp[(6) - (7)].var1)) ||atoi((yyvsp[(3) - (7)].var1))<0||atoi((yyvsp[(6) - (7)].var1))<0){
                          yyerror("erreur segmentation");
                        }
                        sprintf((yyval.var1),"%s[%s][%s]",(yyvsp[(1) - (7)].var1),(yyvsp[(3) - (7)].var1),(yyvsp[(6) - (7)].var1));
        ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 479 "syntaxe.y"
    {isUsable((yyvsp[(1) - (4)].var1));
                        p=CHERCHE((yyvsp[(1) - (4)].var1));
                        strcpy(ex2,p->identif);
                        if(p->colonney>0){
                          printf("%s",p->identif);yyerror("est matrice");
                        }
                        if(p->lignex<=atoi((yyvsp[(3) - (4)].var1))||atoi((yyvsp[(3) - (4)].var1))<0){
                          yyerror("erreur segmentation");
                        }
                        sprintf((yyval.var1),"%s[%s]",(yyvsp[(1) - (4)].var1),(yyvsp[(3) - (4)].var1));
        ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 491 "syntaxe.y"
    {
                                    p=CHERCHE(ex2);
                                  if((strcmp(p->type,"Caractere")==0)||(strcmp(p->type,"Chaine_Caractere")==0)){
                                    yyerror("les  types ne sont pas compatibles  ");}
                                  if(p->cnst==1&&p->checkval==1){
                                    printf("%s ",p->identif);yyerror("est constante");}
                                    if(strcmp(p->type,"Entier")==0 ){
                                           if((int)atof((yyvsp[(3) - (4)].var1))!=atof((yyvsp[(3) - (4)].var1))){
                                                printf("%s ",p->identif);yyerror("est tableau d'entier");
                                            }
                                      }
                                        
                                         sprintf(instruc[continst++],"%s = %s;\n",(yyvsp[(1) - (4)].var1),(yyvsp[(3) - (4)].var1));
                                        p->checkval=1;
                                        
                                        ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 507 "syntaxe.y"
    {isUsable((yyvsp[(1) - (4)].var1));
                               p=CHERCHE((yyvsp[(1) - (4)].var1));
                               if(p->lignex>0){
                                 printf("%s",(yyvsp[(1) - (4)].var1));
                                 yyerror("est un tableau ou un matrice");
                                 }

                               if(p->cnst==1&&p->checkval==1){
                                 printf("%s ",p->identif);yyerror("est constante");}
                                 if((strcmp(p->type,"Entier")==0)||(strcmp(p->type,"Reel")==0)){
                                   yyerror("les  types ne sont pas compatibles  ");}
                                   if((strcmp(p->type,"Caractere")==0)&&strlen((yyvsp[(3) - (4)].var1))>3){
                                     yyerror("la variable est type caractere");}
                                     
                                     p->checkval=1;;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 522 "syntaxe.y"
    {
                                p=CHERCHE(ex2);
                                if(p->cnst==1&&p->checkval==1){
                                  printf("%s ",p->identif);
                                  yyerror("est constante");}
                                  if(strcmp(p->type,"Entier")==0 ){
                                           if((int)atof((yyvsp[(3) - (4)].var1))!=atof((yyvsp[(3) - (4)].var1))){
                                                printf("%s ",p->identif);yyerror("est tableau d'entier");
                                            }
                                      }
                                        
                                         sprintf(instruc[continst++],"%s += %s;\n",(yyvsp[(1) - (4)].var1),(yyvsp[(3) - (4)].var1));
                                 ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 535 "syntaxe.y"
    {
                                p=CHERCHE(ex2);
                                if(p->cnst==1&&p->checkval==1){
                                  printf("%s ",p->identif);
                                  yyerror("est constante");}
                                  if(strcmp(p->type,"Entier")==0 ){
                                           if((int)atof((yyvsp[(3) - (4)].var1))!=atof((yyvsp[(3) - (4)].var1))){
                                                printf("%s ",p->identif);yyerror("est tableau d'entier");
                                            }
                                      }
                                        
                                         sprintf(instruc[continst++],"%s -= %s;\n",(yyvsp[(1) - (4)].var1),(yyvsp[(3) - (4)].var1));;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 547 "syntaxe.y"
    {
                                p=CHERCHE(ex2);
                                if(p->cnst==1&&p->checkval==1){
                                  printf("%s ",p->identif);yyerror("est constante");}
                                if(strcmp(p->type,"Entier")==0 ){
                                           if((int)atof((yyvsp[(3) - (4)].var1))!=atof((yyvsp[(3) - (4)].var1))){
                                                printf("%s ",p->identif);yyerror("est tableau d'entier");
                                            }
                                      }
                                        
                                         sprintf(instruc[continst++],"%s /= %s;\n",(yyvsp[(1) - (4)].var1),(yyvsp[(3) - (4)].var1));;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 558 "syntaxe.y"
    {
                                p=CHERCHE("ex2");
                                if(p->cnst==1&&p->checkval==1){
                                  printf("%s ",p->identif);
                                  yyerror("est constante");}
                                  if(strcmp(p->type,"Entier")==0 ){
                                           if((int)atof((yyvsp[(3) - (4)].var1))!=atof((yyvsp[(3) - (4)].var1))){
                                                printf("%s ",p->identif);yyerror("est tableau d'entier");
                                            }
                                      }
                                        
                                         sprintf(instruc[continst++],"%s *= %s;\n",(yyvsp[(1) - (4)].var1),(yyvsp[(3) - (4)].var1));;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 570 "syntaxe.y"
    {
                                    p=CHERCHE(ex2);
                                    if(p->cnst==1&&p->checkval==1){
                                      printf("%s ",p->identif);yyerror("est constante");}
                                      if(strcmp(p->type,"Entier")==0 ){
                                           if((int)atof((yyvsp[(3) - (4)].var1))!=atof((yyvsp[(3) - (4)].var1))){
                                                printf("%s ",p->identif);yyerror("est tableau d'entier");
                                            }
                                            sprintf(expr,"%d",(int)atof((yyvsp[(3) - (4)].var1)));
                                            sprintf(instruc[continst++],"%s %c=%s\n",(yyvsp[(1) - (4)].var1),37,expr);
                                      }else{
                                            printf("%s ",(yyvsp[(1) - (4)].var1));yyerror("n'est pas entier");
                                      }
                                        
                                         ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 585 "syntaxe.y"
    {isUsable((yyvsp[(1) - (4)].var1));
                                    
                                    p=CHERCHE((yyvsp[(1) - (4)].var1));
                                    if(p->lignex>0){
                                 printf("%s",(yyvsp[(1) - (4)].var1));
                                 yyerror("est un tableau ou un matrice");
                                 }
                                  if((strcmp(p->type,"Caractere")==0)||(strcmp(p->type,"Chaine_Caractere")==0)){
                                    yyerror("les  types ne sont pas compatibles  ");}
                                  if(p->cnst==1){
                                    printf("%s ",p->identif);yyerror("est constante");}
                                    if(strcmp(p->type,"Entier")==0){
                                      sprintf((yyvsp[(1) - (4)].var1),"%d",(int)atof((yyvsp[(3) - (4)].var1)));}
                                      else{
                                        strcpy((yyvsp[(1) - (4)].var1),(yyvsp[(3) - (4)].var1));}
                                        p->checkval=1;
                                        if(strcmp(p->type,"Entier")==0 ){
                                           if((int)atof((yyvsp[(3) - (4)].var1))!=atof((yyvsp[(3) - (4)].var1))){
                                                printf("%s ",p->identif);yyerror("est un entier");
                                            }
                                      }
                                        
                                         sprintf(instruc[continst++],"%s=%s;\n",p->identif,(yyvsp[(3) - (4)].var1));
                                        ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 609 "syntaxe.y"
    {isUsable((yyvsp[(1) - (4)].var1));
                              p=CHERCHE((yyvsp[(1) - (4)].var1));
                              p->checkval=1;
                              if(p->lignex>0){
                                 printf("%s",(yyvsp[(1) - (4)].var1));
                                 yyerror("est un tableau ou un matrice");
                                 }
                              
                                  sprintf(instruc[continst++],"%s=%s;\n",p->identif,(yyvsp[(3) - (4)].var1));
                                
                              ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 620 "syntaxe.y"
    {isUsable((yyvsp[(1) - (4)].var1));
                                p=CHERCHE((yyvsp[(1) - (4)].var1));
                                if(p->lignex>0){
                                 printf("%s",(yyvsp[(1) - (4)].var1));
                                 yyerror("est un tableau ou un matrice");
                                 }
                                if(p->cnst==1){
                                  printf("%s ",p->identif);
                                  yyerror("est constante");}
                                  if(strcmp(p->type,"Entier")==0 ){
                                           if((int)atof((yyvsp[(3) - (4)].var1))!=atof((yyvsp[(3) - (4)].var1))){
                                                printf("%s ",p->identif);yyerror("est un entier");
                                            }
                                      }
                                      if(p->checkval==0){printf("%s ",p->identif);yyerror("n'a pas un valeur initial");}
                                         sprintf(instruc[continst++],"%s += %s;\n",(yyvsp[(1) - (4)].var1),(yyvsp[(3) - (4)].var1));;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 636 "syntaxe.y"
    {isUsable((yyvsp[(1) - (4)].var1));
                                    if(p->lignex>0){
                                 printf("%s",(yyvsp[(1) - (4)].var1));
                                 yyerror("est un tableau ou un matrice");
                                 }
                                p=CHERCHE((yyvsp[(1) - (4)].var1));
                                if(p->cnst==1){
                                  printf("%s ",p->identif);
                                  yyerror("est constante");}
                                  if(strcmp(p->type,"Entier")==0 ){
                                           if((int)atof((yyvsp[(3) - (4)].var1))!=atof((yyvsp[(3) - (4)].var1))){
                                                printf("%s ",p->identif);yyerror("est un entier");
                                            }
                                      }
                                        if(p->checkval==0){printf("%s ",p->identif);yyerror("n'a pas un valeur initial");}
                                         sprintf(instruc[continst++],"%s -= %s;\n",(yyvsp[(1) - (4)].var1),(yyvsp[(3) - (4)].var1));;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 652 "syntaxe.y"
    {isUsable((yyvsp[(1) - (4)].var1));
                                p=CHERCHE((yyvsp[(1) - (4)].var1));
                                if(p->lignex>0){
                                 printf("%s",(yyvsp[(1) - (4)].var1));
                                 yyerror("est un tableau ou un matrice");
                                 }
                                if(p->cnst){
                                  printf("%s ",p->identif);yyerror("est constante");}
                                if(strcmp(p->type,"Entier")==0 ){
                                           if((int)atof((yyvsp[(3) - (4)].var1))!=atof((yyvsp[(3) - (4)].var1))){
                                                printf("%s ",p->identif);yyerror("est un entier");
                                            }
                                      }
                                        if(p->checkval==0){printf("%s ",p->identif);yyerror("n'a pas un valeur initial");}
                                         sprintf(instruc[continst++],"%s /=%s;\n",(yyvsp[(1) - (4)].var1),(yyvsp[(3) - (4)].var1));;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 667 "syntaxe.y"
    {isUsable((yyvsp[(1) - (4)].var1));
                                p=CHERCHE((yyvsp[(1) - (4)].var1));
                                if(p->lignex>0){
                                 printf("%s",(yyvsp[(1) - (4)].var1));
                                 yyerror("est un tableau ou un matrice");
                                 }
                                if(p->cnst){
                                  printf("%s ",p->identif);
                                  yyerror("est constante");}
                                 if(strcmp(p->type,"Entier")==0 ){
                                           if((int)atof((yyvsp[(3) - (4)].var1))!=atof((yyvsp[(3) - (4)].var1))){
                                                printf("%s ",p->identif);yyerror("est un entier");
                                            }
                                      }
                                        if(p->checkval==0){printf("%s ",p->identif);yyerror("n'a pas un valeur initial");}
                                         sprintf(instruc[continst++],"%s *=%s;\n",(yyvsp[(1) - (4)].var1),(yyvsp[(3) - (4)].var1));;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 683 "syntaxe.y"
    {isUsable((yyvsp[(1) - (4)].var1));
                                    p=CHERCHE((yyvsp[(1) - (4)].var1));
                                    if(p->lignex>0){
                                 printf("%s",(yyvsp[(1) - (4)].var1));
                                 yyerror("est un tableau ou un matrice");
                                 }
                                    if(p->cnst==1){
                                      printf("%s ",p->identif);yyerror("est constante");}
                                      if(strcmp(p->type,"Entier")==0 ){
                                           if((int)atof((yyvsp[(3) - (4)].var1))!=atof((yyvsp[(3) - (4)].var1))){
                                                printf("%s ",(yyvsp[(3) - (4)].var1));yyerror("n'est pas entier");
                                            }
                                            sprintf(expr,"%d",(int)atof((yyvsp[(3) - (4)].var1)));
                                            sprintf(instruc[continst++],"%s %c= %s;\n",(yyvsp[(1) - (4)].var1),37,expr);
                                      }else{
                                            printf("%s ",p->identif);yyerror("n'est pas entier");
                                      }
                                      if(p->checkval==0){printf("%s ",p->identif);yyerror("n'a pas un valeur initial");};}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 706 "syntaxe.y"
    {sprintf(instruc[continst++],"break;\n");;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 707 "syntaxe.y"
    {sprintf(instruc[continst++],"continue;\n");;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 709 "syntaxe.y"
    {sprintf(instruc[continst++],"%s;\n",(yyvsp[(1) - (1)].var1));;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 710 "syntaxe.y"
    {sprintf(instruc[continst++],"%s ;\n",(yyvsp[(1) - (2)].var1));;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 712 "syntaxe.y"
    {sprintf((yyval.var1),"%s + %s",(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 713 "syntaxe.y"
    {sprintf((yyval.var1),"%s - %s",(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 714 "syntaxe.y"
    {sprintf((yyval.var1),"%s",(yyvsp[(1) - (1)].var1));;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 717 "syntaxe.y"
    {sprintf((yyval.var1),"%s * %s",(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 718 "syntaxe.y"
    {sprintf((yyval.var1),"%s / %s",(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 719 "syntaxe.y"
    {sprintf((yyval.var1),"%s % %s",(yyvsp[(1) - (3)].var1),(yyvsp[(3) - (3)].var1));;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 720 "syntaxe.y"
    {sprintf((yyval.var1),"%s",(yyvsp[(1) - (1)].var1));;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 723 "syntaxe.y"
    {sprintf((yyval.var1),"%d",(yyvsp[(1) - (1)].entier));;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 724 "syntaxe.y"
    {sprintf((yyval.var1),"%f",(yyvsp[(1) - (1)].reel));;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 725 "syntaxe.y"
    {isUsable((yyvsp[(1) - (1)].var1));
                        p=CHERCHE((yyvsp[(1) - (1)].var1));
                        if(p->lignex>0){
                                 printf("%s\t",(yyvsp[(1) - (1)].var1));
                                 yyerror("est un tableau ou un matrice");
                                 }
                        if(p->checkval==0 && infunction==0){
                          printf("%s :: ",p->identif);yyerror("en utilise variable null");
                          }
                        strcpy((yyval.var1),p->identif);
                        if(p->tab==1){
                           yyerror("vous ne pouvez pas affecter un tableau a un variable");
                        }
                        sprintf((yyval.var1),"%s",p->identif);
                  ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 741 "syntaxe.y"
    {isUsable((yyvsp[(1) - (1)].var1));
                        p=CHERCHE(ex2);
                        if(p->checkval==0 && infunction==0){
                          yyerror("en utilise variable null");
                          }
                       sprintf((yyval.var1),"%s",(yyvsp[(1) - (1)].var1));

        ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 749 "syntaxe.y"
    {sprintf((yyval.var1),"%s",(yyvsp[(1) - (1)].var1));;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 750 "syntaxe.y"
    {sprintf((yyval.var1),"%s",(yyvsp[(1) - (1)].var1));;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 752 "syntaxe.y"
    {sprintf((yyval.var1),"- %s",(yyvsp[(2) - (2)].var1));;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 753 "syntaxe.y"
    {strcpy(expr,"(");
                                strcat(expr,(yyvsp[(2) - (3)].var1));
                                strcat(expr,")");
                                strcpy((yyval.var1),expr);
                                ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 760 "syntaxe.y"
    {isUsable((yyvsp[(2) - (2)].var1));
                          p=CHERCHE((yyvsp[(2) - (2)].var1));if(p->lignex>0){
                                 printf("%s\t",(yyvsp[(2) - (2)].var1));
                                 yyerror("est un tableau ou un matrice");
                                 }
                          if(p->cnst==1&&p->checkval==1){
                            printf("%s ",p->identif);yyerror("est constante");}
                            if(p->checkval==0){
                              yyerror("la variable est null");}
                              sprintf((yyval.var1),"++%s",p->identif);
                              ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 771 "syntaxe.y"
    {isUsable((yyvsp[(2) - (2)].var1));
                            p=CHERCHE((yyvsp[(2) - (2)].var1));
                            if(p->lignex>0){
                                 printf("%s\t",(yyvsp[(2) - (2)].var1));
                                 yyerror("est un tableau ou un matrice");
                                 }
                            if(p->cnst==1&&p->checkval==1){
                              printf("%s ",p->identif);yyerror("est constante");}
                              if(p->checkval==0){
                                yyerror("la variable est null");}
                                sprintf((yyval.var1),"--%s",p->identif);;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 782 "syntaxe.y"
    {isUsable((yyvsp[(1) - (2)].var1));
                            p=CHERCHE((yyvsp[(1) - (2)].var1));
                            if(p->lignex>0){
                                 printf("%s\t",(yyvsp[(1) - (2)].var1));
                                 yyerror("est un tableau ou un matrice");
                                 }
                            if(p->cnst==1&&p->checkval==1){
                              printf("%s ",p->identif);
                              yyerror("est constante");}
                              if(p->checkval==0){
                                yyerror("la variable est null");}
                                sprintf((yyval.var1),"%s++",p->identif);;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 794 "syntaxe.y"
    {isUsable((yyvsp[(1) - (2)].var1));
                            p=CHERCHE((yyvsp[(1) - (2)].var1));
                            if(p->lignex>0){
                                 printf("%s\t",(yyvsp[(1) - (2)].var1));
                                 yyerror("est un tableau ou un matrice");
                                 }
                            if(p->cnst==1&&p->checkval==1){
                              printf("%s ",p->identif);
                              yyerror("est constante");}
                              if(p->checkval==0){
                                yyerror("la variable est null");}
                                sprintf((yyval.var1),"%s--",p->identif);;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 806 "syntaxe.y"
    {
                          p=CHERCHE(ex2);
                                 
                          
                            if(p->checkval==0){
                              yyerror("la variable est null");}
                              sprintf((yyval.var1),"++ %s",(yyvsp[(2) - (2)].var1));
                              ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 814 "syntaxe.y"
    {
                            p=CHERCHE(ex2);
                            
                            
                              if(p->checkval==0){
                                yyerror("la variable est null");}
                                sprintf((yyval.var1),"-- %s",(yyvsp[(2) - (2)].var1));;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 821 "syntaxe.y"
    {
                            p=CHERCHE(ex2);
                            
                              if(p->checkval==0){
                                yyerror("la variable est null");}
                                sprintf((yyval.var1),"%s ++",(yyvsp[(1) - (2)].var1));;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 827 "syntaxe.y"
    {
                            p=CHERCHE(ex2);
                           
                              if(p->checkval==0){
                                yyerror("la variable est null");}
                                sprintf((yyval.var1),"%s --",(yyvsp[(1) - (2)].var1));;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 834 "syntaxe.y"
    {sprintf((yyval.var1),"1");;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 835 "syntaxe.y"
    {sprintf((yyval.var1),"0");;}
    break;



/* Line 1455 of yacc.c  */
#line 3358 "syntaxe.c"
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
#line 837 "syntaxe.y"

void returntype(char *s){
  if(strcmp(s,"Entier")==0){
          strcpy(s,"int");
        }
  if(strcmp(s,"Reel")==0){
          strcpy(s,"float");
        }
  if(strcmp(s,"Caractere")==0){
          strcpy(s,"char");
        }
        
}
void returnformat(char *k){
  if(strcmp(k,"Entier")==0){
          strcpy(k,"%d");
        }
  if(strcmp(k,"Reel")==0){
          strcpy(k,"%f");
        }
  if(strcmp(k,"Caractere")==0){
          strcpy(k,"%c ");
        }
}
/**************************************************** FONCTION ET PROCEDURE*****************************************************************/
fonction *Creationfon(char *s){
  fonction *p;
  p=(fonction *)malloc(sizeof(fonction));
  
  strcpy(p->name,s);

  p->next=NULL;
  return p;
}
void fonctionTest(int proc,int arg,char *s,char *type,char t[][16]){
  if (isToken(s,t) == -1){
    yyerror("Declaration d'une vfonction avec un nom de token\n");
  }
  if (isDeclaredfon(s) == -1){
    yyerror("Declaration de deux fonction avec le meme nom\n");
    
  }
  
  Insertfonction(s,arg,type,proc);

}
////////////////////////////////////////////////////////////////////
void Insertfonction(char *s,int arg,char *type,int proc){
  fonction *new;
  if(conteurfonction==0){
      basefonction=Creationfon(s);
      
      sommetfonction=basefonction;
      
  } else {
      new=Creationfon(s);
      
      sommetfonction->next=new;
      
      sommetfonction =sommetfonction->next;
  }
  sommetfonction->arg=arg;
  sommetfonction->conteur=conteurfonction;
  conteurfonction++;
  strcpy(sommetfonction->type,type);
  sommetfonction->proc=proc;
  
  
}
////////////////////////////////////////////////////////////////:
int isDeclaredfon(char *s){
  if (Chercherfon(s) == 0)
      return -1;
  return 0;
}
///////////////////////////////////////////////////////////////////
int Chercherfon(char *s){
     int l=1;fonction *p;
     p=basefonction;
     while(p!=NULL){
      if(strcmp(s,p->name)==0){
        l=0;
        break;
      }
      p=p->next;
     }

     return l;
}
//////////////////////////////////////////////////////////////:
fonction *CHERCHEFON(char *s){
    int l=1;fonction *p;
     p=basefonction;
     while(p!=NULL){
      if(strcmp(s,p->name)==0){
        l=0;
        break;
      }
      p=p->next;
     }
     
     return p;
}
/**************************************************** VARIABLE*****************************************************************/
///////////////////////////////////////////////////////////////////////
void dicolocal(){
  
  if(local==0){
  base=sommet;
  conteurbase=conteur;
  local=1;}
  
}
///////////////////////////////////////////////////////////////////////
void dicoglobal(){
  
  vars *p,*q;
  int i=0;  
  
  sommet=first;
  do{
    sommet=sommet->next;
    
  }while(sommet->conteur<base->conteur-1);
  p=sommet->next;
  while(p!=NULL){
    q=p->next;
    
    free(p);
    p=q;
  }
  base=first;
  conteur=conteurbase;
  
}
///////////////////////////////////////////////////////////////////////
vars *Creation(char *s){
  vars *p;
  p=(vars *)malloc(sizeof(vars));
  
  strcpy(p->identif,s);
  p->checkval=0;
  p->lignex=0;
  p->colonney=0;
  p->next=NULL;
  return p;
}
///////////////////////////////////////////////////////////////////////
void Insertvar(char *s,int tab){
  vars *new;
  if(conteur==0){
      first=Creation(s);
      base=first;
      sommet=base;
      
  } else {
      new=Creation(s);
      
      sommet->next=new;
      
      sommet =sommet->next;
  }
  
  sommet->conteur=conteur;
  conteur++;
  sommet->ligne=lineNumber;
  sommet->tab=tab;
  
}
///////////////////////////////////////////////////////////////////////
void affect_indix(char *s,int a,int b){
  vars *p;
  p=CHERCHE(s);
  p->lignex=a;
  p->colonney=b;   
     
}
///////////////////////////////////////////////////////////////////////
vars *CHERCHE(char *s){
    int l=1;vars *p;
     p=base;
     while(p!=NULL){
      if(strcmp(s,p->identif)==0){
        l=0;
        break;
      }
      p=p->next;
     }
     if(l==1){
       p=first;
       while(p->conteur<base->conteur-1){
          if(strcmp(s,p->identif)==0){
            l=0;
            break;
           }
           p=p->next;
       }
     }
     return p;
}
///////////////////////////////////////////////////////////////////////
int Chercher(char *s){
     int l=1,i=0;vars *p;
     p=base;
     while(p!=NULL){
      if(strcmp(s,p->identif)==0){
        l=0;
        break;
      }
      p=p->next;
     }

     return l;
}

///////////////////////////////////////////////////////////////////////

void affect_type_fun(int tab,char s[31],char type[20]){
  identifTest(tab,s,tokens);
  strcpy(sommet->type,type);
  
}
///////////////////////////////////////////////////////////////////////
void affect_type(int a,char s[20]){
     vars *p;
     
     p=base;
     
     while(p!=NULL && p->ligne<=lineNumber){
      if(p->ligne==lineNumber){
        strcpy(p->type,s);
        p->cnst=a;
        char d[20];
        strcpy(d,s);
          returntype(d);
          if(p->lignex==0 && p->colonney==0 && p->cnst==0)sprintf(instruc[continst++],"%s %s ;\n",d,p->identif);
          if(p->lignex==0 && p->colonney==0 && p->cnst==1)sprintf(instruc[continst++],"const %s %s=%s ;\n",d,p->identif,ex2);
          if(p->lignex!=0 && p->colonney==0)sprintf(instruc[continst++],"%s %s[%d] ;\n",d,p->identif,p->lignex);
          if(p->lignex!=0 && p->colonney!=0)sprintf(instruc[continst++],"%s %s[%d][%d] ;\n",d,p->identif,p->lignex,p->colonney);
        
        
      }
      p=p->next;
     }
}
///////////////////////////////////////////////////////////////////////
int isToken(char *s,char t[][16]){
  int i;
  for(i=0;i<38;i++)
    if (strcmp(s,t[i]) == 0)
      return -1;
  return 0;
}
///////////////////////////////////////////////////////////////////////
int isDeclared(char *s){
  if (Chercher(s) == 0)
      return -1;
  return 0;
}
///////////////////////////////////////////////////////////////////////
int cherche(char *s){  
     int l=1,i;vars *p;
     p=base;
     i=p->conteur;
    
     while(i++<conteur){
      if(strcmp(s,p->identif)==0){
        l=0;
        break;
      }
      p=p->next;
     }
     if(l==1){
       p=first;
       while(p->conteur<base->conteur){
          if(strcmp(s,p->identif)==0){
            l=0;
            break;
           }
           p=p->next;
       }
     }
     return l;
}
///////////////////////////////////////////////////////////////////////
int isDeclared2(char *s){
    if(cherche(s)==0)
       return -1;
    return 0;
}
///////////////////////////////////////////////////////////////////////
void isUsable(char *s){
    if (isDeclared2(s) == 0){
      yyerror("Vous avez utilisée une variable non déclarée\n");
      
    }
}
///////////////////////////////////////////////////////////////////////
void identifTest(int tab,char *s,char t[][16]){
  if (isToken(s,t) == -1){
    yyerror("Déclaration d'une variable avec un nom de token\n");
    
  }
  if (isDeclared(s) == -1){
    if(firstelement=1){
      firstelement=0;
    }else{
    yyerror("Declaration de deux variables avec le meme nom\n");}
    
  }
  Insertvar(s,tab);
}
//////////////////////////////////////////////////////////////////////////

void yyerror( const char * msg){
    printf("line %d : %s", lineNumber, msg);
    exit(-1);
}
void affiche(int a,int b){
  int i;
  for(i=b;i<a;i++){
        fprintf(file,"%s",instruc[i]);
  }
  
}
int main(int argc,char ** argv){
    if(argc>1) yyin=fopen(argv[1],"r"); // check result !!!
    lineNumber=1;
    int i;
    if(!yyparse()){
      
      
      fclose(file);
      printf("Expression correct\n");
    }
      
  return(0);
}
