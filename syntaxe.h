
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 52 "syntaxe.y"

char var1[255];
int entier;
float reel;



/* Line 1676 of yacc.c  */
#line 134 "syntaxe.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


