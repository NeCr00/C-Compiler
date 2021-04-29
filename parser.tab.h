/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PROGRAM = 258,
    IDENTIFIER = 259,
    IF = 260,
    FOR = 261,
    FUNCTION = 262,
    ELSEIF = 263,
    ELSE = 264,
    NEWLINE = 265,
    THEN = 266,
    ENDIF = 267,
    CHAR = 268,
    INTEGER = 269,
    VARS = 270,
    ENDFUNCTION = 271,
    RETURN = 272,
    STARTMAIN = 273,
    ENDMAIN = 274,
    WHILE = 275,
    ENDWHILE = 276,
    TO = 277,
    ENDFOR = 278,
    AND = 279,
    OR = 280,
    SWITCH = 281,
    CASE = 282,
    DEFAULT = 283,
    PRINT = 284,
    BREAK = 285,
    COL = 286,
    COMMA = 287,
    COLON = 288,
    EQUAL = 289,
    LPAR = 290,
    RPAR = 291,
    LSBRA = 292,
    RSBRA = 293,
    LBRA = 294,
    RBRA = 295,
    MINUS = 296,
    PLUS = 297,
    PERCENT = 298,
    LESS_THAN_OP = 299,
    GREATER_THAN_OP = 300,
    OR_SIGN = 301,
    STAR = 302,
    SLASH = 303,
    LE_OP = 304,
    GE_OP = 305,
    EQ_OP = 306,
    NE_OP = 307,
    APOSTROPHE = 308,
    QUOTATION = 309,
    CHARACTER = 310,
    DECINTEGER = 311,
    POINTFLOAT = 312,
    FLOAT = 313,
    INTPART = 314,
    SHORTSTRING = 315,
    STEP = 316,
    ENDSWITCH = 317,
    STRUCT = 318,
    ENDSTRUCT = 319,
    TYPEDEF = 320
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
