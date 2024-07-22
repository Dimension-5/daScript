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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         DAS_YYSTYPE
#define YYLTYPE         DAS_YYLTYPE
/* Substitute the variable and function names.  */
#define yyparse         das_yyparse
#define yylex           das_yylex
#define yyerror         das_yyerror
#define yydebug         das_yydebug
#define yynerrs         das_yynerrs

/* First part of user prologue.  */

    #include "daScript/misc/platform.h"
    #include "daScript/simulate/debug_info.h"
    #include "daScript/ast/compilation_errors.h"

    #ifdef _MSC_VER
    #pragma warning(disable:4262)
    #pragma warning(disable:4127)
    #pragma warning(disable:4702)
    #endif

    using namespace das;

    union DAS_YYSTYPE;
    struct DAS_YYLTYPE;

    #define YY_NO_UNISTD_H
    #include "lex.yy.h"

    void das_yyerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error );
    void das_yyfatalerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error, CompilationError cerr );
    int yylex ( DAS_YYSTYPE *lvalp, DAS_YYLTYPE *llocp, yyscan_t scanner );
    void yybegin ( const char * str );

    void das_yybegin_reader ( yyscan_t yyscanner );
    void das_yyend_reader ( yyscan_t yyscanner );
    void das_accept_sequence ( yyscan_t yyscanner, const char * seq, size_t seqLen, int lineNo, FileInfo * info );

    namespace das { class Module; }
    void das_collect_keywords ( das::Module * mod, yyscan_t yyscanner );

    #undef yyextra
    #define yyextra (*((das::DasParserState **)(scanner)))


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

#include "ds_parser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LEXER_ERROR = 3,                /* "lexer error"  */
  YYSYMBOL_DAS_STRUCT = 4,                 /* "struct"  */
  YYSYMBOL_DAS_CLASS = 5,                  /* "class"  */
  YYSYMBOL_DAS_LET = 6,                    /* "let"  */
  YYSYMBOL_DAS_DEF = 7,                    /* "def"  */
  YYSYMBOL_DAS_WHILE = 8,                  /* "while"  */
  YYSYMBOL_DAS_IF = 9,                     /* "if"  */
  YYSYMBOL_DAS_STATIC_IF = 10,             /* "static_if"  */
  YYSYMBOL_DAS_ELSE = 11,                  /* "else"  */
  YYSYMBOL_DAS_FOR = 12,                   /* "for"  */
  YYSYMBOL_DAS_CATCH = 13,                 /* "recover"  */
  YYSYMBOL_DAS_TRUE = 14,                  /* "true"  */
  YYSYMBOL_DAS_FALSE = 15,                 /* "false"  */
  YYSYMBOL_DAS_NEWT = 16,                  /* "new"  */
  YYSYMBOL_DAS_TYPEINFO = 17,              /* "typeinfo"  */
  YYSYMBOL_DAS_TYPE = 18,                  /* "type"  */
  YYSYMBOL_DAS_IN = 19,                    /* "in"  */
  YYSYMBOL_DAS_IS = 20,                    /* "is"  */
  YYSYMBOL_DAS_AS = 21,                    /* "as"  */
  YYSYMBOL_DAS_ELIF = 22,                  /* "elif"  */
  YYSYMBOL_DAS_STATIC_ELIF = 23,           /* "static_elif"  */
  YYSYMBOL_DAS_ARRAY = 24,                 /* "array"  */
  YYSYMBOL_DAS_RETURN = 25,                /* "return"  */
  YYSYMBOL_DAS_NULL = 26,                  /* "null"  */
  YYSYMBOL_DAS_BREAK = 27,                 /* "break"  */
  YYSYMBOL_DAS_TRY = 28,                   /* "try"  */
  YYSYMBOL_DAS_OPTIONS = 29,               /* "options"  */
  YYSYMBOL_DAS_TABLE = 30,                 /* "table"  */
  YYSYMBOL_DAS_EXPECT = 31,                /* "expect"  */
  YYSYMBOL_DAS_CONST = 32,                 /* "const"  */
  YYSYMBOL_DAS_REQUIRE = 33,               /* "require"  */
  YYSYMBOL_DAS_OPERATOR = 34,              /* "operator"  */
  YYSYMBOL_DAS_ENUM = 35,                  /* "enum"  */
  YYSYMBOL_DAS_FINALLY = 36,               /* "finally"  */
  YYSYMBOL_DAS_DELETE = 37,                /* "delete"  */
  YYSYMBOL_DAS_DEREF = 38,                 /* "deref"  */
  YYSYMBOL_DAS_TYPEDEF = 39,               /* "typedef"  */
  YYSYMBOL_DAS_TYPEDECL = 40,              /* "typedecl"  */
  YYSYMBOL_DAS_WITH = 41,                  /* "with"  */
  YYSYMBOL_DAS_AKA = 42,                   /* "aka"  */
  YYSYMBOL_DAS_ASSUME = 43,                /* "assume"  */
  YYSYMBOL_DAS_CAST = 44,                  /* "cast"  */
  YYSYMBOL_DAS_OVERRIDE = 45,              /* "override"  */
  YYSYMBOL_DAS_ABSTRACT = 46,              /* "abstract"  */
  YYSYMBOL_DAS_UPCAST = 47,                /* "upcast"  */
  YYSYMBOL_DAS_ITERATOR = 48,              /* "iterator"  */
  YYSYMBOL_DAS_VAR = 49,                   /* "var"  */
  YYSYMBOL_DAS_ADDR = 50,                  /* "addr"  */
  YYSYMBOL_DAS_CONTINUE = 51,              /* "continue"  */
  YYSYMBOL_DAS_WHERE = 52,                 /* "where"  */
  YYSYMBOL_DAS_PASS = 53,                  /* "pass"  */
  YYSYMBOL_DAS_REINTERPRET = 54,           /* "reinterpret"  */
  YYSYMBOL_DAS_MODULE = 55,                /* "module"  */
  YYSYMBOL_DAS_PUBLIC = 56,                /* "public"  */
  YYSYMBOL_DAS_LABEL = 57,                 /* "label"  */
  YYSYMBOL_DAS_GOTO = 58,                  /* "goto"  */
  YYSYMBOL_DAS_IMPLICIT = 59,              /* "implicit"  */
  YYSYMBOL_DAS_EXPLICIT = 60,              /* "explicit"  */
  YYSYMBOL_DAS_SHARED = 61,                /* "shared"  */
  YYSYMBOL_DAS_PRIVATE = 62,               /* "private"  */
  YYSYMBOL_DAS_SMART_PTR = 63,             /* "smart_ptr"  */
  YYSYMBOL_DAS_UNSAFE = 64,                /* "unsafe"  */
  YYSYMBOL_DAS_INSCOPE = 65,               /* "inscope"  */
  YYSYMBOL_DAS_STATIC = 66,                /* "static"  */
  YYSYMBOL_DAS_FIXED_ARRAY = 67,           /* "fixed_array"  */
  YYSYMBOL_DAS_TBOOL = 68,                 /* "bool"  */
  YYSYMBOL_DAS_TVOID = 69,                 /* "void"  */
  YYSYMBOL_DAS_TSTRING = 70,               /* "string"  */
  YYSYMBOL_DAS_TAUTO = 71,                 /* "auto"  */
  YYSYMBOL_DAS_TINT = 72,                  /* "int"  */
  YYSYMBOL_DAS_TINT2 = 73,                 /* "int2"  */
  YYSYMBOL_DAS_TINT3 = 74,                 /* "int3"  */
  YYSYMBOL_DAS_TINT4 = 75,                 /* "int4"  */
  YYSYMBOL_DAS_TUINT = 76,                 /* "uint"  */
  YYSYMBOL_DAS_TBITFIELD = 77,             /* "bitfield"  */
  YYSYMBOL_DAS_TUINT2 = 78,                /* "uint2"  */
  YYSYMBOL_DAS_TUINT3 = 79,                /* "uint3"  */
  YYSYMBOL_DAS_TUINT4 = 80,                /* "uint4"  */
  YYSYMBOL_DAS_TFLOAT = 81,                /* "float"  */
  YYSYMBOL_DAS_TFLOAT2 = 82,               /* "float2"  */
  YYSYMBOL_DAS_TFLOAT3 = 83,               /* "float3"  */
  YYSYMBOL_DAS_TFLOAT4 = 84,               /* "float4"  */
  YYSYMBOL_DAS_TRANGE = 85,                /* "range"  */
  YYSYMBOL_DAS_TURANGE = 86,               /* "urange"  */
  YYSYMBOL_DAS_TRANGE64 = 87,              /* "range64"  */
  YYSYMBOL_DAS_TURANGE64 = 88,             /* "urange64"  */
  YYSYMBOL_DAS_TBLOCK = 89,                /* "block"  */
  YYSYMBOL_DAS_TINT64 = 90,                /* "int64"  */
  YYSYMBOL_DAS_TUINT64 = 91,               /* "uint64"  */
  YYSYMBOL_DAS_TDOUBLE = 92,               /* "double"  */
  YYSYMBOL_DAS_TFUNCTION = 93,             /* "function"  */
  YYSYMBOL_DAS_TLAMBDA = 94,               /* "lambda"  */
  YYSYMBOL_DAS_TINT8 = 95,                 /* "int8"  */
  YYSYMBOL_DAS_TUINT8 = 96,                /* "uint8"  */
  YYSYMBOL_DAS_TINT16 = 97,                /* "int16"  */
  YYSYMBOL_DAS_TUINT16 = 98,               /* "uint16"  */
  YYSYMBOL_DAS_TTUPLE = 99,                /* "tuple"  */
  YYSYMBOL_DAS_TVARIANT = 100,             /* "variant"  */
  YYSYMBOL_DAS_GENERATOR = 101,            /* "generator"  */
  YYSYMBOL_DAS_YIELD = 102,                /* "yield"  */
  YYSYMBOL_DAS_SEALED = 103,               /* "sealed"  */
  YYSYMBOL_ADDEQU = 104,                   /* "+="  */
  YYSYMBOL_SUBEQU = 105,                   /* "-="  */
  YYSYMBOL_DIVEQU = 106,                   /* "/="  */
  YYSYMBOL_MULEQU = 107,                   /* "*="  */
  YYSYMBOL_MODEQU = 108,                   /* "%="  */
  YYSYMBOL_ANDEQU = 109,                   /* "&="  */
  YYSYMBOL_OREQU = 110,                    /* "|="  */
  YYSYMBOL_XOREQU = 111,                   /* "^="  */
  YYSYMBOL_SHL = 112,                      /* "<<"  */
  YYSYMBOL_SHR = 113,                      /* ">>"  */
  YYSYMBOL_ADDADD = 114,                   /* "++"  */
  YYSYMBOL_SUBSUB = 115,                   /* "--"  */
  YYSYMBOL_LEEQU = 116,                    /* "<="  */
  YYSYMBOL_SHLEQU = 117,                   /* "<<="  */
  YYSYMBOL_SHREQU = 118,                   /* ">>="  */
  YYSYMBOL_GREQU = 119,                    /* ">="  */
  YYSYMBOL_EQUEQU = 120,                   /* "=="  */
  YYSYMBOL_NOTEQU = 121,                   /* "!="  */
  YYSYMBOL_RARROW = 122,                   /* "->"  */
  YYSYMBOL_LARROW = 123,                   /* "<-"  */
  YYSYMBOL_QQ = 124,                       /* "??"  */
  YYSYMBOL_QDOT = 125,                     /* "?."  */
  YYSYMBOL_QBRA = 126,                     /* "?["  */
  YYSYMBOL_LPIPE = 127,                    /* "<|"  */
  YYSYMBOL_LBPIPE = 128,                   /* " <|"  */
  YYSYMBOL_LLPIPE = 129,                   /* "$ <|"  */
  YYSYMBOL_LAPIPE = 130,                   /* "@ <|"  */
  YYSYMBOL_LFPIPE = 131,                   /* "@@ <|"  */
  YYSYMBOL_RPIPE = 132,                    /* "|>"  */
  YYSYMBOL_CLONEEQU = 133,                 /* ":="  */
  YYSYMBOL_ROTL = 134,                     /* "<<<"  */
  YYSYMBOL_ROTR = 135,                     /* ">>>"  */
  YYSYMBOL_ROTLEQU = 136,                  /* "<<<="  */
  YYSYMBOL_ROTREQU = 137,                  /* ">>>="  */
  YYSYMBOL_MAPTO = 138,                    /* "=>"  */
  YYSYMBOL_COLCOL = 139,                   /* "::"  */
  YYSYMBOL_ANDAND = 140,                   /* "&&"  */
  YYSYMBOL_OROR = 141,                     /* "||"  */
  YYSYMBOL_XORXOR = 142,                   /* "^^"  */
  YYSYMBOL_ANDANDEQU = 143,                /* "&&="  */
  YYSYMBOL_OROREQU = 144,                  /* "||="  */
  YYSYMBOL_XORXOREQU = 145,                /* "^^="  */
  YYSYMBOL_DOTDOT = 146,                   /* ".."  */
  YYSYMBOL_MTAG_E = 147,                   /* "$$"  */
  YYSYMBOL_MTAG_I = 148,                   /* "$i"  */
  YYSYMBOL_MTAG_V = 149,                   /* "$v"  */
  YYSYMBOL_MTAG_B = 150,                   /* "$b"  */
  YYSYMBOL_MTAG_A = 151,                   /* "$a"  */
  YYSYMBOL_MTAG_T = 152,                   /* "$t"  */
  YYSYMBOL_MTAG_C = 153,                   /* "$c"  */
  YYSYMBOL_MTAG_F = 154,                   /* "$f"  */
  YYSYMBOL_MTAG_DOTDOTDOT = 155,           /* "..."  */
  YYSYMBOL_BRABRAB = 156,                  /* "[["  */
  YYSYMBOL_BRACBRB = 157,                  /* "[{"  */
  YYSYMBOL_CBRCBRB = 158,                  /* "{{"  */
  YYSYMBOL_INTEGER = 159,                  /* "integer constant"  */
  YYSYMBOL_LONG_INTEGER = 160,             /* "long integer constant"  */
  YYSYMBOL_UNSIGNED_INTEGER = 161,         /* "unsigned integer constant"  */
  YYSYMBOL_UNSIGNED_LONG_INTEGER = 162,    /* "unsigned long integer constant"  */
  YYSYMBOL_UNSIGNED_INT8 = 163,            /* "unsigned int8 constant"  */
  YYSYMBOL_FLOAT = 164,                    /* "floating point constant"  */
  YYSYMBOL_DOUBLE = 165,                   /* "double constant"  */
  YYSYMBOL_NAME = 166,                     /* "name"  */
  YYSYMBOL_KEYWORD = 167,                  /* "keyword"  */
  YYSYMBOL_TYPE_FUNCTION = 168,            /* "type function"  */
  YYSYMBOL_BEGIN_STRING = 169,             /* "start of the string"  */
  YYSYMBOL_STRING_CHARACTER = 170,         /* STRING_CHARACTER  */
  YYSYMBOL_STRING_CHARACTER_ESC = 171,     /* STRING_CHARACTER_ESC  */
  YYSYMBOL_END_STRING = 172,               /* "end of the string"  */
  YYSYMBOL_BEGIN_STRING_EXPR = 173,        /* "{"  */
  YYSYMBOL_END_STRING_EXPR = 174,          /* "}"  */
  YYSYMBOL_END_OF_READ = 175,              /* "end of failed eader macro"  */
  YYSYMBOL_SEMICOLON_CUR_CUR = 176,        /* ";}}"  */
  YYSYMBOL_SEMICOLON_CUR_SQR = 177,        /* ";}]"  */
  YYSYMBOL_SEMICOLON_SQR_SQR = 178,        /* ";]]"  */
  YYSYMBOL_COMMA_SQR_SQR = 179,            /* ",]]"  */
  YYSYMBOL_COMMA_CUR_SQR = 180,            /* ",}]"  */
  YYSYMBOL_181_ = 181,                     /* ','  */
  YYSYMBOL_182_ = 182,                     /* '='  */
  YYSYMBOL_183_ = 183,                     /* '?'  */
  YYSYMBOL_184_ = 184,                     /* ':'  */
  YYSYMBOL_185_ = 185,                     /* '|'  */
  YYSYMBOL_186_ = 186,                     /* '^'  */
  YYSYMBOL_187_ = 187,                     /* '&'  */
  YYSYMBOL_188_ = 188,                     /* '<'  */
  YYSYMBOL_189_ = 189,                     /* '>'  */
  YYSYMBOL_190_ = 190,                     /* '-'  */
  YYSYMBOL_191_ = 191,                     /* '+'  */
  YYSYMBOL_192_ = 192,                     /* '*'  */
  YYSYMBOL_193_ = 193,                     /* '/'  */
  YYSYMBOL_194_ = 194,                     /* '%'  */
  YYSYMBOL_UNARY_MINUS = 195,              /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 196,               /* UNARY_PLUS  */
  YYSYMBOL_197_ = 197,                     /* '~'  */
  YYSYMBOL_198_ = 198,                     /* '!'  */
  YYSYMBOL_PRE_INC = 199,                  /* PRE_INC  */
  YYSYMBOL_PRE_DEC = 200,                  /* PRE_DEC  */
  YYSYMBOL_POST_INC = 201,                 /* POST_INC  */
  YYSYMBOL_POST_DEC = 202,                 /* POST_DEC  */
  YYSYMBOL_DEREF = 203,                    /* DEREF  */
  YYSYMBOL_204_ = 204,                     /* '.'  */
  YYSYMBOL_205_ = 205,                     /* '['  */
  YYSYMBOL_206_ = 206,                     /* ']'  */
  YYSYMBOL_207_ = 207,                     /* '('  */
  YYSYMBOL_208_ = 208,                     /* ')'  */
  YYSYMBOL_209_ = 209,                     /* '$'  */
  YYSYMBOL_210_ = 210,                     /* '@'  */
  YYSYMBOL_211_ = 211,                     /* ';'  */
  YYSYMBOL_212_ = 212,                     /* '{'  */
  YYSYMBOL_213_ = 213,                     /* '}'  */
  YYSYMBOL_214_ = 214,                     /* '#'  */
  YYSYMBOL_YYACCEPT = 215,                 /* $accept  */
  YYSYMBOL_program = 216,                  /* program  */
  YYSYMBOL_top_level_reader_macro = 217,   /* top_level_reader_macro  */
  YYSYMBOL_optional_public_or_private_module = 218, /* optional_public_or_private_module  */
  YYSYMBOL_module_name = 219,              /* module_name  */
  YYSYMBOL_module_declaration = 220,       /* module_declaration  */
  YYSYMBOL_character_sequence = 221,       /* character_sequence  */
  YYSYMBOL_string_constant = 222,          /* string_constant  */
  YYSYMBOL_string_builder_body = 223,      /* string_builder_body  */
  YYSYMBOL_string_builder = 224,           /* string_builder  */
  YYSYMBOL_reader_character_sequence = 225, /* reader_character_sequence  */
  YYSYMBOL_expr_reader = 226,              /* expr_reader  */
  YYSYMBOL_227_1 = 227,                    /* $@1  */
  YYSYMBOL_options_declaration = 228,      /* options_declaration  */
  YYSYMBOL_require_declaration = 229,      /* require_declaration  */
  YYSYMBOL_keyword_or_name = 230,          /* keyword_or_name  */
  YYSYMBOL_require_module_name = 231,      /* require_module_name  */
  YYSYMBOL_require_module = 232,           /* require_module  */
  YYSYMBOL_is_public_module = 233,         /* is_public_module  */
  YYSYMBOL_expect_declaration = 234,       /* expect_declaration  */
  YYSYMBOL_expect_list = 235,              /* expect_list  */
  YYSYMBOL_expect_error = 236,             /* expect_error  */
  YYSYMBOL_expression_label = 237,         /* expression_label  */
  YYSYMBOL_expression_goto = 238,          /* expression_goto  */
  YYSYMBOL_elif_or_static_elif = 239,      /* elif_or_static_elif  */
  YYSYMBOL_expression_else = 240,          /* expression_else  */
  YYSYMBOL_if_or_static_if = 241,          /* if_or_static_if  */
  YYSYMBOL_expression_else_one_liner = 242, /* expression_else_one_liner  */
  YYSYMBOL_243_2 = 243,                    /* $@2  */
  YYSYMBOL_expression_if_one_liner = 244,  /* expression_if_one_liner  */
  YYSYMBOL_expression_if_then_else = 245,  /* expression_if_then_else  */
  YYSYMBOL_246_3 = 246,                    /* $@3  */
  YYSYMBOL_expression_for_loop = 247,      /* expression_for_loop  */
  YYSYMBOL_expression_unsafe = 248,        /* expression_unsafe  */
  YYSYMBOL_expression_while_loop = 249,    /* expression_while_loop  */
  YYSYMBOL_expression_with = 250,          /* expression_with  */
  YYSYMBOL_expression_with_alias = 251,    /* expression_with_alias  */
  YYSYMBOL_252_4 = 252,                    /* $@4  */
  YYSYMBOL_annotation_argument_value = 253, /* annotation_argument_value  */
  YYSYMBOL_annotation_argument_value_list = 254, /* annotation_argument_value_list  */
  YYSYMBOL_annotation_argument_name = 255, /* annotation_argument_name  */
  YYSYMBOL_annotation_argument = 256,      /* annotation_argument  */
  YYSYMBOL_annotation_argument_list = 257, /* annotation_argument_list  */
  YYSYMBOL_annotation_declaration_name = 258, /* annotation_declaration_name  */
  YYSYMBOL_annotation_declaration_basic = 259, /* annotation_declaration_basic  */
  YYSYMBOL_annotation_declaration = 260,   /* annotation_declaration  */
  YYSYMBOL_annotation_list = 261,          /* annotation_list  */
  YYSYMBOL_optional_annotation_list = 262, /* optional_annotation_list  */
  YYSYMBOL_optional_function_argument_list = 263, /* optional_function_argument_list  */
  YYSYMBOL_optional_function_type = 264,   /* optional_function_type  */
  YYSYMBOL_function_name = 265,            /* function_name  */
  YYSYMBOL_global_function_declaration = 266, /* global_function_declaration  */
  YYSYMBOL_optional_public_or_private_function = 267, /* optional_public_or_private_function  */
  YYSYMBOL_function_declaration_header = 268, /* function_declaration_header  */
  YYSYMBOL_function_declaration = 269,     /* function_declaration  */
  YYSYMBOL_270_5 = 270,                    /* $@5  */
  YYSYMBOL_expression_block = 271,         /* expression_block  */
  YYSYMBOL_expression_any = 272,           /* expression_any  */
  YYSYMBOL_expressions = 273,              /* expressions  */
  YYSYMBOL_expr_keyword = 274,             /* expr_keyword  */
  YYSYMBOL_optional_expr_list = 275,       /* optional_expr_list  */
  YYSYMBOL_expression_keyword = 276,       /* expression_keyword  */
  YYSYMBOL_277_6 = 277,                    /* $@6  */
  YYSYMBOL_278_7 = 278,                    /* $@7  */
  YYSYMBOL_279_8 = 279,                    /* $@8  */
  YYSYMBOL_280_9 = 280,                    /* $@9  */
  YYSYMBOL_expr_pipe = 281,                /* expr_pipe  */
  YYSYMBOL_name_in_namespace = 282,        /* name_in_namespace  */
  YYSYMBOL_expression_delete = 283,        /* expression_delete  */
  YYSYMBOL_new_type_declaration = 284,     /* new_type_declaration  */
  YYSYMBOL_285_10 = 285,                   /* $@10  */
  YYSYMBOL_286_11 = 286,                   /* $@11  */
  YYSYMBOL_expr_new = 287,                 /* expr_new  */
  YYSYMBOL_expression_break = 288,         /* expression_break  */
  YYSYMBOL_expression_continue = 289,      /* expression_continue  */
  YYSYMBOL_expression_return_no_pipe = 290, /* expression_return_no_pipe  */
  YYSYMBOL_expression_return = 291,        /* expression_return  */
  YYSYMBOL_expression_yield_no_pipe = 292, /* expression_yield_no_pipe  */
  YYSYMBOL_expression_yield = 293,         /* expression_yield  */
  YYSYMBOL_expression_try_catch = 294,     /* expression_try_catch  */
  YYSYMBOL_kwd_let = 295,                  /* kwd_let  */
  YYSYMBOL_optional_in_scope = 296,        /* optional_in_scope  */
  YYSYMBOL_tuple_expansion = 297,          /* tuple_expansion  */
  YYSYMBOL_tuple_expansion_variable_declaration = 298, /* tuple_expansion_variable_declaration  */
  YYSYMBOL_expression_let = 299,           /* expression_let  */
  YYSYMBOL_expr_cast = 300,                /* expr_cast  */
  YYSYMBOL_301_12 = 301,                   /* $@12  */
  YYSYMBOL_302_13 = 302,                   /* $@13  */
  YYSYMBOL_303_14 = 303,                   /* $@14  */
  YYSYMBOL_304_15 = 304,                   /* $@15  */
  YYSYMBOL_305_16 = 305,                   /* $@16  */
  YYSYMBOL_306_17 = 306,                   /* $@17  */
  YYSYMBOL_expr_type_decl = 307,           /* expr_type_decl  */
  YYSYMBOL_308_18 = 308,                   /* $@18  */
  YYSYMBOL_309_19 = 309,                   /* $@19  */
  YYSYMBOL_expr_type_info = 310,           /* expr_type_info  */
  YYSYMBOL_expr_list = 311,                /* expr_list  */
  YYSYMBOL_block_or_simple_block = 312,    /* block_or_simple_block  */
  YYSYMBOL_block_or_lambda = 313,          /* block_or_lambda  */
  YYSYMBOL_capture_entry = 314,            /* capture_entry  */
  YYSYMBOL_capture_list = 315,             /* capture_list  */
  YYSYMBOL_optional_capture_list = 316,    /* optional_capture_list  */
  YYSYMBOL_expr_block = 317,               /* expr_block  */
  YYSYMBOL_expr_numeric_const = 318,       /* expr_numeric_const  */
  YYSYMBOL_expr_assign = 319,              /* expr_assign  */
  YYSYMBOL_expr_assign_pipe = 320,         /* expr_assign_pipe  */
  YYSYMBOL_expr_named_call = 321,          /* expr_named_call  */
  YYSYMBOL_expr_method_call = 322,         /* expr_method_call  */
  YYSYMBOL_func_addr_name = 323,           /* func_addr_name  */
  YYSYMBOL_func_addr_expr = 324,           /* func_addr_expr  */
  YYSYMBOL_325_20 = 325,                   /* $@20  */
  YYSYMBOL_326_21 = 326,                   /* $@21  */
  YYSYMBOL_327_22 = 327,                   /* $@22  */
  YYSYMBOL_328_23 = 328,                   /* $@23  */
  YYSYMBOL_expr_field = 329,               /* expr_field  */
  YYSYMBOL_330_24 = 330,                   /* $@24  */
  YYSYMBOL_331_25 = 331,                   /* $@25  */
  YYSYMBOL_expr = 332,                     /* expr  */
  YYSYMBOL_333_26 = 333,                   /* $@26  */
  YYSYMBOL_334_27 = 334,                   /* $@27  */
  YYSYMBOL_335_28 = 335,                   /* $@28  */
  YYSYMBOL_336_29 = 336,                   /* $@29  */
  YYSYMBOL_337_30 = 337,                   /* $@30  */
  YYSYMBOL_338_31 = 338,                   /* $@31  */
  YYSYMBOL_expr_mtag = 339,                /* expr_mtag  */
  YYSYMBOL_optional_field_annotation = 340, /* optional_field_annotation  */
  YYSYMBOL_optional_override = 341,        /* optional_override  */
  YYSYMBOL_optional_constant = 342,        /* optional_constant  */
  YYSYMBOL_optional_public_or_private_member_variable = 343, /* optional_public_or_private_member_variable  */
  YYSYMBOL_optional_static_member_variable = 344, /* optional_static_member_variable  */
  YYSYMBOL_structure_variable_declaration = 345, /* structure_variable_declaration  */
  YYSYMBOL_struct_variable_declaration_list = 346, /* struct_variable_declaration_list  */
  YYSYMBOL_347_32 = 347,                   /* $@32  */
  YYSYMBOL_348_33 = 348,                   /* $@33  */
  YYSYMBOL_349_34 = 349,                   /* $@34  */
  YYSYMBOL_function_argument_declaration = 350, /* function_argument_declaration  */
  YYSYMBOL_function_argument_list = 351,   /* function_argument_list  */
  YYSYMBOL_tuple_type = 352,               /* tuple_type  */
  YYSYMBOL_tuple_type_list = 353,          /* tuple_type_list  */
  YYSYMBOL_tuple_alias_type_list = 354,    /* tuple_alias_type_list  */
  YYSYMBOL_variant_type = 355,             /* variant_type  */
  YYSYMBOL_variant_type_list = 356,        /* variant_type_list  */
  YYSYMBOL_variant_alias_type_list = 357,  /* variant_alias_type_list  */
  YYSYMBOL_copy_or_move = 358,             /* copy_or_move  */
  YYSYMBOL_variable_declaration = 359,     /* variable_declaration  */
  YYSYMBOL_copy_or_move_or_clone = 360,    /* copy_or_move_or_clone  */
  YYSYMBOL_optional_ref = 361,             /* optional_ref  */
  YYSYMBOL_let_variable_name_with_pos_list = 362, /* let_variable_name_with_pos_list  */
  YYSYMBOL_let_variable_declaration = 363, /* let_variable_declaration  */
  YYSYMBOL_global_variable_declaration_list = 364, /* global_variable_declaration_list  */
  YYSYMBOL_365_35 = 365,                   /* $@35  */
  YYSYMBOL_optional_shared = 366,          /* optional_shared  */
  YYSYMBOL_optional_public_or_private_variable = 367, /* optional_public_or_private_variable  */
  YYSYMBOL_global_let = 368,               /* global_let  */
  YYSYMBOL_369_36 = 369,                   /* $@36  */
  YYSYMBOL_enum_list = 370,                /* enum_list  */
  YYSYMBOL_optional_public_or_private_alias = 371, /* optional_public_or_private_alias  */
  YYSYMBOL_single_alias = 372,             /* single_alias  */
  YYSYMBOL_373_37 = 373,                   /* $@37  */
  YYSYMBOL_alias_list = 374,               /* alias_list  */
  YYSYMBOL_alias_declaration = 375,        /* alias_declaration  */
  YYSYMBOL_376_38 = 376,                   /* $@38  */
  YYSYMBOL_optional_public_or_private_enum = 377, /* optional_public_or_private_enum  */
  YYSYMBOL_enum_name = 378,                /* enum_name  */
  YYSYMBOL_enum_declaration = 379,         /* enum_declaration  */
  YYSYMBOL_380_39 = 380,                   /* $@39  */
  YYSYMBOL_381_40 = 381,                   /* $@40  */
  YYSYMBOL_382_41 = 382,                   /* $@41  */
  YYSYMBOL_383_42 = 383,                   /* $@42  */
  YYSYMBOL_optional_structure_parent = 384, /* optional_structure_parent  */
  YYSYMBOL_optional_sealed = 385,          /* optional_sealed  */
  YYSYMBOL_structure_name = 386,           /* structure_name  */
  YYSYMBOL_class_or_struct = 387,          /* class_or_struct  */
  YYSYMBOL_optional_public_or_private_structure = 388, /* optional_public_or_private_structure  */
  YYSYMBOL_structure_declaration = 389,    /* structure_declaration  */
  YYSYMBOL_390_43 = 390,                   /* $@43  */
  YYSYMBOL_391_44 = 391,                   /* $@44  */
  YYSYMBOL_variable_name_with_pos_list = 392, /* variable_name_with_pos_list  */
  YYSYMBOL_basic_type_declaration = 393,   /* basic_type_declaration  */
  YYSYMBOL_enum_basic_type_declaration = 394, /* enum_basic_type_declaration  */
  YYSYMBOL_structure_type_declaration = 395, /* structure_type_declaration  */
  YYSYMBOL_auto_type_declaration = 396,    /* auto_type_declaration  */
  YYSYMBOL_bitfield_bits = 397,            /* bitfield_bits  */
  YYSYMBOL_bitfield_alias_bits = 398,      /* bitfield_alias_bits  */
  YYSYMBOL_bitfield_type_declaration = 399, /* bitfield_type_declaration  */
  YYSYMBOL_400_45 = 400,                   /* $@45  */
  YYSYMBOL_401_46 = 401,                   /* $@46  */
  YYSYMBOL_table_type_pair = 402,          /* table_type_pair  */
  YYSYMBOL_type_declaration_no_options = 403, /* type_declaration_no_options  */
  YYSYMBOL_404_47 = 404,                   /* $@47  */
  YYSYMBOL_405_48 = 405,                   /* $@48  */
  YYSYMBOL_406_49 = 406,                   /* $@49  */
  YYSYMBOL_407_50 = 407,                   /* $@50  */
  YYSYMBOL_408_51 = 408,                   /* $@51  */
  YYSYMBOL_409_52 = 409,                   /* $@52  */
  YYSYMBOL_410_53 = 410,                   /* $@53  */
  YYSYMBOL_411_54 = 411,                   /* $@54  */
  YYSYMBOL_412_55 = 412,                   /* $@55  */
  YYSYMBOL_413_56 = 413,                   /* $@56  */
  YYSYMBOL_414_57 = 414,                   /* $@57  */
  YYSYMBOL_415_58 = 415,                   /* $@58  */
  YYSYMBOL_416_59 = 416,                   /* $@59  */
  YYSYMBOL_417_60 = 417,                   /* $@60  */
  YYSYMBOL_418_61 = 418,                   /* $@61  */
  YYSYMBOL_419_62 = 419,                   /* $@62  */
  YYSYMBOL_420_63 = 420,                   /* $@63  */
  YYSYMBOL_421_64 = 421,                   /* $@64  */
  YYSYMBOL_422_65 = 422,                   /* $@65  */
  YYSYMBOL_423_66 = 423,                   /* $@66  */
  YYSYMBOL_424_67 = 424,                   /* $@67  */
  YYSYMBOL_425_68 = 425,                   /* $@68  */
  YYSYMBOL_426_69 = 426,                   /* $@69  */
  YYSYMBOL_427_70 = 427,                   /* $@70  */
  YYSYMBOL_428_71 = 428,                   /* $@71  */
  YYSYMBOL_429_72 = 429,                   /* $@72  */
  YYSYMBOL_type_declaration = 430,         /* type_declaration  */
  YYSYMBOL_tuple_alias_declaration = 431,  /* tuple_alias_declaration  */
  YYSYMBOL_432_73 = 432,                   /* $@73  */
  YYSYMBOL_433_74 = 433,                   /* $@74  */
  YYSYMBOL_434_75 = 434,                   /* $@75  */
  YYSYMBOL_435_76 = 435,                   /* $@76  */
  YYSYMBOL_variant_alias_declaration = 436, /* variant_alias_declaration  */
  YYSYMBOL_437_77 = 437,                   /* $@77  */
  YYSYMBOL_438_78 = 438,                   /* $@78  */
  YYSYMBOL_439_79 = 439,                   /* $@79  */
  YYSYMBOL_440_80 = 440,                   /* $@80  */
  YYSYMBOL_bitfield_alias_declaration = 441, /* bitfield_alias_declaration  */
  YYSYMBOL_442_81 = 442,                   /* $@81  */
  YYSYMBOL_443_82 = 443,                   /* $@82  */
  YYSYMBOL_444_83 = 444,                   /* $@83  */
  YYSYMBOL_445_84 = 445,                   /* $@84  */
  YYSYMBOL_make_decl = 446,                /* make_decl  */
  YYSYMBOL_make_struct_fields = 447,       /* make_struct_fields  */
  YYSYMBOL_make_struct_dim = 448,          /* make_struct_dim  */
  YYSYMBOL_optional_block = 449,           /* optional_block  */
  YYSYMBOL_optional_trailing_semicolon_cur_cur = 450, /* optional_trailing_semicolon_cur_cur  */
  YYSYMBOL_optional_trailing_semicolon_cur_sqr = 451, /* optional_trailing_semicolon_cur_sqr  */
  YYSYMBOL_optional_trailing_semicolon_sqr_sqr = 452, /* optional_trailing_semicolon_sqr_sqr  */
  YYSYMBOL_optional_trailing_delim_sqr_sqr = 453, /* optional_trailing_delim_sqr_sqr  */
  YYSYMBOL_optional_trailing_delim_cur_sqr = 454, /* optional_trailing_delim_cur_sqr  */
  YYSYMBOL_make_struct_decl = 455,         /* make_struct_decl  */
  YYSYMBOL_make_tuple = 456,               /* make_tuple  */
  YYSYMBOL_make_map_tuple = 457,           /* make_map_tuple  */
  YYSYMBOL_make_tuple_call = 458,          /* make_tuple_call  */
  YYSYMBOL_make_dim = 459,                 /* make_dim  */
  YYSYMBOL_make_dim_decl = 460,            /* make_dim_decl  */
  YYSYMBOL_461_85 = 461,                   /* $@85  */
  YYSYMBOL_462_86 = 462,                   /* $@86  */
  YYSYMBOL_463_87 = 463,                   /* $@87  */
  YYSYMBOL_464_88 = 464,                   /* $@88  */
  YYSYMBOL_make_table = 465,               /* make_table  */
  YYSYMBOL_expr_map_tuple_list = 466,      /* expr_map_tuple_list  */
  YYSYMBOL_make_table_decl = 467,          /* make_table_decl  */
  YYSYMBOL_array_comprehension_where = 468, /* array_comprehension_where  */
  YYSYMBOL_array_comprehension = 469       /* array_comprehension  */
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
         || (defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL \
             && defined DAS_YYSTYPE_IS_TRIVIAL && DAS_YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   12621

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  215
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  255
/* YYNRULES -- Number of rules.  */
#define YYNRULES  787
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1397

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   442


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   198,     2,   214,   209,   194,   187,     2,
     207,   208,   192,   191,   181,   190,   204,   193,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   184,   211,
     188,   182,   189,   183,   210,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   205,     2,   206,   186,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   212,   185,   213,   197,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   195,   196,   199,   200,
     201,   202,   203
};

#if DAS_YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   514,   514,   515,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   536,   542,   543,
     544,   548,   549,   553,   571,   572,   573,   574,   578,   582,
     587,   596,   604,   620,   625,   633,   633,   672,   699,   703,
     704,   705,   709,   712,   716,   722,   731,   734,   740,   741,
     745,   749,   750,   754,   757,   763,   769,   772,   778,   779,
     783,   784,   785,   794,   795,   799,   800,   800,   806,   807,
     808,   809,   810,   814,   820,   820,   826,   832,   840,   850,
     859,   859,   866,   867,   868,   869,   870,   871,   875,   880,
     888,   889,   890,   894,   895,   896,   897,   898,   899,   900,
     901,   907,   910,   916,   917,   918,   922,   930,   943,   946,
     954,   965,   976,   987,   990,   997,  1001,  1008,  1009,  1013,
    1014,  1015,  1019,  1022,  1029,  1033,  1034,  1035,  1036,  1037,
    1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,
    1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
    1058,  1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,  1067,
    1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,
    1078,  1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,
    1088,  1089,  1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,
    1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,
    1108,  1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,  1121,
    1143,  1144,  1145,  1149,  1155,  1155,  1172,  1176,  1187,  1188,
    1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
    1199,  1200,  1201,  1202,  1203,  1204,  1205,  1206,  1207,  1211,
    1216,  1222,  1228,  1239,  1240,  1244,  1244,  1244,  1252,  1252,
    1252,  1265,  1299,  1302,  1305,  1311,  1312,  1323,  1327,  1330,
    1338,  1338,  1338,  1341,  1347,  1350,  1353,  1357,  1363,  1367,
    1371,  1374,  1377,  1385,  1388,  1391,  1399,  1402,  1410,  1413,
    1416,  1424,  1430,  1431,  1435,  1436,  1440,  1445,  1453,  1459,
    1471,  1474,  1480,  1480,  1480,  1483,  1483,  1483,  1488,  1488,
    1488,  1496,  1496,  1496,  1502,  1512,  1523,  1538,  1541,  1547,
    1548,  1555,  1566,  1567,  1568,  1572,  1573,  1574,  1575,  1579,
    1584,  1592,  1593,  1597,  1602,  1609,  1610,  1611,  1612,  1613,
    1614,  1615,  1619,  1620,  1621,  1622,  1623,  1624,  1625,  1626,
    1627,  1628,  1629,  1630,  1631,  1632,  1633,  1634,  1635,  1636,
    1637,  1641,  1642,  1643,  1644,  1645,  1646,  1650,  1657,  1669,
    1674,  1684,  1688,  1695,  1698,  1698,  1698,  1703,  1703,  1703,
    1716,  1720,  1724,  1730,  1737,  1737,  1737,  1744,  1745,  1746,
    1747,  1748,  1749,  1750,  1751,  1752,  1753,  1754,  1755,  1756,
    1757,  1758,  1759,  1760,  1761,  1762,  1763,  1764,  1765,  1766,
    1767,  1768,  1769,  1770,  1771,  1772,  1773,  1774,  1775,  1776,
    1777,  1778,  1779,  1785,  1786,  1787,  1788,  1789,  1790,  1791,
    1792,  1793,  1794,  1795,  1796,  1797,  1801,  1805,  1808,  1811,
    1812,  1813,  1814,  1817,  1820,  1821,  1824,  1824,  1824,  1827,
    1832,  1836,  1840,  1840,  1840,  1845,  1848,  1852,  1852,  1852,
    1857,  1860,  1861,  1862,  1863,  1864,  1865,  1866,  1867,  1868,
    1870,  1874,  1875,  1880,  1884,  1885,  1886,  1887,  1888,  1889,
    1890,  1894,  1898,  1902,  1906,  1910,  1914,  1918,  1922,  1926,
    1933,  1934,  1938,  1939,  1940,  1944,  1945,  1949,  1950,  1951,
    1955,  1956,  1960,  1971,  1974,  1974,  1993,  1992,  2007,  2006,
    2019,  2028,  2034,  2039,  2049,  2050,  2054,  2057,  2066,  2067,
    2071,  2074,  2077,  2093,  2102,  2103,  2107,  2110,  2113,  2127,
    2128,  2132,  2138,  2144,  2147,  2151,  2157,  2166,  2167,  2168,
    2172,  2173,  2177,  2184,  2189,  2198,  2204,  2215,  2218,  2223,
    2228,  2236,  2247,  2250,  2250,  2270,  2271,  2275,  2276,  2277,
    2281,  2284,  2284,  2303,  2306,  2309,  2324,  2343,  2344,  2345,
    2350,  2350,  2372,  2373,  2377,  2378,  2378,  2382,  2383,  2384,
    2388,  2398,  2403,  2398,  2415,  2420,  2415,  2435,  2436,  2440,
    2441,  2445,  2451,  2452,  2456,  2457,  2458,  2462,  2467,  2462,
    2481,  2488,  2493,  2502,  2508,  2519,  2520,  2521,  2522,  2523,
    2524,  2525,  2526,  2527,  2528,  2529,  2530,  2531,  2532,  2533,
    2534,  2535,  2536,  2537,  2538,  2539,  2540,  2541,  2542,  2543,
    2544,  2545,  2549,  2550,  2551,  2552,  2553,  2554,  2558,  2569,
    2573,  2580,  2592,  2599,  2608,  2613,  2616,  2629,  2629,  2629,
    2642,  2646,  2653,  2654,  2655,  2656,  2657,  2678,  2684,  2684,
    2684,  2688,  2693,  2700,  2704,  2708,  2713,  2718,  2723,  2728,
    2732,  2736,  2741,  2745,  2749,  2754,  2754,  2754,  2760,  2767,
    2767,  2767,  2772,  2772,  2772,  2778,  2778,  2778,  2783,  2787,
    2787,  2787,  2792,  2792,  2792,  2801,  2805,  2805,  2805,  2810,
    2810,  2810,  2819,  2823,  2823,  2823,  2828,  2828,  2828,  2837,
    2837,  2837,  2843,  2843,  2843,  2852,  2855,  2866,  2882,  2882,
    2887,  2892,  2882,  2917,  2917,  2922,  2928,  2917,  2953,  2953,
    2958,  2963,  2953,  2993,  2994,  2995,  2996,  2997,  3001,  3008,
    3015,  3021,  3027,  3034,  3041,  3047,  3057,  3062,  3069,  3070,
    3075,  3076,  3080,  3081,  3085,  3086,  3090,  3091,  3092,  3096,
    3097,  3098,  3103,  3109,  3116,  3124,  3131,  3139,  3151,  3154,
    3160,  3174,  3180,  3186,  3195,  3200,  3207,  3212,  3219,  3227,
    3227,  3227,  3235,  3242,  3242,  3242,  3252,  3257,  3264,  3267,
    3273,  3282,  3290,  3298,  3311,  3312,  3316,  3319
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
  "\"end of file\"", "error", "\"invalid token\"", "\"lexer error\"",
  "\"struct\"", "\"class\"", "\"let\"", "\"def\"", "\"while\"", "\"if\"",
  "\"static_if\"", "\"else\"", "\"for\"", "\"recover\"", "\"true\"",
  "\"false\"", "\"new\"", "\"typeinfo\"", "\"type\"", "\"in\"", "\"is\"",
  "\"as\"", "\"elif\"", "\"static_elif\"", "\"array\"", "\"return\"",
  "\"null\"", "\"break\"", "\"try\"", "\"options\"", "\"table\"",
  "\"expect\"", "\"const\"", "\"require\"", "\"operator\"", "\"enum\"",
  "\"finally\"", "\"delete\"", "\"deref\"", "\"typedef\"", "\"typedecl\"",
  "\"with\"", "\"aka\"", "\"assume\"", "\"cast\"", "\"override\"",
  "\"abstract\"", "\"upcast\"", "\"iterator\"", "\"var\"", "\"addr\"",
  "\"continue\"", "\"where\"", "\"pass\"", "\"reinterpret\"", "\"module\"",
  "\"public\"", "\"label\"", "\"goto\"", "\"implicit\"", "\"explicit\"",
  "\"shared\"", "\"private\"", "\"smart_ptr\"", "\"unsafe\"",
  "\"inscope\"", "\"static\"", "\"fixed_array\"", "\"bool\"", "\"void\"",
  "\"string\"", "\"auto\"", "\"int\"", "\"int2\"", "\"int3\"", "\"int4\"",
  "\"uint\"", "\"bitfield\"", "\"uint2\"", "\"uint3\"", "\"uint4\"",
  "\"float\"", "\"float2\"", "\"float3\"", "\"float4\"", "\"range\"",
  "\"urange\"", "\"range64\"", "\"urange64\"", "\"block\"", "\"int64\"",
  "\"uint64\"", "\"double\"", "\"function\"", "\"lambda\"", "\"int8\"",
  "\"uint8\"", "\"int16\"", "\"uint16\"", "\"tuple\"", "\"variant\"",
  "\"generator\"", "\"yield\"", "\"sealed\"", "\"+=\"", "\"-=\"", "\"/=\"",
  "\"*=\"", "\"%=\"", "\"&=\"", "\"|=\"", "\"^=\"", "\"<<\"", "\">>\"",
  "\"++\"", "\"--\"", "\"<=\"", "\"<<=\"", "\">>=\"", "\">=\"", "\"==\"",
  "\"!=\"", "\"->\"", "\"<-\"", "\"??\"", "\"?.\"", "\"?[\"", "\"<|\"",
  "\" <|\"", "\"$ <|\"", "\"@ <|\"", "\"@@ <|\"", "\"|>\"", "\":=\"",
  "\"<<<\"", "\">>>\"", "\"<<<=\"", "\">>>=\"", "\"=>\"", "\"::\"",
  "\"&&\"", "\"||\"", "\"^^\"", "\"&&=\"", "\"||=\"", "\"^^=\"", "\"..\"",
  "\"$$\"", "\"$i\"", "\"$v\"", "\"$b\"", "\"$a\"", "\"$t\"", "\"$c\"",
  "\"$f\"", "\"...\"", "\"[[\"", "\"[{\"", "\"{{\"",
  "\"integer constant\"", "\"long integer constant\"",
  "\"unsigned integer constant\"", "\"unsigned long integer constant\"",
  "\"unsigned int8 constant\"", "\"floating point constant\"",
  "\"double constant\"", "\"name\"", "\"keyword\"", "\"type function\"",
  "\"start of the string\"", "STRING_CHARACTER", "STRING_CHARACTER_ESC",
  "\"end of the string\"", "\"{\"", "\"}\"",
  "\"end of failed eader macro\"", "\";}}\"", "\";}]\"", "\";]]\"",
  "\",]]\"", "\",}]\"", "','", "'='", "'?'", "':'", "'|'", "'^'", "'&'",
  "'<'", "'>'", "'-'", "'+'", "'*'", "'/'", "'%'", "UNARY_MINUS",
  "UNARY_PLUS", "'~'", "'!'", "PRE_INC", "PRE_DEC", "POST_INC", "POST_DEC",
  "DEREF", "'.'", "'['", "']'", "'('", "')'", "'$'", "'@'", "';'", "'{'",
  "'}'", "'#'", "$accept", "program", "top_level_reader_macro",
  "optional_public_or_private_module", "module_name", "module_declaration",
  "character_sequence", "string_constant", "string_builder_body",
  "string_builder", "reader_character_sequence", "expr_reader", "$@1",
  "options_declaration", "require_declaration", "keyword_or_name",
  "require_module_name", "require_module", "is_public_module",
  "expect_declaration", "expect_list", "expect_error", "expression_label",
  "expression_goto", "elif_or_static_elif", "expression_else",
  "if_or_static_if", "expression_else_one_liner", "$@2",
  "expression_if_one_liner", "expression_if_then_else", "$@3",
  "expression_for_loop", "expression_unsafe", "expression_while_loop",
  "expression_with", "expression_with_alias", "$@4",
  "annotation_argument_value", "annotation_argument_value_list",
  "annotation_argument_name", "annotation_argument",
  "annotation_argument_list", "annotation_declaration_name",
  "annotation_declaration_basic", "annotation_declaration",
  "annotation_list", "optional_annotation_list",
  "optional_function_argument_list", "optional_function_type",
  "function_name", "global_function_declaration",
  "optional_public_or_private_function", "function_declaration_header",
  "function_declaration", "$@5", "expression_block", "expression_any",
  "expressions", "expr_keyword", "optional_expr_list",
  "expression_keyword", "$@6", "$@7", "$@8", "$@9", "expr_pipe",
  "name_in_namespace", "expression_delete", "new_type_declaration", "$@10",
  "$@11", "expr_new", "expression_break", "expression_continue",
  "expression_return_no_pipe", "expression_return",
  "expression_yield_no_pipe", "expression_yield", "expression_try_catch",
  "kwd_let", "optional_in_scope", "tuple_expansion",
  "tuple_expansion_variable_declaration", "expression_let", "expr_cast",
  "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "expr_type_decl", "$@18",
  "$@19", "expr_type_info", "expr_list", "block_or_simple_block",
  "block_or_lambda", "capture_entry", "capture_list",
  "optional_capture_list", "expr_block", "expr_numeric_const",
  "expr_assign", "expr_assign_pipe", "expr_named_call", "expr_method_call",
  "func_addr_name", "func_addr_expr", "$@20", "$@21", "$@22", "$@23",
  "expr_field", "$@24", "$@25", "expr", "$@26", "$@27", "$@28", "$@29",
  "$@30", "$@31", "expr_mtag", "optional_field_annotation",
  "optional_override", "optional_constant",
  "optional_public_or_private_member_variable",
  "optional_static_member_variable", "structure_variable_declaration",
  "struct_variable_declaration_list", "$@32", "$@33", "$@34",
  "function_argument_declaration", "function_argument_list", "tuple_type",
  "tuple_type_list", "tuple_alias_type_list", "variant_type",
  "variant_type_list", "variant_alias_type_list", "copy_or_move",
  "variable_declaration", "copy_or_move_or_clone", "optional_ref",
  "let_variable_name_with_pos_list", "let_variable_declaration",
  "global_variable_declaration_list", "$@35", "optional_shared",
  "optional_public_or_private_variable", "global_let", "$@36", "enum_list",
  "optional_public_or_private_alias", "single_alias", "$@37", "alias_list",
  "alias_declaration", "$@38", "optional_public_or_private_enum",
  "enum_name", "enum_declaration", "$@39", "$@40", "$@41", "$@42",
  "optional_structure_parent", "optional_sealed", "structure_name",
  "class_or_struct", "optional_public_or_private_structure",
  "structure_declaration", "$@43", "$@44", "variable_name_with_pos_list",
  "basic_type_declaration", "enum_basic_type_declaration",
  "structure_type_declaration", "auto_type_declaration", "bitfield_bits",
  "bitfield_alias_bits", "bitfield_type_declaration", "$@45", "$@46",
  "table_type_pair", "type_declaration_no_options", "$@47", "$@48", "$@49",
  "$@50", "$@51", "$@52", "$@53", "$@54", "$@55", "$@56", "$@57", "$@58",
  "$@59", "$@60", "$@61", "$@62", "$@63", "$@64", "$@65", "$@66", "$@67",
  "$@68", "$@69", "$@70", "$@71", "$@72", "type_declaration",
  "tuple_alias_declaration", "$@73", "$@74", "$@75", "$@76",
  "variant_alias_declaration", "$@77", "$@78", "$@79", "$@80",
  "bitfield_alias_declaration", "$@81", "$@82", "$@83", "$@84",
  "make_decl", "make_struct_fields", "make_struct_dim", "optional_block",
  "optional_trailing_semicolon_cur_cur",
  "optional_trailing_semicolon_cur_sqr",
  "optional_trailing_semicolon_sqr_sqr", "optional_trailing_delim_sqr_sqr",
  "optional_trailing_delim_cur_sqr", "make_struct_decl", "make_tuple",
  "make_map_tuple", "make_tuple_call", "make_dim", "make_dim_decl", "$@85",
  "$@86", "$@87", "$@88", "make_table", "expr_map_tuple_list",
  "make_table_decl", "array_comprehension_where", "array_comprehension", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-1243)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-697)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1243,    40, -1243, -1243,    17,   -63,    86,  -106, -1243,   -99,
     460,   460,   460,   135,    93, -1243, -1243, -1243,   -70, -1243,
   -1243, -1243,   403, -1243,    92, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243,     3, -1243,    25,    36,    58,
   -1243, -1243, -1243, -1243,    86, -1243,    18, -1243,   460,   460,
   -1243, -1243,    92, -1243, -1243, -1243, -1243, -1243,    89,   123,
   -1243, -1243, -1243,    93,    93,    93,    96, -1243,   570,   203,
   -1243, -1243, -1243, -1243,   462,   518,   576, -1243,   579,    30,
      17,   255,   -63,   230,   276, -1243,   553,   553, -1243,   289,
     315,     6,   342,   580,   308,   349,   456, -1243,   474,   476,
   -1243, -1243,   -57,    17,    93,    93,    93,    93, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243,   490, -1243, -1243, -1243, -1243,
   -1243,   451, -1243, -1243, -1243, -1243, -1243,   527,    97, -1243,
   -1243, -1243, -1243,   620, -1243, -1243, -1243, -1243, -1243,   470,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,   537,
   -1243,   125, -1243,   397,   582,   570, 12455, -1243,   -68,   631,
   -1243,   584, -1243, -1243,   557, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243,   174, -1243,   556, -1243,   523,   524,   542, -1243,
   -1243, 11425, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243,   721,   722, -1243,
     550,   547,   447, -1243, -1243,   595, -1243,   555,    17,   205,
   -1243, -1243, -1243,    97, -1243,  8273, -1243, -1243, -1243,   600,
     601, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243,   603,   565, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243,   751, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,   607,   568,
   -1243, -1243,   -81,   594, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243,   567, -1243,   605,   574, -1243,   584,   218,   578,
     735,   442, -1243, -1243,   609,   613,   615,   586,   617,   621,
   -1243, -1243, -1243,   604, -1243, -1243, -1243, -1243, -1243,   622,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243,   624, -1243, -1243, -1243,   629,   633, -1243, -1243, -1243,
   -1243,   635,   638,   623,   135, -1243, -1243, -1243, -1243, -1243,
     103,   642, -1243, -1243, -1243, -1243, -1243, -1243, -1243,   662,
     657, -1243,   626, -1243,    -1, -1243,    61,  8273, -1243,  1729,
   -1243,  -123,   135, -1243, -1243,   205,   625,  7456,   668,   669,
    8273, -1243,   -25, -1243, -1243, -1243,  7456, -1243, -1243,   670,
   -1243,   381,   382,   393, -1243, -1243,  7456,   630, -1243, -1243,
   -1243,    46, -1243, -1243, -1243,    26,  4078, -1243,  7797,   -89,
    7897,   -86, -1243, -1243,  7456,   390,   634,   766, -1243,   -51,
   -1243,   503,   642, -1243,  7456, -1243, -1243,   390, -1243, -1243,
     374,   636,   650,   159,  2745, -1243, -1243,   547,   215,  4265,
     639,  7456,   679,   659,   660,   643, -1243,   640,   661,   694,
    4452,   448,   228, -1243,   647,   667,  2932,  7456,  7456,   496,
     496,   496,   654,   655,   656,   663,   666,   671, -1243,  1463,
    7619,  7456, -1243, -1243, -1243, -1243, -1243, -1243, -1243,  4639,
     676, -1243,  7456,  7456,  7456,  7456,  7456,  7456, -1243,   672,
   -1243,   830, -1243, -1243,   674,   675,  7456,   858, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,   -28,
     680, -1243,   687,   688,   695, -1243,   696, -1243, -1243,   812,
   -1243, -1243, -1243, -1243,   685, -1243, -1243,   -74, -1243, -1243,
   -1243, -1243, -1243,  7620, -1243,   701, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243,   -16, -1243,   698, -1243,    13, -1243, -1243,
     702,   691,  8653, -1243,   839,   504, -1243, -1243, -1243,  3318,
    8273,  8273,  8273,  8688,  8273,  8273,   704,   747,  8273,   550,
    8273,   550,  8273,   550,  8373,   749,  8785,  7456, -1243, -1243,
   -1243, -1243,   710, -1243, -1243, 10943, -1243,   103,   706, -1243,
     707,   -52, -1243,   711,   642,   708,   734, -1243,   712,   713,
    8882, -1243,  7456,   758, -1243,   759, -1243,  8273, -1243,  3318,
   -1243,  1237,    11, -1243,   725, -1243, -1243,   135, -1243, -1243,
    7456,  3318, -1243,   746,   800, 11315,   916,  8273,  7456,  7456,
   11786,  7456,  1237,   752, -1243, -1243,  7456, -1243, -1243,   753,
     774, 11786,  7456, -1243, -1243,  7456,  7456,  8273,  3318, -1243,
   11315,    83,    83,   726, -1243, -1243, -1243,  7456,  7456,  7456,
    7456,  7456,  7456,   390,  2142,   390,  2343, 11460, -1243,    62,
   -1243,  1237, -1243,   530,    83,    83,   -24,    83,    83,  8917,
     298,   723, -1243, -1243,  1237, -1243, -1243,  3879, -1243, -1243,
   -1243, -1243, -1243, -1243,   420,   783,   496, -1243, 12298, 12329,
    7456,  7456,  7456,  7456,  7456,  7456,  7456,  7456,  7456,  7456,
   -1243, -1243,  7456,  7456,  7456,  7456,  7456,  7456,   776,  3505,
    7456,   363,  7456,  7456,  7456,  7456,  7456,  7456,  7456,  7456,
    7456,  7456,  7456,  7456,  7456,  7456,  7456,  3692,  4826,  7456,
    7456,  7456,  7456,  7456,  7456,  7456,  7456,  7456,  7456,   110,
    7456,  5013,  -123,  7456, -1243, -1243,    93, -1243,   933,   584,
   -1243,   778, -1243,  3318, -1243,  7978,   -80,   194,   756,   -35,
   -1243,   281,   384, -1243, -1243,    32,   412,   594,   423,   594,
     472,   594, -1243,   124, -1243,   243, -1243,   738,   746, 11786,
   -1243, -1243, -1243, -1243,  8273, -1243, -1243,  8273, -1243, -1243,
   -1243,  9014, -1243,   906,   -64, -1243, 11315, -1243,  7456,  8273,
    5200,  5387,  8273,  8273,   213, -1243,   746,  7456,  7456,  7456,
     547,   682, -1243,   239, 11786,  9111, -1243, -1243,  8273,  8273,
    9146,  8273, -1243, -1243,  9243,  8273,   263,   264,   461, -1243,
   11315, -1243,  9340,  9375,  9472,  9569,  9604,  9701,    22,   496,
     744,   -26,  2544,  5574, 11557,   771,   -18,   234,   772,   101,
      23,  5761,   -18,   180,  7456, -1243,  7456,   741, -1243,  8273,
   -1243,  8273, -1243,  7456,   554, -1243,   748,   750,   409, -1243,
   -1243, -1243,   573,  7456,   449, -1243,   271,   790, -1243, -1243,
      -9,   550, -1243,   770,   754, -1243, -1243,   775,   755, -1243,
   -1243, 11786, 11786, 11786, 11786, 11786, 11786, 11786, 11786,   196,
     196,   170, 11786, 11786,   170, 12160, 12160,   757,   496,   496,
     496, 11786,    45,   761, -1243, 10978,   -62,   -62,   701, 11786,
     196,   196, 11786, 11786, 12044,   910, 12015, 11786, 11786, 11786,
   11883,   496,   496,   496, 11786, 12424, 11654,   558,  8135, 12131,
     170,   170,   304,   304,    45,    45,    45,   464,  7456,   762,
     763,   465,  7456,   958, 11075, -1243,   279,   765,  8364,   272,
     583,   900,   764, -1243, -1243,  8096, -1243, -1243, -1243, -1243,
    8273, -1243, -1243, -1243,   805, -1243,   784, -1243,   787, -1243,
     791, -1243,  8373, -1243,   749, -1243,   642,   642, -1243,   806,
    7456,   -91,   473, -1243,   286,   815,  9798,   479,   705, -1243,
   11786, -1243,   777,  8273,  7456, -1243, -1243,  7456,   760,  1384,
   -1243,  1404, -1243,  1456, -1243, -1243,   783, -1243, -1243, -1243,
   -1243, -1243,   781,  7456, -1243,  7456,  7456,  7456,    -5,  7456,
     467,   449,   234, -1243, -1243,   779, -1243,  7456, -1243,   785,
    7456, -1243,  7456,   449,   164, -1243,   786, -1243, 11786, -1243,
   -1243,  1651,  2064, 11689,  7456,  7456,  8273,   550,  1942,   547,
   -1243, -1243,  7456, -1243,  1199,   137,   344,  5948, -1243, -1243,
     354,   816,   817,   824,   827, -1243,   377,   594, -1243,  7456,
   -1243,  7456,  6147, -1243, -1243, -1243,  7456, -1243, -1243, -1243,
   -1243,   807,   789, -1243, -1243,  7456,   794, -1243, 11172,  7456,
    6334,   795, -1243, 11207, -1243, -1243, -1243, -1243, -1243,   792,
   -1243, -1243,   299, -1243,    16, -1243, -1243, -1243, -1243, -1243,
     642, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, 11786,   547, -1243, -1243,
     274, -1243, -1243, -1243,  7456,  2463, -1243, 11786, -1243, -1243,
   -1243, -1243,   797,  6521,   -47,  9833, 11786, 11786,   -18,   234,
   11786,   798,   145,   771, -1243, -1243, 11786, -1243,   772,   -27,
     -18, -1243, -1243,   788, -1243, -1243, -1243, -1243, -1243,  9930,
   10027,  2543,   594, -1243, -1243,  1237, -1243,   796,   801,   449,
     831,   802, -1243, -1243, -1243, -1243,    -9,   804,   -83,  8273,
   10062,  8273, 10159, -1243,   287, 10256, -1243,  7456, 11918,  7456,
   -1243, 10291, -1243,   302,  7456, -1243, -1243, -1243,   966,    16,
   -1243, -1243,   583, -1243, -1243, -1243, -1243, -1243,  7456,   840,
   -1243,   808,   303,   809,  7456,  7456,  7456,   810,  6708, -1243,
     319,  7456,   148,   234, -1243,  7456,  7456,  7456,  7456,   164,
   -1243,  7456,   811, -1243, -1243, -1243,   822,   573,  3131, -1243,
   -1243,   386, -1243,   142, -1243, -1243,  6895, -1243, -1243,  2664,
   -1243,   480, -1243, -1243, -1243,  8273, 10388, 10485, -1243, -1243,
   10520, -1243, -1243,   966,   390, 10617,   823,  7456, -1243,  7456,
     170,   170,   170,  7456, -1243, 10714, -1243,  8402,  7456,  7456,
   -1243, 10749, 11786, 11786,  8402, -1243,   170,  7456,   150, -1243,
   -1243,  7082,  7269, -1243, -1243, -1243, -1243, -1243, 11786,   813,
    8273,   -25,  7456, 11883, -1243, -1243,   510, -1243, -1243, -1243,
   12455, -1243, -1243, -1243,  7456,   325,   326,   333, -1243,   961,
     832, 11786, 11786,   176,   820,   833, -1243,   150,  7456,  7456,
   11786, -1243,   593,  7456, 11918, -1243, -1243, -1243,   803, 12455,
   10846, -1243, -1243, -1243,  7456,   834,  7456,  7456,   837, -1243,
   -1243, 11786,  7456,  8510, -1243, -1243,   547, -1243, 11786, -1243,
   11786, 11786, -1243,  8545, -1243, -1243, -1243
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,   117,     1,   282,     0,     0,     0,   565,   283,     0,
     557,   557,   557,     0,     0,    16,    15,     3,     0,    10,
       9,     8,     0,     7,   545,     6,    11,     5,     4,    13,
      12,    14,    91,    92,    90,    99,   101,    37,    53,    50,
      51,    39,    40,    41,     0,    42,    48,    38,   557,   557,
      22,    21,   545,   559,   558,   718,   708,   713,     0,   255,
      35,   104,   105,     0,     0,     0,   106,   108,   115,     0,
     103,    17,   583,   582,   210,   567,   584,   546,   547,     0,
       0,     0,     0,    43,     0,    49,     0,     0,    46,     0,
       0,   557,     0,    18,     0,     0,     0,   257,     0,     0,
     114,   109,     0,     0,     0,     0,     0,     0,   118,   212,
     211,   214,   209,   569,   568,     0,   586,   585,   587,   549,
     548,   551,    97,    98,    95,    96,    94,     0,     0,    93,
     102,    54,    52,    48,    45,    44,   560,   562,   564,     0,
     566,    19,    20,    23,   719,   709,   714,   256,    33,    36,
     113,     0,   110,   111,   112,   116,     0,   570,     0,   579,
     542,   480,    24,    25,     0,    86,    87,    84,    85,    83,
      82,    88,     0,    47,     0,   563,     0,     0,     0,    34,
     107,     0,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,     0,     0,   124,
     119,     0,     0,   571,   580,     0,   588,   543,     0,     0,
      26,    27,    28,     0,   100,     0,   720,   710,   715,   178,
     179,   176,   127,   128,   130,   129,   131,   132,   133,   134,
     160,   161,   158,   159,   151,   162,   163,   152,   149,   150,
     177,   171,     0,   175,   164,   165,   166,   167,   138,   139,
     140,   135,   136,   137,   148,     0,   154,   155,   153,   146,
     147,   142,   141,   143,   144,   145,   126,   125,   170,     0,
     156,   157,   480,   122,   239,   215,   622,   625,   623,   626,
     624,   627,     0,   553,   577,     0,   550,   480,     0,     0,
     532,   530,   552,    89,     0,     0,     0,     0,     0,     0,
     595,   615,   596,   629,   597,   601,   602,   603,   604,   621,
     608,   609,   610,   611,   612,   613,   614,   616,   617,   618,
     619,   678,   600,   607,   620,   685,   692,   598,   605,   599,
     606,     0,     0,     0,     0,   628,   642,   645,   643,   644,
     705,   561,   634,   510,   516,   180,   181,   174,   169,   182,
     172,   168,     0,   120,     0,   504,     0,     0,   213,     0,
     574,   572,     0,   581,   493,     0,     0,     0,     0,     0,
       0,   531,     0,   648,   669,   672,     0,   675,   665,     0,
     637,   679,   686,   693,   699,   702,     0,     0,   655,   660,
     654,     0,   668,   664,   657,     0,     0,   659,     0,   721,
     711,   716,   183,   173,     0,     0,     0,   590,   501,   521,
     121,   480,   123,   241,     0,    63,    64,     0,   383,   384,
       0,     0,     0,     0,   270,   377,   268,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   269,     0,     0,     0,
       0,     0,     0,   621,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   469,     0,
       0,     0,   325,   327,   326,   328,   329,   330,   331,     0,
       0,    29,     0,     0,     0,     0,     0,     0,   312,   313,
     218,   216,   381,   380,     0,     0,     0,     0,   234,   229,
     226,   225,   227,   228,   323,   240,   220,   463,   219,   378,
       0,   454,    71,    72,    69,   232,    70,   233,   235,   285,
     224,   453,   452,   451,   117,   457,   379,     0,   221,   456,
     455,   424,   385,   332,   386,     0,   382,   723,   727,   724,
     725,   726,   553,     0,   554,     0,   578,   494,   544,   481,
       0,     0,     0,   534,   535,     0,   528,   529,   527,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,   119,     0,   119,     0,     0,     0,   243,   662,   663,
     656,   658,     0,   661,   647,     0,   707,   706,     0,   635,
       0,   255,   511,     0,   506,     0,     0,   517,     0,     0,
       0,   502,     0,     0,   520,     0,   519,     0,   522,     0,
     505,     0,     0,   260,   264,   263,   267,     0,   301,   769,
       0,     0,   274,   271,     0,   307,     0,     0,     0,     0,
     258,     0,     0,     0,   292,   295,     0,   238,   298,     0,
       0,    57,     0,    77,   773,     0,     0,     0,     0,   279,
     276,   413,   414,   313,   254,   252,   253,     0,     0,     0,
       0,     0,     0,     0,   738,     0,     0,   762,   776,     0,
     245,     0,   248,     0,   390,   389,   429,   388,   387,     0,
     314,     0,   236,   237,     0,    74,   461,     0,   223,   230,
     231,   273,   278,   284,     0,   321,     0,   222,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     415,   416,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   374,
       0,     0,   575,     0,   555,   573,     0,   589,     0,   480,
     533,     0,   537,     0,   541,   332,     0,     0,     0,   640,
     651,     0,     0,   630,   632,     0,     0,   122,     0,   122,
       0,   122,   508,     0,   514,     0,   631,     0,   244,   307,
     653,   646,   636,   722,     0,   512,   712,     0,   518,   717,
     503,     0,   592,   593,   523,   526,   525,    78,     0,     0,
       0,     0,     0,     0,     0,   275,   272,     0,     0,     0,
       0,     0,   778,     0,   259,     0,    79,    80,     0,     0,
       0,     0,    55,    56,     0,     0,     0,     0,     0,   280,
     277,   314,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   255,     0,     0,   758,   736,   738,     0,   764,     0,
       0,     0,   738,     0,     0,   741,     0,     0,   780,     0,
     242,     0,    32,     0,    30,   417,     0,     0,   364,   361,
     363,   239,    60,     0,     0,   425,     0,     0,   291,   290,
       0,   119,   251,     0,     0,   440,   439,     0,     0,   441,
     445,   342,   343,   345,   344,   346,   336,   337,   338,   391,
     392,   404,   347,   348,   405,   402,   403,     0,     0,     0,
       0,   334,   434,     0,   422,     0,   458,   459,   460,   335,
     393,   394,   349,   350,   409,   410,   411,   339,   340,   341,
     412,     0,     0,     0,   333,     0,     0,   407,   408,   406,
     400,   401,   396,   395,   397,   398,   399,     0,     0,     0,
     370,     0,     0,     0,     0,   427,     0,     0,     0,     0,
     487,   490,     0,   536,   539,   332,   540,   649,   670,   673,
       0,   676,   666,   638,     0,   680,     0,   687,     0,   694,
       0,   700,     0,   703,     0,   652,   507,   513,   591,     0,
       0,     0,     0,   265,     0,     0,     0,     0,     0,   768,
     308,   281,     0,     0,     0,   781,   430,     0,     0,     0,
     431,     0,   462,     0,   772,   763,   321,   464,   465,   466,
     467,   468,     0,     0,   739,     0,     0,     0,   738,     0,
       0,     0,     0,   747,   748,     0,   753,     0,   745,     0,
       0,   766,     0,     0,     0,   743,     0,   767,   761,   777,
     740,     0,     0,     0,     0,     0,     0,   119,     0,     0,
      58,    59,     0,    73,    65,     0,     0,     0,   426,   286,
       0,     0,     0,     0,     0,   319,     0,   122,   436,     0,
     442,     0,     0,   356,   354,   355,     0,   420,   353,   351,
     352,     0,     0,   446,   450,     0,     0,   423,     0,     0,
       0,     0,   371,     0,   375,   418,   428,   576,   556,   118,
     488,   489,   490,   491,   482,   495,   538,   650,   671,   674,
     641,   677,   667,   639,   633,   681,   683,   688,   690,   695,
     697,   701,   509,   704,   515,   594,   524,     0,   261,   266,
       0,   304,   302,   770,     0,     0,   779,    81,   293,   296,
     299,   774,     0,     0,     0,     0,   729,   728,   738,     0,
     759,     0,     0,   737,   752,   746,   760,   744,   765,     0,
     738,   750,   751,     0,   756,   742,   246,   249,    31,     0,
       0,     0,   122,   217,    61,     0,    66,     0,     0,     0,
       0,     0,   317,   318,   316,   315,     0,     0,     0,     0,
       0,     0,     0,   359,     0,     0,   447,     0,   435,     0,
     421,     0,   372,     0,     0,   419,   376,   500,   485,   482,
     483,   484,   487,   684,   691,   698,    76,   262,     0,     0,
     303,     0,     0,     0,     0,     0,     0,     0,     0,   470,
       0,     0,     0,     0,   754,     0,     0,     0,     0,     0,
     749,     0,     0,   362,   479,   365,     0,    60,     0,    75,
     357,     0,   287,   530,   320,   322,     0,   309,   324,     0,
     478,     0,   476,   360,   473,     0,     0,     0,   472,   373,
       0,   486,   496,   485,     0,     0,     0,     0,   782,     0,
     294,   297,   300,     0,   432,     0,   471,   784,     0,     0,
     755,     0,   731,   730,   784,   757,   247,   243,     0,   368,
      62,   270,     0,    67,    71,    72,    69,    70,    68,     0,
       0,     0,     0,   310,   437,   443,     0,   477,   475,   474,
       0,   498,   492,   305,     0,     0,     0,     0,   433,     0,
       0,   733,   732,     0,     0,     0,   366,     0,     0,     0,
     276,   358,     0,     0,   311,   438,   444,   448,     0,     0,
       0,   771,   783,   775,     0,     0,     0,     0,     0,   250,
     369,   277,     0,     0,   449,   497,     0,   306,   785,   786,
     735,   734,   787,     0,   289,   499,   288
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1243, -1243, -1243, -1243, -1243, -1243,   355,   969, -1243, -1243,
   -1243,  1050, -1243, -1243, -1243,   602,  1011, -1243,   923, -1243,
   -1243,   975, -1243, -1243, -1243,  -208, -1243, -1243, -1243,  -210,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,   838, -1243,
   -1243,   982,   -50, -1243, -1243,   385,   309,  -323,  -555,  -753,
   -1243, -1243, -1243, -1140, -1243, -1243,  -209, -1243,   183, -1243,
    -250, -1243, -1243, -1243, -1243, -1243,  -407,   -13, -1243, -1243,
   -1243, -1243, -1243,  -200,  -199,  -198, -1243,  -197, -1243, -1243,
    1071, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243,  -564, -1243, -1243,  -133,
   -1243,    48,  -438, -1243,  -364, -1243, -1243, -1243, -1242, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243,   418, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243,  -149,  -148,  -207,  -147,   -39,
   -1243, -1243, -1243, -1243, -1243,   673, -1243,  -559, -1243, -1243,
    -567, -1243, -1243,  -412,  -411,  -549,  -186, -1243,  -343, -1243,
   -1243,  1036, -1243, -1243, -1243,   548,   720,    37, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243,  -398,  -222, -1243,
     677, -1243, -1243, -1243, -1243, -1243, -1243, -1243,  -370, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243,  -192, -1243, -1243, -1243, -1243,
   -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243, -1243,
   -1243,   681,  -867,  -657,  -831, -1243, -1243, -1243, -1023,  -170,
   -1243,    41,  -460, -1243,   426, -1243, -1243, -1243, -1243, -1243,
   -1243, -1117, -1243,  -205, -1243
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    16,   143,    52,    17,   164,   170,   673,   492,
     149,   493,    99,    19,    20,    45,    46,    47,    88,    21,
      39,    40,   494,   495,  1072,  1073,   496,  1197,  1268,   497,
     498,   883,   499,   500,   501,   502,   503,  1017,   171,   172,
      35,    36,    37,    66,    67,    68,    69,    22,   283,   368,
     210,    23,   111,   211,   112,   156,   504,   505,   369,   506,
     787,   507,   869,  1261,   871,  1262,   508,   509,   510,   614,
     809,  1237,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   694,  1080,   888,   520,   521,   828,  1244,   829,  1245,
     831,  1246,   522,   812,  1240,   523,   623,  1278,   524,  1085,
    1086,   891,   525,   526,   624,   528,   529,   530,   880,   531,
    1066,  1318,  1067,  1357,   532,   963,  1226,   789,  1209,  1365,
    1211,  1366,  1285,  1384,   534,   364,  1232,  1292,  1122,  1124,
     972,   547,   759,  1340,  1369,   365,   366,   593,   783,   410,
     598,   785,   411,  1037,   418,   559,   382,   301,   302,   217,
     297,    78,   121,    25,   161,   371,    89,    90,   174,    91,
      26,    49,   115,   158,    27,   293,   545,   542,   967,   373,
     215,   216,    76,   118,    28,   159,   295,   419,   535,   292,
     347,   348,   775,   409,   349,   567,  1133,   768,   350,   560,
    1127,   565,  1132,   561,  1128,   562,  1129,   564,  1131,   568,
    1135,   569,  1233,   570,  1137,   571,  1234,   572,  1139,   573,
    1235,   574,  1141,   575,  1143,   594,    29,    95,   177,   353,
     595,    30,    96,   178,   354,   599,    31,    94,   176,   352,
     590,   536,   855,   856,   857,   868,  1057,  1051,  1046,  1184,
     537,   858,   822,   538,   859,   539,   813,  1241,   835,  1247,
     669,   823,   540,  1350,   541
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    70,   285,   346,   601,   527,   763,   609,   784,   862,
     555,   668,   219,   788,   777,   782,   779,  1076,   781,  1174,
    -117,   654,   655,   656,   986,  1042,   988,   622,   990,   612,
     808,  1054,   548,   351,   849,    32,    33,  1242,   587,    84,
       2,  1033,  1052,   543,   122,   123,     3,   849,   415,   649,
      70,    70,    70,   151,   696,  1276,   814,   816,   580,   604,
     718,  1230,    53,   721,   722,   698,   699,    50,    54,     4,
     362,     5,   604,     6,    85,   218,  1356,   588,   578,     7,
     596,   836,   837,   104,   105,   106,    92,    98,   544,     8,
     817,    70,    70,    70,    70,     9,    38,   604,   556,   664,
     666,   721,   722,   698,   699,   408,    48,  1036,   557,   977,
      51,   165,   166,    98,  1081,  1380,   212,    10,   606,  1231,
    1147,   408,   589,   886,  1082,   597,    61,   363,   139,   284,
     605,   606,   794,   607,   817,   398,   608,   697,   686,    11,
      12,    71,   749,   750,   213,   346,  1254,   416,   375,   850,
     408,   150,   764,    77,   817,    62,   606,   558,   346,   710,
     711,  1075,   399,   400,  1251,   417,   753,   718,   298,   720,
     721,   722,   723,  1083,  1173,   422,   980,   724,  1084,   687,
     749,   750,  1346,    34,  1258,    79,   346,   966,   346,   124,
     698,   699,   605,  1041,   125,   754,   126,   710,   711,   127,
    1368,   695,   805,   605,   605,   718,    80,  1169,   721,   722,
     723,    86,   345,   581,   815,   724,   698,   699,   756,   138,
      81,   983,    87,   401,   758,    63,   757,   402,   626,  1386,
    1310,   582,    58,   579,    13,   957,   958,   128,   865,    82,
     583,   839,   643,   984,  1001,    14,  1004,   346,   346,   749,
     750,    15,    41,    42,    43,    97,   167,   821,   892,    59,
     604,   168,    98,   169,   959,   848,   127,   860,   604,   420,
    1036,   604,   421,   866,    58,   867,   960,   838,  1256,  1048,
      44,  1308,   708,   709,   710,   711,   403,   749,   750,    58,
     404,    64,   718,   405,   720,   721,   722,   723,   876,   604,
      65,    59,   724,   103,   726,   727,    80,  1049,   406,  1376,
     710,   711,  1050,   991,   961,   962,    59,   407,   718,   606,
     720,   721,   722,   723,   698,   699,  1330,   606,   724,   381,
     606,   397,  1271,   180,  1208,   992,  1087,  1253,   346,   346,
     346,  1181,   346,   346,  1182,  1228,   346,   619,   346,  1259,
     346,   889,   346,   299,   345,   223,   974,  1055,   606,   546,
     744,   745,   746,   747,   748,  1123,   620,   345,   766,   767,
     769,   300,   771,   772,   749,   750,   776,  1183,   778,   408,
     780,  1168,   224,   978,   107,   346,   744,   745,   746,   747,
     748,  1050,  1000,  1056,   817,   345,  1180,   345,   433,    80,
     749,   750,   807,   627,   438,   346,  1059,    72,    73,   108,
      74,  1034,  1043,  1044,   131,   804,   644,   345,   710,   711,
    1014,  1009,   628,   826,   376,   346,   718,  1144,   720,   721,
     722,   723,   993,  1142,    87,   645,   724,    58,    75,  1266,
    1045,   452,   133,  1008,   817,   817,   876,  1015,   100,   101,
     102,   877,  1077,   107,   994,   136,   345,   345,  1018,  1019,
     817,  1021,   870,  1238,    59,  1023,   408,   817,   817,  1164,
     981,  1024,  1025,   454,   144,   882,   896,   900,  1119,  1078,
    1093,  1094,  1095,   817,  1014,  1239,   878,  1116,  1179,   152,
     153,   154,   155,   398,  1149,  1283,   746,   747,   748,  1061,
     817,  1062,   928,  1098,  1099,  1100,   817,  1014,   749,   750,
    1289,  1298,  1192,    58,   817,   145,    53,   923,   109,   286,
     399,   400,    54,   287,   110,  1040,   137,  1306,  1214,   924,
     469,   470,   471,  1371,  1372,  1200,   398,   104,   416,   106,
      59,  1373,   288,   289,   290,   291,  1223,   345,   345,   345,
    1198,   345,   345,   140,  1156,   345,   417,   345,  1206,   345,
    1201,   345,   613,   399,   400,  -682,  -689,  1040,   299,   408,
    -682,  -689,   346,   982,   113,   346,   887,  -696,   698,   699,
     114,   401,  -696,  1207,  1069,   402,   300,   346,  -682,  -689,
     346,   346,  1329,  -367,   345,  1070,  1071,   408,  -367,  1250,
    -696,   985,   996,   850,   811,   997,   346,   346,   408,   346,
     971,  1011,   987,   346,   345,  1075,  -367,  1002,  1106,  1111,
    1007,  1171,   146,   379,   401,   398,   380,   556,   402,   381,
    1107,  1112,   116,  1172,   345,   119,   141,   557,   117,  1120,
     147,   120,   142,  1155,   403,  1121,   148,   346,   404,   346,
    1026,   405,   399,   400,   362,   642,   157,   408,   408,   218,
     284,   989,  1148,   160,   408,   408,   406,   879,  1152,  1335,
     708,   709,   710,   711,   712,   407,    85,   715,   716,   717,
     718,   175,   720,   721,   722,   723,   558,   403,   134,   135,
     724,   404,   726,   727,   405,   408,  1191,   162,   163,  1367,
     162,   163,   872,   873,   527,   488,   653,   179,   284,   406,
     104,   105,   106,   401,   398,   762,   556,   402,   407,    41,
      42,    43,   104,  1104,   220,   221,   557,   220,   221,   222,
      55,    56,    57,  1345,   214,   226,   227,   398,   225,  1347,
     218,   399,   400,    70,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   788,   228,   280,   281,   282,   346,   284,
    1257,   294,   749,   750,   399,   400,   355,   356,   296,   357,
     346,   358,   359,   360,   361,   558,   403,   378,   367,   370,
     404,   345,  1363,   405,   345,   377,   374,   533,  1130,   372,
     413,   346,   398,   386,   816,   552,   345,   383,   406,   345,
     345,   384,   401,   385,   563,   387,   402,   407,   603,   388,
     390,   389,   391,  1382,   576,   345,   345,   392,   345,   399,
     400,   393,   345,   394,   585,   401,   395,   408,   412,   402,
     396,   549,   600,   414,   553,   554,   566,   577,   618,  1279,
    1309,   602,   611,   617,   346,   633,   631,   634,   635,   638,
     636,   637,   625,   639,   646,   647,   345,   630,   345,   632,
    1194,   657,   658,   659,   672,   403,   681,   685,   641,   404,
     660,  1012,   405,   661,   650,   651,   652,   693,   662,   670,
     401,   761,   680,  1342,   402,   682,   683,   406,   403,   667,
      14,   688,   404,  1013,  1153,   405,   407,   671,   689,   690,
     674,   675,   676,   677,   678,   679,   691,   692,   751,   642,
     406,   755,   773,   774,   684,   596,   790,   792,   797,   407,
     793,   796,   795,   798,   802,   803,   799,   817,   696,   820,
     698,   699,   810,   833,   827,   881,   841,   832,  1236,   890,
     970,  1377,   917,   403,   973,   979,   995,   404,   999,  1158,
     405,  1035,  1040,  1047,  1060,  1064,  1079,  1065,  1088,  1114,
    1362,  1089,  1091,  1090,  1092,   406,  1123,   345,  1096,  1109,
    1110,  1134,  1145,  1136,   407,  1125,  1138,   765,  1117,   345,
    1140,  1150,  1202,  1203,  1154,  1175,  1267,   346,  1163,   346,
    1204,  1177,  1185,  1205,  1260,  1216,  1217,  1272,  1291,  1277,
     345,  1219,  1224,  1227,  1248,  1255,  1296,  1269,  1273,  1270,
    1275,  1319,  1344,  1374,  1385,  1297,  1299,  1303,  1317,  1281,
     801,  1361,   708,   709,   710,   711,   712,   806,   874,   715,
     716,   717,   718,  1378,   720,   721,   722,   723,  1375,   625,
    1389,  1379,   724,  1392,   726,   727,   667,   824,   129,   825,
     730,    18,   732,   345,   830,    83,   173,   132,  1323,  1320,
     834,   303,   130,   346,  1068,   969,   840,  1355,  1324,  1325,
    1326,  1327,    24,  1274,  1162,   842,   843,   844,   845,   846,
     847,  1293,   854,  1229,   854,  1294,  1341,  1331,    93,  1315,
     752,  1178,   863,  1336,   610,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,     0,     0,   615,   346,  1354,
       0,   616,     0,     0,   749,   750,     0,     0,   901,   902,
     903,   904,   905,   906,   907,   908,   909,   910,     0,     0,
     911,   912,   913,   914,   915,   916,     0,   921,   922,     0,
     925,   926,   927,   929,   930,   931,   932,   933,   934,   935,
     936,   937,   938,   939,   940,   944,   946,   947,   948,   949,
     950,   951,   952,   953,   954,   955,   956,     0,   964,     0,
       0,   968,     0,     0,     0,     0,     0,  1395,     0,     0,
       0,   975,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   345,     0,   345,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1196,     0,     0,     0,     0,     0,     0,     0,     0,   698,
     699,     0,     0,     0,     0,     0,     0,     0,     0,  1006,
       0,     0,     0,     0,     0,  1010,   921,   944,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   698,   699,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     674,   679,   345,     0,     0,     0,     0,     0,     0,   679,
       0,     0,  1058,     0,   667,     0,     0,     0,     0,     0,
       0,  1063,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1074,     0,     0,     0,   879,     0,     0,     0,     0,
       0,   708,   709,   710,   711,   712,     0,   345,   715,   716,
     717,   718,     0,   720,   721,   722,   723,     0,     0,     0,
       0,   724,     0,   726,   727,     0,     0,     0,     0,   730,
     731,   732,     0,     0,   879,   736,     0,     0,     0,   708,
     709,   710,   711,   712,     0,     0,   715,   716,   717,   718,
       0,   720,   721,   722,   723,     0,     0,     0,     0,   724,
       0,   726,   727,     0,     0,     0,  1108,   730,   731,   732,
    1113,     0,   738,   736,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   749,   750,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,     0,  1146,     0,
     738,     0,   739,   740,   741,   742,   743,   744,   745,   746,
     747,   748,   667,     0,     0,  1157,   398,     0,     0,     0,
       0,   749,   750,   399,   400,     0,     0,     0,     0,   284,
       0,     0,     0,  1165,  1166,  1167,     0,  1170,     0,     0,
       0,     0,     0,   399,   400,  1176,     0,     0,   854,     0,
       0,     0,     0,     0,     0,   663,     0,     0,     0,     0,
       0,   304,  1189,  1190,     0,     0,   533,   305,   398,     0,
    1195,     0,     0,   306,     0,  1010,     0,     0,     0,     0,
       0,     0,     0,   307,   401,     0,     0,  1210,   402,  1212,
       0,   308,     0,     0,  1215,   399,   400,     0,     0,     0,
       0,     0,     0,  1218,   401,     0,   309,  1221,   402,     0,
       0,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,     0,     0,     0,   403,     0,     0,
       0,   404,   667,  1159,   405,     0,   401,     0,     0,     0,
     402,     0,     0,     0,     0,     0,     0,   403,     0,   406,
       0,   404,     0,  1160,   405,     0,     0,     0,   407,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,   406,
       0,     0,     0,     0,     0,   343,     0,     0,   407,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
       0,     0,     0,     0,     0,  1286,     0,  1287,     0,   403,
       0,     0,  1290,   404,     0,  1161,   405,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1295,     0,     0,     0,
       0,   406,  1300,  1301,  1302,     0,  1305,     0,     0,  1307,
     407,     0,   344,  1311,  1312,  1313,  1314,     0,     0,  1316,
       0,     0,     0,   398,     0,     0,  1328,     0,     0,     0,
       0,     0,     0,     0,  1333,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     399,   400,     0,     0,     0,     0,     0,   667,     0,     0,
       0,     0,     0,     0,     0,     0,  1351,  1352,     0,     0,
     423,     0,     0,     0,     0,     3,     0,   424,   425,   426,
    1360,   427,     0,   428,   429,   430,   431,   432,     0,     0,
    1364,     0,     0,   433,   434,   435,   436,   437,     0,   438,
       0,     0,  1370,     0,     0,     0,   439,   440,     0,     0,
     441,   401,   442,   443,     0,   402,   444,  1381,     8,   445,
     446,  1383,   447,   448,     0,     0,   449,   450,     0,     0,
       0,     0,  1388,   451,  1390,  1391,   452,   310,   311,   312,
    1393,   314,   315,   316,   317,   318,   453,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,     0,   332,
     333,   334,     0,     0,   337,   338,   339,   340,   454,     0,
     455,   456,     0,     0,   403,     0,     0,     0,   404,     0,
    1186,   405,     0,   457,   458,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   406,     0,   459,   460,
     461,     0,     0,     0,     0,   407,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,   462,   463,   464,   465,
     466,     0,   467,     0,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,    59,   479,   480,   481,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   482,
     483,   484,     0,    13,     0,     0,   485,   486,     0,     0,
       0,     0,     0,     0,     0,     0,   487,     0,   488,   489,
     490,   284,   491,   423,     0,     0,     0,     0,     3,     0,
     424,   425,   426,     0,   427,     0,   428,   429,   430,   431,
     432,     0,     0,     0,     0,     0,   433,   434,   435,   436,
     437,     0,   438,     0,     0,     0,     0,     0,     0,   439,
     440,     0,     0,   441,     0,   442,   443,     0,     0,   444,
       0,     8,   445,   446,     0,   447,   448,     0,     0,   449,
     450,     0,     0,     0,     0,     0,   451,     0,     0,   452,
     310,   311,   312,     0,   314,   315,   316,   317,   318,   453,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   332,   333,   334,     0,     0,   337,   338,   339,
     340,   454,     0,   455,   456,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   457,   458,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   459,   460,   461,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,   462,
     463,   464,   465,   466,     0,   467,   398,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,    59,   479,
     480,   481,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   399,   400,     0,     0,     0,     0,     0,
       0,     0,   482,   483,   484,     0,    13,     0,     0,   485,
     486,     0,     0,     0,     0,     0,     0,     0,     0,   487,
       0,   488,   489,   490,   284,  1193,   428,   429,   430,   431,
     432,     0,     0,     0,     0,     0,   433,     0,   435,     0,
       0,     0,   438,     0,   398,     0,     0,     0,     0,     0,
     440,     0,     0,     0,   401,     0,   443,     0,   402,   444,
       0,     0,   445,     0,   849,     0,   448,     0,     0,     0,
       0,   399,   400,     0,     0,     0,   550,     0,     0,   452,
     310,   311,   312,     0,   314,   315,   316,   317,   318,   453,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   332,   333,   334,     0,     0,   337,   338,   339,
     340,   454,     0,   455,     0,     0,     0,   403,     0,     0,
       0,   404,     0,  1187,   405,     0,   457,   458,     0,     0,
       0,     0,   401,     0,     0,     0,   402,     0,     0,   406,
       0,     0,     0,     0,     0,     0,     0,     0,   407,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,   462,
     463,   464,   465,   466,     0,   467,   850,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   851,   551,
     480,   481,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   403,     0,     0,     0,   404,
       0,     0,   852,   483,   484,     0,    13,     0,     0,   485,
     486,     0,     0,     0,     0,     0,     0,   406,     0,   853,
       0,   488,   489,     0,   284,     0,   407,   428,   429,   430,
     431,   432,     0,     0,     0,     0,     0,   433,     0,   435,
       0,     0,     0,   438,     0,   398,     0,     0,     0,     0,
       0,   440,     0,     0,     0,     0,     0,   443,     0,     0,
     444,     0,     0,   445,     0,     0,     0,   448,     0,     0,
       0,     0,   399,   400,     0,     0,     0,   550,     0,     0,
     452,   310,   311,   312,     0,   314,   315,   316,   317,   318,
     453,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,     0,   332,   333,   334,     0,     0,   337,   338,
     339,   340,   454,     0,   455,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   457,   458,     0,
       0,     0,     0,   401,     0,     0,     0,   402,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
     462,   463,   464,   465,   466,   398,   467,   850,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   851,
     551,   480,   481,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,   400,     0,     0,   403,     0,     0,     0,
     404,     0,     0,   852,   483,   484,     0,    13,     0,     0,
     485,   486,     0,     0,     0,     0,     0,     0,   406,     0,
     861,     0,   488,   489,     0,   284,     0,   407,   428,   429,
     430,   431,   432,     0,     0,     0,     0,     0,   433,     0,
     435,     0,     0,     0,   438,   398,   580,     0,     0,     0,
       0,     0,   440,   401,     0,     0,     0,   402,   443,     0,
       0,   444,     0,     0,   445,     0,     0,     0,   448,     0,
       0,     0,   399,   400,     0,     0,     0,     0,   550,     0,
       0,   452,   310,   311,   312,     0,   314,   315,   316,   317,
     318,   453,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,     0,   332,   333,   334,     0,     0,   337,
     338,   339,   340,   454,     0,   455,   403,     0,     0,     0,
     404,     0,  1243,   405,     0,     0,     0,     0,   457,   458,
       0,     0,     0,   401,     0,     0,     0,   402,   406,     0,
       0,     0,     0,     0,     0,     0,     0,   407,     0,     0,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,   462,   463,   464,   465,   466,   398,   467,     0,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
      59,   551,   480,   481,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   399,   400,     0,   403,     0,     0,     0,
     404,   581,  1265,   405,   482,   483,   484,     0,    13,     0,
       0,   485,   486,     0,     0,     0,     0,     0,   406,   582,
       0,   487,     0,   488,   489,     0,   284,   407,   583,   428,
     429,   430,   431,   432,     0,     0,     0,     0,     0,   433,
       0,   435,     0,     0,     0,   438,     0,     0,     0,     0,
       0,     0,     0,   440,   401,     0,     0,     0,   402,   443,
       0,     0,   444,     0,     0,   445,     0,     0,     0,   448,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   550,
       0,     0,   452,   310,   311,   312,     0,   314,   315,   316,
     317,   318,   453,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,     0,   332,   333,   334,     0,     0,
     337,   338,   339,   340,   454,     0,   455,   403,     0,     0,
       0,   404,     0,  1334,   405,     0,     0,     0,     0,   457,
     458,     0,     0,     0,     0,     0,     0,     0,   621,   406,
       0,     0,     0,     0,   459,   460,   461,     0,   407,     0,
       0,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,   462,   463,   464,   465,   466,     0,   467,     0,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,    59,   551,   480,   481,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   482,   483,   484,     0,    13,
       0,     0,   485,   486,     0,     0,   428,   429,   430,   431,
     432,     0,   487,     0,   488,   489,   433,   284,   435,     0,
       0,     0,   438,     0,     0,     0,     0,     0,     0,     0,
     440,     0,     0,     0,     0,     0,   443,     0,     0,   444,
       0,     0,   445,     0,     0,     0,   448,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   550,     0,     0,   452,
     310,   311,   312,     0,   314,   315,   316,   317,   318,   453,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   332,   333,   334,     0,     0,   337,   338,   339,
     340,   454,     0,   455,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   457,   458,     0,     0,
       0,     0,     0,     0,     0,   648,     0,     0,     0,     0,
       0,   459,   460,   461,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,   462,
     463,   464,   465,   466,     0,   467,     0,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,    59,   551,
     480,   481,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   482,   483,   484,     0,    13,     0,     0,   485,
     486,     0,     0,     0,     0,     0,     0,     0,     0,   487,
       0,   488,   489,     0,   284,   428,   429,   430,   431,   432,
       0,     0,     0,     0,     0,   433,  1321,   435,   436,     0,
       0,   438,     0,     0,     0,     0,     0,     0,     0,   440,
       0,     0,     0,     0,     0,   443,     0,     0,   444,     0,
       0,   445,   446,     0,     0,   448,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   550,     0,     0,   452,   310,
     311,   312,     0,   314,   315,   316,   317,   318,   453,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
       0,   332,   333,   334,     0,     0,   337,   338,   339,   340,
     454,     0,   455,  1322,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   457,   458,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,   462,   463,
     464,   465,   466,     0,   467,     0,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,    59,   551,   480,
     481,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   482,   483,   484,     0,    13,     0,     0,   485,   486,
       0,     0,   428,   429,   430,   431,   432,     0,   487,     0,
     488,   489,   433,   284,   435,     0,     0,     0,   438,     0,
       0,     0,     0,     0,     0,     0,   440,     0,     0,     0,
       0,     0,   443,     0,     0,   444,     0,     0,   445,     0,
       0,     0,   448,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   550,     0,     0,   452,   310,   311,   312,     0,
     314,   315,   316,   317,   318,   453,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,     0,   332,   333,
     334,     0,     0,   337,   338,   339,   340,   454,     0,   455,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   457,   458,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   459,   460,   461,
       0,     0,     0,     0,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,     0,   462,   463,   464,   465,   466,
       0,   467,     0,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,    59,   551,   480,   481,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   482,   483,
     484,     0,    13,     0,     0,   485,   486,     0,     0,   428,
     429,   430,   431,   432,     0,   487,     0,   488,   489,   433,
     284,   435,     0,     0,     0,   438,     0,     0,     0,     0,
       0,     0,     0,   440,     0,     0,     0,     0,     0,   443,
       0,     0,   444,     0,     0,   445,     0,     0,     0,   448,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   550,
       0,     0,   452,   310,   311,   312,     0,   314,   315,   316,
     317,   318,   453,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,     0,   332,   333,   334,     0,     0,
     337,   338,   339,   340,   454,     0,   455,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   457,
     458,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   918,   919,   920,     0,     0,     0,
       0,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,   462,   463,   464,   465,   466,     0,   467,     0,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,    59,   551,   480,   481,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   482,   483,   484,     0,    13,
       0,     0,   485,   486,     0,     0,   428,   429,   430,   431,
     432,     0,   487,     0,   488,   489,   433,   284,   435,     0,
       0,     0,   438,     0,     0,     0,     0,     0,     0,     0,
     440,     0,     0,     0,     0,     0,   443,     0,     0,   444,
       0,     0,   445,     0,     0,     0,   448,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   550,     0,     0,   452,
     310,   311,   312,     0,   314,   315,   316,   317,   318,   453,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   332,   333,   334,     0,     0,   337,   338,   339,
     340,   454,     0,   455,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   457,   458,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   941,   942,   943,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,   462,
     463,   464,   465,   466,     0,   467,     0,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,    59,   551,
     480,   481,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   482,   483,   484,     0,    13,     0,     0,   485,
     486,     0,     0,   428,   429,   430,   431,   432,     0,   487,
       0,   488,   489,   433,   284,   435,     0,     0,     0,   438,
       0,     0,     0,     0,     0,     0,     0,   440,     0,     0,
       0,     0,     0,   443,     0,     0,   444,     0,     0,   445,
       0,     0,     0,   448,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   550,     0,     0,   452,   310,   311,   312,
       0,   314,   315,   316,   317,   318,   453,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,     0,   332,
     333,   334,     0,     0,   337,   338,   339,   340,   454,     0,
     455,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   457,   458,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,   462,   463,   464,   465,
     466,     0,   467,     0,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,    59,   551,   480,   481,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   482,
     483,   484,     0,    13,     0,     0,   485,   486,     0,     0,
       0,     0,     0,     0,   884,     0,   487,   885,   488,   489,
       0,   284,   428,   429,   430,   431,   432,     0,     0,     0,
       0,     0,   433,     0,   435,     0,     0,     0,   438,     0,
       0,     0,     0,     0,     0,     0,   440,     0,     0,     0,
       0,     0,   443,     0,     0,   444,     0,     0,   445,     0,
       0,     0,   448,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   550,     0,     0,   452,   310,   311,   312,     0,
     314,   315,   316,   317,   318,   453,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,     0,   332,   333,
     334,     0,     0,   337,   338,   339,   340,   454,     0,   455,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   457,   458,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,     0,   462,   463,   464,   465,   466,
       0,   467,     0,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,    59,   551,   480,   481,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   482,   483,
     484,     0,    13,     0,     0,   485,   486,     0,     0,   428,
     429,   430,   431,   432,   584,   487,     0,   488,   489,   433,
     284,   435,     0,     0,     0,   438,     0,     0,     0,     0,
       0,     0,     0,   440,     0,     0,     0,     0,     0,   443,
       0,     0,   444,     0,     0,   445,     0,     0,     0,   448,
       0,     0,     0,     0,     0,   629,     0,     0,     0,   550,
       0,     0,   452,   310,   311,   312,     0,   314,   315,   316,
     317,   318,   453,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,     0,   332,   333,   334,     0,     0,
     337,   338,   339,   340,   454,     0,   455,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   457,
     458,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,   462,   463,   464,   465,   466,     0,   467,     0,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,    59,   551,   480,   481,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   482,   483,   484,     0,    13,
       0,     0,   485,   486,     0,     0,   428,   429,   430,   431,
     432,     0,   487,     0,   488,   489,   433,   284,   435,     0,
       0,     0,   438,     0,     0,     0,     0,     0,     0,     0,
     440,     0,     0,     0,     0,     0,   443,     0,     0,   444,
       0,     0,   445,     0,     0,     0,   448,     0,     0,   640,
       0,     0,     0,     0,     0,     0,   550,     0,     0,   452,
     310,   311,   312,     0,   314,   315,   316,   317,   318,   453,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   332,   333,   334,     0,     0,   337,   338,   339,
     340,   454,     0,   455,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   457,   458,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,   462,
     463,   464,   465,   466,     0,   467,     0,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,    59,   551,
     480,   481,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   482,   483,   484,     0,    13,     0,     0,   485,
     486,     0,     0,   428,   429,   430,   431,   432,     0,   487,
       0,   488,   489,   433,   284,   435,     0,     0,     0,   438,
       0,     0,     0,     0,     0,     0,     0,   440,     0,     0,
       0,     0,     0,   443,     0,     0,   444,     0,     0,   445,
       0,     0,     0,   448,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   550,     0,     0,   452,   310,   311,   312,
       0,   314,   315,   316,   317,   318,   453,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,     0,   332,
     333,   334,     0,     0,   337,   338,   339,   340,   454,     0,
     455,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   457,   458,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,   462,   463,   464,   465,
     466,     0,   467,     0,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,    59,   551,   480,   481,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   670,     0,   482,
     483,   484,     0,    13,     0,     0,   485,   486,     0,     0,
     428,   429,   430,   431,   432,     0,   487,   945,   488,   489,
     433,   284,   435,     0,     0,     0,   438,     0,     0,     0,
       0,     0,     0,     0,   440,     0,     0,     0,     0,     0,
     443,     0,     0,   444,     0,     0,   445,     0,     0,     0,
     448,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     550,     0,     0,   452,   310,   311,   312,     0,   314,   315,
     316,   317,   318,   453,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,     0,   332,   333,   334,     0,
       0,   337,   338,   339,   340,   454,     0,   455,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     457,   458,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,   462,   463,   464,   465,   466,     0,   467,
       0,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,    59,   551,   480,   481,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   482,   483,   484,     0,
      13,     0,     0,   485,   486,     0,     0,   428,   429,   430,
     431,   432,     0,   487,     0,   488,   489,   433,   284,   435,
       0,     0,     0,   438,     0,     0,     0,     0,     0,     0,
       0,   440,     0,     0,     0,     0,     0,   443,     0,     0,
     444,     0,     0,   445,     0,     0,     0,   448,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   550,     0,     0,
     452,   310,   311,   312,     0,   314,   315,   316,   317,   318,
     453,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,     0,   332,   333,   334,     0,     0,   337,   338,
     339,   340,   454,     0,   455,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   457,   458,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
     462,   463,   464,   465,   466,     0,   467,     0,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,    59,
     551,   480,   481,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   482,   483,   484,     0,    13,     0,     0,
     485,   486,     0,     0,   428,   429,   430,   431,   432,     0,
     487,   965,   488,   489,   433,   284,   435,     0,     0,     0,
     438,     0,     0,     0,     0,     0,     0,     0,   440,     0,
       0,     0,     0,     0,   443,     0,     0,   444,     0,     0,
     445,     0,     0,     0,   448,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   550,     0,     0,   452,   310,   311,
     312,     0,   314,   315,   316,   317,   318,   453,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,     0,
     332,   333,   334,     0,     0,   337,   338,   339,   340,   454,
       0,   455,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   457,   458,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,   462,   463,   464,
     465,   466,     0,   467,     0,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,    59,   551,   480,   481,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     482,   483,   484,     0,    13,     0,     0,   485,   486,     0,
       0,   428,   429,   430,   431,   432,     0,   487,  1003,   488,
     489,   433,   284,   435,     0,     0,     0,   438,     0,     0,
       0,     0,     0,     0,     0,   440,     0,     0,     0,     0,
       0,   443,     0,     0,   444,     0,     0,   445,     0,     0,
       0,   448,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   550,     0,     0,   452,   310,   311,   312,     0,   314,
     315,   316,   317,   318,   453,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,     0,   332,   333,   334,
       0,     0,   337,   338,   339,   340,   454,     0,   455,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   457,   458,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,   462,   463,   464,   465,   466,     0,
     467,     0,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,    59,   551,   480,   481,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1005,     0,   482,   483,   484,
       0,    13,     0,     0,   485,   486,     0,     0,   428,   429,
     430,   431,   432,     0,   487,     0,   488,   489,   433,   284,
     435,     0,     0,     0,   438,     0,     0,     0,     0,     0,
       0,     0,   440,     0,     0,     0,     0,     0,   443,     0,
       0,   444,     0,     0,   445,     0,     0,     0,   448,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   550,     0,
       0,   452,   310,   311,   312,     0,   314,   315,   316,   317,
     318,   453,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,     0,   332,   333,   334,     0,     0,   337,
     338,   339,   340,   454,     0,   455,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   457,   458,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,   462,   463,   464,   465,   466,     0,   467,     0,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
      59,   551,   480,   481,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   482,   483,   484,     0,    13,     0,
       0,   485,   486,     0,     0,   428,   429,   430,   431,   432,
       0,   487,  1038,   488,   489,   433,   284,   435,     0,     0,
       0,   438,     0,     0,     0,     0,     0,     0,     0,   440,
       0,     0,     0,     0,     0,   443,     0,     0,   444,     0,
       0,   445,     0,     0,     0,   448,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   550,     0,     0,   452,   310,
     311,   312,     0,   314,   315,   316,   317,   318,   453,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
       0,   332,   333,   334,     0,     0,   337,   338,   339,   340,
     454,     0,   455,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   457,   458,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,   462,   463,
     464,   465,   466,     0,   467,     0,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,    59,   551,   480,
     481,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   482,   483,   484,     0,    13,     0,     0,   485,   486,
       0,     0,   428,   429,   430,   431,   432,     0,   487,  1053,
     488,   489,   433,   284,   435,     0,     0,     0,   438,     0,
       0,     0,     0,     0,     0,     0,   440,     0,     0,     0,
       0,     0,   443,     0,     0,   444,     0,     0,   445,     0,
       0,     0,   448,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   550,     0,     0,   452,   310,   311,   312,     0,
     314,   315,   316,   317,   318,   453,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,     0,   332,   333,
     334,     0,     0,   337,   338,   339,   340,   454,     0,   455,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   457,   458,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,     0,   462,   463,   464,   465,   466,
       0,   467,     0,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,    59,   551,   480,   481,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   482,   483,
     484,     0,    13,     0,     0,   485,   486,     0,     0,     0,
       0,     0,     0,  1199,     0,   487,     0,   488,   489,     0,
     284,   428,   429,   430,   431,   432,     0,     0,     0,     0,
       0,   433,     0,   435,     0,     0,     0,   438,     0,     0,
       0,     0,     0,     0,     0,   440,     0,     0,     0,     0,
       0,   443,     0,     0,   444,     0,     0,   445,     0,     0,
       0,   448,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   550,     0,     0,   452,   310,   311,   312,     0,   314,
     315,   316,   317,   318,   453,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,     0,   332,   333,   334,
       0,     0,   337,   338,   339,   340,   454,     0,   455,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   457,   458,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,   462,   463,   464,   465,   466,     0,
     467,     0,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,    59,   551,   480,   481,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   482,   483,   484,
       0,    13,     0,     0,   485,   486,     0,     0,   428,   429,
     430,   431,   432,     0,   487,  1213,   488,   489,   433,   284,
     435,     0,     0,     0,   438,     0,     0,     0,     0,     0,
       0,     0,   440,     0,     0,     0,     0,     0,   443,     0,
       0,   444,     0,     0,   445,     0,     0,     0,   448,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   550,     0,
       0,   452,   310,   311,   312,     0,   314,   315,   316,   317,
     318,   453,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,     0,   332,   333,   334,     0,     0,   337,
     338,   339,   340,   454,     0,   455,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   457,   458,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,   462,   463,   464,   465,   466,     0,   467,     0,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
      59,   551,   480,   481,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   482,   483,   484,     0,    13,     0,
       0,   485,   486,     0,     0,   428,   429,   430,   431,   432,
       0,   487,  1222,   488,   489,   433,   284,   435,     0,     0,
       0,   438,     0,     0,     0,     0,     0,     0,     0,   440,
       0,     0,     0,     0,     0,   443,     0,     0,   444,     0,
       0,   445,     0,     0,     0,   448,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   550,     0,     0,   452,   310,
     311,   312,     0,   314,   315,   316,   317,   318,   453,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
       0,   332,   333,   334,     0,     0,   337,   338,   339,   340,
     454,     0,   455,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   457,   458,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,   462,   463,
     464,   465,   466,     0,   467,     0,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,    59,   551,   480,
     481,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   482,   483,   484,     0,    13,     0,     0,   485,   486,
       0,     0,   428,   429,   430,   431,   432,     0,   487,  1249,
     488,   489,   433,   284,   435,     0,     0,     0,   438,     0,
       0,     0,     0,     0,     0,     0,   440,     0,     0,     0,
       0,     0,   443,     0,     0,   444,     0,     0,   445,     0,
       0,     0,   448,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   550,     0,     0,   452,   310,   311,   312,     0,
     314,   315,   316,   317,   318,   453,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,     0,   332,   333,
     334,     0,     0,   337,   338,   339,   340,   454,     0,   455,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   457,   458,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,     0,   462,   463,   464,   465,   466,
       0,   467,     0,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,    59,   551,   480,   481,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   482,   483,
     484,     0,    13,     0,     0,   485,   486,     0,     0,   428,
     429,   430,   431,   432,     0,   487,  1304,   488,   489,   433,
     284,   435,     0,     0,     0,   438,     0,     0,     0,     0,
       0,     0,     0,   440,     0,     0,     0,     0,     0,   443,
       0,     0,   444,     0,     0,   445,     0,     0,     0,   448,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   550,
       0,     0,   452,   310,   311,   312,     0,   314,   315,   316,
     317,   318,   453,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,     0,   332,   333,   334,     0,     0,
     337,   338,   339,   340,   454,     0,   455,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   457,
     458,     0,     0,     0,     0,     0,     0,     0,  1332,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,     0,     0,     0,     0,     0,
       0,     0,   462,   463,   464,   465,   466,     0,   467,     0,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,    59,   551,   480,   481,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   482,   483,   484,     0,    13,
       0,     0,   485,   486,     0,     0,   428,   429,   430,   431,
     432,     0,   487,     0,   488,   489,   433,   284,   435,     0,
       0,     0,   438,     0,     0,     0,     0,     0,     0,     0,
     440,     0,     0,     0,     0,     0,   443,     0,     0,   444,
       0,     0,   445,     0,     0,     0,   448,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   550,     0,     0,   452,
     310,   311,   312,     0,   314,   315,   316,   317,   318,   453,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   332,   333,   334,     0,     0,   337,   338,   339,
     340,   454,     0,   455,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   457,   458,     0,     0,
       0,     0,     0,     0,     0,  1358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,     0,   462,
     463,   464,   465,   466,     0,   467,     0,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,    59,   551,
     480,   481,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   482,   483,   484,     0,    13,     0,     0,   485,
     486,     0,     0,   428,   429,   430,   431,   432,     0,   487,
       0,   488,   489,   433,   284,   435,     0,     0,     0,   438,
       0,     0,     0,     0,     0,     0,     0,   440,     0,     0,
       0,     0,     0,   443,     0,     0,   444,     0,     0,   445,
       0,     0,     0,   448,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   550,     0,     0,   452,   310,   311,   312,
       0,   314,   315,   316,   317,   318,   453,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,     0,   332,
     333,   334,     0,     0,   337,   338,   339,   340,   454,     0,
     455,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   457,   458,     0,     0,     0,     0,     0,
       0,     0,  1359,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,     0,     0,     0,   462,   463,   464,   465,
     466,     0,   467,     0,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,    59,   551,   480,   481,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   482,
     483,   484,     0,    13,     0,     0,   485,   486,     0,     0,
     428,   429,   430,   431,   432,     0,   487,     0,   488,   489,
     433,   284,   435,     0,     0,     0,   438,     0,     0,     0,
       0,     0,     0,     0,   440,     0,     0,     0,     0,     0,
     443,     0,     0,   444,     0,     0,   445,     0,     0,     0,
     448,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     550,     0,     0,   452,   310,   311,   312,     0,   314,   315,
     316,   317,   318,   453,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,     0,   332,   333,   334,     0,
       0,   337,   338,   339,   340,   454,     0,   455,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     457,   458,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,   462,   463,   464,   465,   466,     0,   467,
       0,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,    59,   551,   480,   481,     0,     0,     0,   -68,
       0,   665,     0,     0,     0,     0,     0,   304,     0,     0,
     698,   699,     0,   305,     0,     0,   482,   483,   484,   306,
      13,     0,     0,   485,   486,     0,     0,     0,     0,   307,
       0,     0,     0,   487,     0,   488,   489,   308,   284,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   309,     0,     0,     0,     0,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
       0,     0,     0,     0,   700,   701,   702,   703,   704,   705,
     706,   707,   708,   709,   710,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,     0,
       0,     0,   724,   725,   726,   727,   728,   729,    58,     0,
     730,   731,   732,   733,   734,   735,   736,     0,     0,     0,
       0,   343,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   737,   738,     0,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   304,     0,     0,     0,     0,
       0,   305,     0,     0,   749,   750,     0,   306,   344,     0,
       0,     0,     0,     0,     0,     0,     0,   307,     0,     0,
       0,     0,     0,     0,     0,   308,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     309,     0,     0,     0,     0,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   304,     0,     0,     0,     0,
       0,   305,     0,     0,     0,     0,     0,   306,     0,     0,
       0,     0,     0,     0,     0,     0,    58,   307,     0,     0,
       0,     0,     0,     0,     0,   308,     0,     0,     0,   343,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     309,     0,     0,    59,     0,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   698,   699,
       0,     0,     0,     0,     0,     0,   344,     0,     0,     0,
       0,   586,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   591,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   700,   701,   702,   703,   704,   705,   706,   707,
     708,   709,   710,   711,   712,   713,   714,   715,   716,   717,
     718,   818,   720,   721,   722,   723,   344,     0,   592,     0,
     724,   725,   726,   727,   728,   729,   698,   699,   730,   731,
     732,   733,   734,   735,   736,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   698,   699,     0,     0,     0,
     819,   738,     0,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   749,   750,     0,     0,     0,     0,     0,   976,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     700,   701,   702,   703,   704,   705,   706,   707,   708,   709,
     710,   711,   712,   713,   714,   715,   716,   717,   718,   818,
     720,   721,   722,   723,     0,     0,     0,     0,   724,   725,
     726,   727,   728,   729,     0,     0,   730,   731,   732,   733,
     734,   735,   736,     0,     0,     0,     0,   708,   709,   710,
     711,   712,     0,     0,   715,   716,   717,   718,     0,   720,
     721,   722,   723,     0,     0,     0,     0,   724,     0,   726,
     727,     0,     0,     0,     0,     0,     0,     0,   819,   738,
       0,   739,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   304,     0,     0,     0,     0,     0,   305,     0,     0,
     749,   750,     0,   306,     0,     0,     0,  1126,     0,     0,
       0,     0,     0,   307,     0,     0,     0,     0,     0,     0,
       0,   308,   741,   742,   743,   744,   745,   746,   747,   748,
       0,     0,     0,     0,     0,     0,   309,     0,     0,   749,
     750,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   698,   699,     0,     0,     0,     0,
       0,   304,     0,     0,     0,     0,     0,   305,     0,     0,
       0,     0,     0,   306,     0,     0,     0,     0,     0,     0,
       0,     0,    58,   307,     0,     0,     0,     0,     0,     0,
       0,   308,   698,   699,     0,   343,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   309,     0,     0,    59,
       0,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,     0,     0,   708,   709,   710,   711,
     712,     0,   344,   715,   716,   717,   718,     0,   720,   721,
     722,   723,     0,     0,     0,     0,   724,     0,   726,   727,
       0,     0,     0,     0,   730,   731,   732,     0,     0,     0,
     736,     0,    58,     0,   708,   709,   710,   711,   712,     0,
       0,   715,   716,   717,   718,   343,   720,   721,   722,   723,
     698,   699,     0,     0,   724,     0,   726,   727,     0,   591,
       0,     0,   730,   731,   732,     0,     0,   738,   736,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   748,     0,
       0,     0,     0,     0,     0,   698,   699,     0,   749,   750,
       0,     0,     0,     0,     0,  1118,     0,     0,     0,     0,
       0,     0,   344,     0,     0,   738,     0,   739,   740,   741,
     742,   743,   744,   745,   746,   747,   748,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   749,   750,     0,     0,
       0,     0,     0,  1349,     0,     0,     0,     0,     0,     0,
       0,     0,   708,   709,   710,   711,   712,     0,     0,   715,
     716,   717,   718,     0,   720,   721,   722,   723,     0,     0,
       0,     0,   724,     0,   726,   727,     0,     0,     0,     0,
     730,   731,   732,     0,     0,     0,   736,   708,   709,   710,
     711,   712,     0,     0,   715,   716,   717,   718,     0,   720,
     721,   722,   723,   698,   699,     0,     0,   724,     0,   726,
     727,     0,     0,     0,     0,   730,   731,   732,     0,     0,
       0,   736,     0,   738,     0,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,     0,     0,     0,   698,   699,
       0,     0,     0,     0,   749,   750,     0,     0,     0,     0,
       0,  1394,     0,     0,     0,     0,     0,     0,   738,     0,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   749,
     750,     0,     0,     0,     0,     0,  1396,     0,     0,     0,
       0,     0,     0,     0,     0,   708,   709,   710,   711,   712,
       0,     0,   715,   716,   717,   718,     0,   720,   721,   722,
     723,     0,     0,     0,     0,   724,     0,   726,   727,     0,
       0,     0,     0,   730,   731,   732,     0,     0,     0,   736,
     708,   709,   710,   711,   712,   698,   699,   715,   716,   717,
     718,     0,   720,   721,   722,   723,     0,     0,     0,     0,
     724,     0,   726,   727,     0,     0,     0,     0,   730,   731,
     732,     0,     0,     0,   736,     0,   738,     0,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   749,   750,     0,
       0,   760,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   738,     0,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   749,   750,     0,     0,   770,   708,   709,   710,
     711,   712,   698,   699,   715,   716,   717,   718,     0,   720,
     721,   722,   723,     0,     0,     0,     0,   724,     0,   726,
     727,     0,     0,     0,     0,   730,   731,   732,     0,     0,
       0,   736,     0,     0,     0,     0,     0,   698,   699,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   738,     0,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   749,
     750,     0,     0,   786,   708,   709,   710,   711,   712,     0,
       0,   715,   716,   717,   718,     0,   720,   721,   722,   723,
       0,     0,     0,     0,   724,     0,   726,   727,     0,     0,
       0,     0,   730,   731,   732,     0,     0,     0,   736,   708,
     709,   710,   711,   712,   698,   699,   715,   716,   717,   718,
       0,   720,   721,   722,   723,     0,     0,     0,     0,   724,
       0,   726,   727,     0,     0,     0,     0,   730,   731,   732,
       0,     0,     0,   736,     0,   738,     0,   739,   740,   741,
     742,   743,   744,   745,   746,   747,   748,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   749,   750,     0,     0,
     800,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     738,     0,   739,   740,   741,   742,   743,   744,   745,   746,
     747,   748,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   749,   750,     0,     0,   875,   708,   709,   710,   711,
     712,   698,   699,   715,   716,   717,   718,     0,   720,   721,
     722,   723,     0,     0,     0,     0,   724,     0,   726,   727,
       0,     0,     0,     0,   730,   731,   732,     0,     0,     0,
     736,     0,     0,     0,     0,     0,   698,   699,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   738,     0,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   748,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   749,   750,
       0,     0,   998,   708,   709,   710,   711,   712,     0,     0,
     715,   716,   717,   718,     0,   720,   721,   722,   723,     0,
       0,     0,     0,   724,     0,   726,   727,     0,     0,     0,
       0,   730,   731,   732,     0,     0,     0,   736,   708,   709,
     710,   711,   712,   698,   699,   715,   716,   717,   718,     0,
     720,   721,   722,   723,     0,     0,     0,     0,   724,     0,
     726,   727,     0,     0,     0,     0,   730,   731,   732,     0,
       0,     0,   736,     0,   738,     0,   739,   740,   741,   742,
     743,   744,   745,   746,   747,   748,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   749,   750,     0,     0,  1016,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   738,
       0,   739,   740,   741,   742,   743,   744,   745,   746,   747,
     748,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     749,   750,     0,     0,  1020,   708,   709,   710,   711,   712,
     698,   699,   715,   716,   717,   718,     0,   720,   721,   722,
     723,     0,     0,     0,     0,   724,     0,   726,   727,     0,
       0,     0,     0,   730,   731,   732,     0,     0,     0,   736,
       0,     0,     0,     0,     0,   698,   699,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   738,     0,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   749,   750,     0,
       0,  1022,   708,   709,   710,   711,   712,     0,     0,   715,
     716,   717,   718,     0,   720,   721,   722,   723,     0,     0,
       0,     0,   724,     0,   726,   727,     0,     0,     0,     0,
     730,   731,   732,     0,     0,     0,   736,   708,   709,   710,
     711,   712,   698,   699,   715,   716,   717,   718,     0,   720,
     721,   722,   723,     0,     0,     0,     0,   724,     0,   726,
     727,     0,     0,     0,     0,   730,   731,   732,     0,     0,
       0,   736,     0,   738,     0,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   749,   750,     0,     0,  1027,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   738,     0,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   749,
     750,     0,     0,  1028,   708,   709,   710,   711,   712,   698,
     699,   715,   716,   717,   718,     0,   720,   721,   722,   723,
       0,     0,     0,     0,   724,     0,   726,   727,     0,     0,
       0,     0,   730,   731,   732,     0,     0,     0,   736,     0,
       0,     0,     0,     0,   698,   699,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   738,     0,   739,   740,   741,
     742,   743,   744,   745,   746,   747,   748,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   749,   750,     0,     0,
    1029,   708,   709,   710,   711,   712,     0,     0,   715,   716,
     717,   718,     0,   720,   721,   722,   723,     0,     0,     0,
       0,   724,     0,   726,   727,     0,     0,     0,     0,   730,
     731,   732,     0,     0,     0,   736,   708,   709,   710,   711,
     712,   698,   699,   715,   716,   717,   718,     0,   720,   721,
     722,   723,     0,     0,     0,     0,   724,     0,   726,   727,
       0,     0,     0,     0,   730,   731,   732,     0,     0,     0,
     736,     0,   738,     0,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   749,   750,     0,     0,  1030,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   738,     0,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   748,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   749,   750,
       0,     0,  1031,   708,   709,   710,   711,   712,   698,   699,
     715,   716,   717,   718,     0,   720,   721,   722,   723,     0,
       0,     0,     0,   724,     0,   726,   727,     0,     0,     0,
       0,   730,   731,   732,     0,     0,     0,   736,     0,     0,
       0,     0,     0,   698,   699,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   738,     0,   739,   740,   741,   742,
     743,   744,   745,   746,   747,   748,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   749,   750,     0,     0,  1032,
     708,   709,   710,   711,   712,     0,     0,   715,   716,   717,
     718,     0,   720,   721,   722,   723,     0,     0,     0,     0,
     724,     0,   726,   727,     0,     0,     0,     0,   730,   731,
     732,     0,     0,     0,   736,   708,   709,   710,   711,   712,
     698,   699,   715,   716,   717,   718,     0,   720,   721,   722,
     723,     0,     0,     0,     0,   724,     0,   726,   727,     0,
       0,     0,     0,   730,   731,   732,     0,     0,     0,   736,
       0,   738,     0,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   749,   750,     0,     0,  1151,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   738,     0,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   749,   750,     0,
       0,  1252,   708,   709,   710,   711,   712,   698,   699,   715,
     716,   717,   718,     0,   720,   721,   722,   723,     0,     0,
       0,     0,   724,     0,   726,   727,     0,     0,     0,     0,
     730,   731,   732,     0,     0,     0,   736,     0,     0,     0,
       0,     0,   698,   699,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   738,     0,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   749,   750,     0,     0,  1263,   708,
     709,   710,   711,   712,     0,     0,   715,   716,   717,   718,
       0,   720,   721,   722,   723,     0,     0,     0,     0,   724,
       0,   726,   727,     0,     0,     0,     0,   730,   731,   732,
       0,     0,     0,   736,   708,   709,   710,   711,   712,   698,
     699,   715,   716,   717,   718,     0,   720,   721,   722,   723,
       0,     0,     0,     0,   724,     0,   726,   727,     0,     0,
       0,     0,   730,   731,   732,     0,     0,     0,   736,     0,
     738,     0,   739,   740,   741,   742,   743,   744,   745,   746,
     747,   748,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   749,   750,     0,     0,  1264,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   738,     0,   739,   740,   741,
     742,   743,   744,   745,   746,   747,   748,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   749,   750,     0,     0,
    1280,   708,   709,   710,   711,   712,   698,   699,   715,   716,
     717,   718,     0,   720,   721,   722,   723,     0,     0,     0,
       0,   724,     0,   726,   727,     0,     0,     0,     0,   730,
     731,   732,     0,     0,     0,   736,     0,     0,     0,     0,
       0,   698,   699,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   738,     0,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   749,   750,     0,     0,  1282,   708,   709,
     710,   711,   712,     0,     0,   715,   716,   717,   718,     0,
     720,   721,   722,   723,     0,     0,     0,     0,   724,     0,
     726,   727,     0,     0,     0,     0,   730,   731,   732,     0,
       0,     0,   736,   708,   709,   710,   711,   712,   698,   699,
     715,   716,   717,   718,     0,   720,   721,   722,   723,     0,
       0,     0,     0,   724,     0,   726,   727,     0,     0,     0,
       0,   730,   731,   732,     0,     0,     0,   736,     0,   738,
       0,   739,   740,   741,   742,   743,   744,   745,   746,   747,
     748,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     749,   750,     0,     0,  1284,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   738,     0,   739,   740,   741,   742,
     743,   744,   745,   746,   747,   748,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   749,   750,     0,     0,  1288,
     708,   709,   710,   711,   712,   698,   699,   715,   716,   717,
     718,     0,   720,   721,   722,   723,     0,     0,     0,     0,
     724,     0,   726,   727,     0,     0,     0,     0,   730,   731,
     732,     0,     0,     0,   736,     0,     0,     0,     0,     0,
     698,   699,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   738,     0,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   749,   750,     0,     0,  1337,   708,   709,   710,
     711,   712,     0,     0,   715,   716,   717,   718,     0,   720,
     721,   722,   723,     0,     0,     0,     0,   724,     0,   726,
     727,     0,     0,     0,     0,   730,   731,   732,     0,     0,
       0,   736,   708,   709,   710,   711,   712,   698,   699,   715,
     716,   717,   718,     0,   720,   721,   722,   723,     0,     0,
       0,     0,   724,     0,   726,   727,     0,     0,     0,     0,
     730,   731,   732,     0,     0,     0,   736,     0,   738,     0,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   749,
     750,     0,     0,  1338,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   738,     0,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   749,   750,     0,     0,  1339,   708,
     709,   710,   711,   712,   698,   699,   715,   716,   717,   718,
       0,   720,   721,   722,   723,     0,     0,     0,     0,   724,
       0,   726,   727,     0,     0,     0,     0,   730,   731,   732,
       0,     0,     0,   736,     0,     0,     0,     0,     0,   698,
     699,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     738,     0,   739,   740,   741,   742,   743,   744,   745,   746,
     747,   748,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   749,   750,     0,     0,  1343,   708,   709,   710,   711,
     712,     0,     0,   715,   716,   717,   718,     0,   720,   721,
     722,   723,     0,     0,     0,     0,   724,     0,   726,   727,
       0,     0,     0,     0,   730,   731,   732,     0,     0,     0,
     736,   708,   709,   710,   711,   712,   698,   699,   715,   716,
     717,   718,     0,   720,   721,   722,   723,     0,     0,     0,
       0,   724,     0,   726,   727,     0,     0,     0,     0,   730,
     731,   732,     0,     0,     0,   736,     0,   738,     0,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   748,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   749,   750,
       0,     0,  1348,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   738,     0,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   749,   750,     0,     0,  1353,   708,   709,
     710,   711,   712,   698,   699,   715,   716,   717,   718,     0,
     720,   721,   722,   723,     0,     0,     0,     0,   724,     0,
     726,   727,     0,     0,     0,     0,   730,   731,   732,     0,
       0,     0,   736,     0,     0,     0,     0,     0,   698,   699,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   738,
       0,   739,   740,   741,   742,   743,   744,   745,   746,   747,
     748,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     749,   750,     0,     0,  1387,   708,   709,   710,   711,   712,
       0,     0,   715,   716,   717,   718,     0,   720,   721,   722,
     723,     0,     0,     0,     0,   724,     0,   726,   727,     0,
       0,     0,     0,   730,   731,   732,     0,     0,     0,   736,
     708,   709,   710,   711,   712,   698,   699,   715,   716,   717,
     718,     0,   720,   721,   722,   723,     0,     0,     0,     0,
     724,     0,   726,   727,     0,     0,     0,     0,   730,   731,
     732,     0,     0,     0,   736,     0,   738,     0,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   749,   750,   791,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   738,     0,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   749,   750,  1097,     0,     0,   708,   709,   710,
     711,   712,   698,   699,   715,   716,   717,   718,     0,   720,
     721,   722,   723,     0,     0,     0,     0,   724,     0,   726,
     727,     0,     0,     0,     0,   730,   731,   732,     0,     0,
       0,   736,     0,     0,     0,     0,     0,   698,   699,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   738,     0,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   749,
     750,  1115,     0,     0,   708,   709,   710,   711,   712,     0,
       0,   715,   716,   717,   718,     0,   720,   721,   722,   723,
       0,     0,     0,     0,   724,     0,   726,   727,     0,     0,
       0,     0,   730,   731,   732,     0,     0,     0,   736,   708,
     709,   710,   711,   712,     0,     0,   715,   716,   717,   718,
       0,   720,   721,   722,   723,   698,   699,     0,     0,   724,
       0,   726,   727,     0,     0,     0,     0,   730,   731,   732,
       0,     0,     0,   736,     0,   738,     0,   739,   740,   741,
     742,   743,   744,   745,   746,   747,   748,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   749,   750,  1220,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     738,     0,   739,   740,   741,   742,   743,   744,   745,   746,
     747,   748,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   749,   750,  1225,     0,     0,     0,     0,     0,   700,
     701,   702,   703,   704,   705,   706,   707,   708,   709,   710,
     711,   712,   713,   714,   715,   716,   717,   718,   818,   720,
     721,   722,   723,  -332,     0,   229,   230,   724,   725,   726,
     727,   728,   729,     0,     0,   730,   731,   732,   733,   734,
     735,   736,   231,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     698,   699,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   819,   738,     0,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   749,
     750,     0,     0,     0,     0,     0,     0,     0,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,     0,     0,   250,
     251,   252,     0,     0,     0,     0,     0,     0,   253,   254,
     255,   256,   257,     0,     0,   258,   259,   260,   261,   262,
     263,   264,   708,   709,   710,   711,   712,   698,   699,   715,
     716,   717,   718,     0,   720,   721,   722,   723,     0,     0,
       0,     0,   724,     0,   726,   727,     0,     0,   864,     0,
     730,   731,   732,     0,     0,     0,   736,     0,   265,     0,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
       0,     0,   276,   277,     0,     0,     0,     0,     0,   278,
     279,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   738,     0,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   749,   750,     0,     0,     0,   708,
     709,   710,   711,   712,   698,   699,   715,   716,   717,   718,
       0,   720,   721,   722,   723,     0,     0,     0,     0,   724,
       0,   726,   727,     0,     0,  1039,     0,   730,   731,   732,
       0,     0,     0,   736,     0,     0,     0,     0,     0,   698,
     699,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     738,     0,   739,   740,   741,   742,   743,   744,   745,   746,
     747,   748,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   749,   750,     0,     0,     0,   708,   709,   710,   711,
     712,     0,     0,   715,   716,   717,   718,     0,   720,   721,
     722,   723,     0,     0,     0,     0,   724,     0,   726,   727,
       0,     0,     0,     0,   730,   731,   732,     0,     0,     0,
     736,   708,   709,   710,   711,   712,   698,   699,   715,   716,
     717,   718,     0,   720,   721,   722,   723,     0,     0,     0,
       0,   724,     0,   726,   727,     0,     0,     0,     0,   730,
     731,   732,     0,     0,     0,   736,     0,   738,  1105,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   748,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   749,   750,
       0,     0,     0,  1188,     0,     0,     0,     0,     0,     0,
       0,     0,   738,     0,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   749,   750,     0,     0,     0,   708,   709,
     710,   711,   712,   698,   699,   715,   716,   717,   718,     0,
     720,   721,   722,   723,     0,     0,     0,     0,   724,     0,
     726,   727,     0,     0,     0,     0,   730,   731,   732,     0,
       0,     0,   736,     0,     0,     0,     0,     0,   698,   699,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   738,
       0,   739,   740,   741,   742,   743,   744,   745,   746,   747,
     748,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     749,   750,     0,     0,     0,   708,   709,   710,   711,   712,
       0,     0,   715,   716,   717,   718,     0,   720,   721,   722,
     723,     0,     0,     0,     0,   724,     0,   726,   727,     0,
       0,     0,     0,   730,   731,   732,     0,     0,     0,  -697,
     708,   709,   710,   711,   712,   698,   699,   715,   716,   717,
     718,     0,   720,   721,   722,   723,     0,     0,     0,     0,
     724,     0,   726,   727,     0,     0,     0,     0,   730,   731,
     732,     0,     0,     0,   698,   699,   738,     0,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   749,   750,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   738,     0,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   749,   750,     0,     0,     0,   708,   709,   710,
     711,   712,     0,     0,   715,   716,   717,   718,     0,   720,
     721,   722,   723,     0,     0,     0,     0,   724,     0,   726,
     727,   698,   699,     0,     0,   730,   708,   709,   710,   711,
     712,     0,     0,   715,   716,   717,   718,     0,   720,   721,
     722,   723,     0,     0,     0,     0,   724,     0,   726,   727,
     698,   699,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   749,
     750,     0,     0,     0,     0,     0,     0,     0,     0,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   748,     0,
       0,     0,     0,   708,   709,   710,   711,   712,   749,   750,
     715,   716,   717,   718,     0,   720,   721,   722,   723,     0,
       0,     0,     0,   724,     0,   726,   727,     0,     0,     0,
       0,     0,   708,   709,   710,   711,   712,     0,     0,   715,
       0,     0,   718,     0,   720,   721,   722,   723,     0,     0,
       0,     0,   724,     0,   726,   727,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   893,     0,     0,   742,
     743,   744,   745,   746,   747,   748,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   749,   750,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   897,   742,   743,
     744,   745,   746,   747,   748,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   749,   750,   310,   311,   312,     0,
     314,   315,   316,   317,   318,   453,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,     0,   332,   333,
     334,     0,     0,   337,   338,   339,   340,   310,   311,   312,
       0,   314,   315,   316,   317,   318,   453,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,     0,   332,
     333,   334,     0,     0,   337,   338,   339,   340,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   894,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   895,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   898,     0,     0,     0,     0,     0,   181,
       0,     0,   310,   311,   312,   899,   314,   315,   316,   317,
     318,   453,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,     0,   332,   333,   334,     0,     0,   337,
     338,   339,   340,   182,     0,   183,     0,   184,   185,   186,
     187,   188,     0,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,     0,   200,   201,   202,     0,     0,
     203,   204,   205,   206,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     208,     0,     0,     0,     0,     0,     0,     0,  1102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   209
};

static const yytype_int16 yycheck[] =
{
      13,    14,   211,   225,   415,   369,   555,   419,   575,   666,
     380,   471,   161,   577,   569,   574,   571,   884,   573,  1042,
       7,   459,   460,   461,   777,   856,   779,   434,   781,   427,
      19,   862,   375,   225,    52,    18,    19,  1154,   408,    21,
       0,    19,    19,   166,    14,    15,     6,    52,    49,   456,
      63,    64,    65,   103,   128,   138,   620,   621,    32,   123,
     122,    45,    56,   125,   126,    20,    21,   166,    62,    29,
     151,    31,   123,    33,    56,   156,  1318,   166,    32,    39,
     166,   645,   646,   140,   141,   142,    49,   139,   211,    49,
     181,   104,   105,   106,   107,    55,   159,   123,   123,   469,
     470,   125,   126,    20,    21,   185,   212,   133,   133,   189,
     209,    14,    15,   139,   123,  1357,   184,    77,   182,   103,
     211,   185,   211,   687,   133,   211,    33,   208,    91,   212,
     181,   182,   184,   184,   181,    32,   187,   211,   166,    99,
     100,   211,   204,   205,   212,   367,  1169,   148,   297,   154,
     185,   208,   559,    61,   181,    62,   182,   182,   380,   114,
     115,   166,    59,    60,   211,   166,   182,   122,   218,   124,
     125,   126,   127,   182,  1041,   367,   211,   132,   187,   207,
     204,   205,  1299,   166,   211,   182,   408,   751,   410,   159,
      20,    21,   181,   211,   164,   211,   166,   114,   115,   169,
    1340,   524,   609,   181,   181,   122,   181,  1038,   125,   126,
     127,   193,   225,   187,   621,   132,    20,    21,   205,   213,
     184,   189,   204,   120,   547,   132,   213,   124,   437,  1369,
    1253,   205,   139,   187,   194,   125,   126,   207,   176,   181,
     214,   648,   451,   211,   808,   205,   810,   469,   470,   204,
     205,   211,   166,   167,   168,   166,   159,   627,   696,   166,
     123,   164,   139,   166,   154,   663,   169,   665,   123,   208,
     133,   123,   211,   211,   139,   213,   166,   647,   133,   178,
     194,   133,   112,   113,   114,   115,   183,   204,   205,   139,
     187,   198,   122,   190,   124,   125,   126,   127,   148,   123,
     207,   166,   132,   207,   134,   135,   181,   206,   205,   133,
     114,   115,   211,   189,   204,   205,   166,   214,   122,   182,
     124,   125,   126,   127,    20,    21,   184,   182,   132,   187,
     182,   344,  1199,   208,  1087,   211,   891,  1168,   560,   561,
     562,   177,   564,   565,   180,    46,   568,   188,   570,  1180,
     572,   694,   574,   148,   367,   181,   763,   177,   182,   372,
     190,   191,   192,   193,   194,    66,   207,   380,   560,   561,
     562,   166,   564,   565,   204,   205,   568,   213,   570,   185,
     572,  1038,   208,   189,   181,   607,   190,   191,   192,   193,
     194,   211,   804,   213,   181,   408,  1053,   410,    24,   181,
     204,   205,   611,   188,    30,   627,   866,     4,     5,   206,
       7,   849,   178,   179,   159,   607,   188,   430,   114,   115,
     181,   208,   207,   632,   206,   647,   122,   994,   124,   125,
     126,   127,   189,   992,   204,   207,   132,   139,    35,  1192,
     206,    67,   166,   813,   181,   181,   148,   208,    63,    64,
      65,   153,   181,   181,   211,   166,   469,   470,   828,   829,
     181,   831,   671,   189,   166,   835,   185,   181,   181,  1033,
     189,   208,   208,    99,   166,   684,   698,   699,   206,   208,
     918,   919,   920,   181,   181,   211,   188,   208,  1052,   104,
     105,   106,   107,    32,   208,   208,   192,   193,   194,   869,
     181,   871,   724,   941,   942,   943,   181,   181,   204,   205,
     208,   208,  1067,   139,   181,   166,    56,   154,    56,    72,
      59,    60,    62,    76,    62,   181,   211,   208,  1092,   166,
     156,   157,   158,   208,   208,   181,    32,   140,   148,   142,
     166,   208,    95,    96,    97,    98,  1110,   560,   561,   562,
     206,   564,   565,   211,  1014,   568,   166,   570,   181,   572,
     206,   574,   188,    59,    60,   184,   184,   181,   148,   185,
     189,   189,   794,   189,    56,   797,   156,   184,    20,    21,
      62,   120,   189,   206,    11,   124,   166,   809,   207,   207,
     812,   813,   206,   184,   607,    22,    23,   185,   189,  1163,
     207,   189,   794,   154,   617,   797,   828,   829,   185,   831,
     759,   820,   189,   835,   627,   166,   207,   809,   154,   154,
     812,   154,   166,   181,   120,    32,   184,   123,   124,   187,
     166,   166,    56,   166,   647,    56,    56,   133,    62,    56,
     166,    62,    62,  1013,   183,    62,   170,   869,   187,   871,
     189,   190,    59,    60,   151,   207,   166,   185,   185,   156,
     212,   189,   189,   212,   185,   185,   205,   680,   189,   189,
     112,   113,   114,   115,   116,   214,    56,   119,   120,   121,
     122,   211,   124,   125,   126,   127,   182,   183,    86,    87,
     132,   187,   134,   135,   190,   185,  1066,   170,   171,   189,
     170,   171,   172,   173,  1068,   209,   210,   170,   212,   205,
     140,   141,   142,   120,    32,   211,   123,   124,   214,   166,
     167,   168,   140,   945,   170,   171,   133,   170,   171,   172,
      10,    11,    12,  1297,   103,   212,   212,    32,   182,  1303,
     156,    59,    60,   756,   186,   187,   188,   189,   190,   191,
     192,   193,   194,  1317,   212,    34,    34,   207,   980,   212,
    1172,   166,   204,   205,    59,    60,   166,   166,   213,   166,
     992,   206,    21,   166,   206,   182,   183,    42,   184,   212,
     187,   794,  1331,   190,   797,   207,   212,   369,   980,   184,
     133,  1013,    32,   207,  1358,   377,   809,   188,   205,   812,
     813,   188,   120,   188,   386,   188,   124,   214,    42,   188,
     188,   207,   188,  1362,   396,   828,   829,   188,   831,    59,
      60,   188,   835,   188,   406,   120,   188,   185,   166,   124,
     207,   206,   414,   207,   166,   166,   166,   207,   188,  1209,
    1252,   207,   424,   207,  1066,   166,   207,   188,   188,   188,
     207,   211,   434,   159,   207,   188,   869,   439,   871,   441,
    1069,   207,   207,   207,   188,   183,    36,     9,   450,   187,
     207,   189,   190,   207,   456,   457,   458,    65,   207,   188,
     120,    42,   210,  1294,   124,   211,   211,   205,   183,   471,
     205,   211,   187,   211,   189,   190,   214,   479,   211,   211,
     482,   483,   484,   485,   486,   487,   211,   211,   207,   207,
     205,   213,   208,   166,   496,   166,   206,   211,   184,   214,
     213,   213,   211,   211,   166,   166,   213,   181,   128,    13,
      20,    21,   207,   159,   182,   212,   210,   184,  1147,   156,
       7,  1353,   166,   183,   166,   189,   208,   187,    42,   189,
     190,   207,   181,   181,   213,   207,   166,   207,   188,     1,
    1330,   207,   207,   188,   207,   205,    66,   980,   207,   207,
     207,   166,   166,   189,   214,   211,   189,   559,   213,   992,
     189,   166,   166,   166,   207,   206,  1195,  1209,   207,  1211,
     166,   206,   206,   166,   206,   188,   207,   166,    32,  1208,
    1013,   207,   207,   211,   207,   207,   166,   211,   206,   208,
     206,   189,   189,    52,   211,   207,   207,   207,   207,  1211,
     602,   208,   112,   113,   114,   115,   116,   609,   673,   119,
     120,   121,   122,   213,   124,   125,   126,   127,   206,   621,
     206,   208,   132,   206,   134,   135,   628,   629,    79,   631,
     140,     1,   142,  1066,   636,    44,   133,    82,  1268,  1267,
     642,   223,    80,  1285,   881,   756,   648,  1317,  1268,  1268,
    1268,  1268,     1,  1206,  1026,   657,   658,   659,   660,   661,
     662,  1229,   664,  1122,   666,  1232,  1293,  1273,    52,  1259,
     542,  1050,   666,  1285,   421,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    -1,    -1,   430,  1330,  1314,
      -1,   430,    -1,    -1,   204,   205,    -1,    -1,   700,   701,
     702,   703,   704,   705,   706,   707,   708,   709,    -1,    -1,
     712,   713,   714,   715,   716,   717,    -1,   719,   720,    -1,
     722,   723,   724,   725,   726,   727,   728,   729,   730,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,   741,
     742,   743,   744,   745,   746,   747,   748,    -1,   750,    -1,
      -1,   753,    -1,    -1,    -1,    -1,    -1,  1386,    -1,    -1,
      -1,   763,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1209,    -1,  1211,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   811,
      -1,    -1,    -1,    -1,    -1,   817,   818,   819,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     852,   853,  1285,    -1,    -1,    -1,    -1,    -1,    -1,   861,
      -1,    -1,   864,    -1,   866,    -1,    -1,    -1,    -1,    -1,
      -1,   873,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   883,    -1,    -1,    -1,  1318,    -1,    -1,    -1,    -1,
      -1,   112,   113,   114,   115,   116,    -1,  1330,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,
     141,   142,    -1,    -1,  1357,   146,    -1,    -1,    -1,   112,
     113,   114,   115,   116,    -1,    -1,   119,   120,   121,   122,
      -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,
      -1,   134,   135,    -1,    -1,    -1,   958,   140,   141,   142,
     962,    -1,   183,   146,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,   205,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,  1000,    -1,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,  1014,    -1,    -1,  1017,    32,    -1,    -1,    -1,
      -1,   204,   205,    59,    60,    -1,    -1,    -1,    -1,   212,
      -1,    -1,    -1,  1035,  1036,  1037,    -1,  1039,    -1,    -1,
      -1,    -1,    -1,    59,    60,  1047,    -1,    -1,  1050,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    18,  1064,  1065,    -1,    -1,  1068,    24,    32,    -1,
    1072,    -1,    -1,    30,    -1,  1077,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,   120,    -1,    -1,  1089,   124,  1091,
      -1,    48,    -1,    -1,  1096,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,  1105,   120,    -1,    63,  1109,   124,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    -1,    -1,    -1,   183,    -1,    -1,
      -1,   187,  1154,   189,   190,    -1,   120,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   205,
      -1,   187,    -1,   189,   190,    -1,    -1,    -1,   214,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,
      -1,    -1,    -1,    -1,    -1,  1217,    -1,  1219,    -1,   183,
      -1,    -1,  1224,   187,    -1,   189,   190,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1238,    -1,    -1,    -1,
      -1,   205,  1244,  1245,  1246,    -1,  1248,    -1,    -1,  1251,
     214,    -1,   209,  1255,  1256,  1257,  1258,    -1,    -1,  1261,
      -1,    -1,    -1,    32,    -1,    -1,  1268,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1276,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,  1299,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1308,  1309,    -1,    -1,
       1,    -1,    -1,    -1,    -1,     6,    -1,     8,     9,    10,
    1322,    12,    -1,    14,    15,    16,    17,    18,    -1,    -1,
    1332,    -1,    -1,    24,    25,    26,    27,    28,    -1,    30,
      -1,    -1,  1344,    -1,    -1,    -1,    37,    38,    -1,    -1,
      41,   120,    43,    44,    -1,   124,    47,  1359,    49,    50,
      51,  1363,    53,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,  1374,    64,  1376,  1377,    67,    68,    69,    70,
    1382,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    -1,    95,    96,    97,    98,    99,    -1,
     101,   102,    -1,    -1,   183,    -1,    -1,    -1,   187,    -1,
     189,   190,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,   129,   130,
     131,    -1,    -1,    -1,    -1,   214,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,
     191,   192,    -1,   194,    -1,    -1,   197,   198,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,   209,   210,
     211,   212,   213,     1,    -1,    -1,    -1,    -1,     6,    -1,
       8,     9,    10,    -1,    12,    -1,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    -1,    -1,    41,    -1,    43,    44,    -1,    -1,    47,
      -1,    49,    50,    51,    -1,    53,    54,    -1,    -1,    57,
      58,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    -1,    95,    96,    97,
      98,    99,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,
     148,   149,   150,   151,    -1,   153,    32,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,   197,
     198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,
      -1,   209,   210,   211,   212,   213,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,   120,    -1,    44,    -1,   124,    47,
      -1,    -1,    50,    -1,    52,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    -1,    95,    96,    97,
      98,    99,    -1,   101,    -1,    -1,    -1,   183,    -1,    -1,
      -1,   187,    -1,   189,   190,    -1,   114,   115,    -1,    -1,
      -1,    -1,   120,    -1,    -1,    -1,   124,    -1,    -1,   205,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,
     148,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,   187,
      -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,   197,
     198,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,   207,
      -1,   209,   210,    -1,   212,    -1,   214,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,
      -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      47,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    -1,    -1,    95,    96,
      97,    98,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,   120,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     147,   148,   149,   150,   151,    32,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,   183,    -1,    -1,    -1,
     187,    -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,
     197,   198,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,
     207,    -1,   209,   210,    -1,   212,    -1,   214,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      26,    -1,    -1,    -1,    30,    32,    32,    -1,    -1,    -1,
      -1,    -1,    38,   120,    -1,    -1,    -1,   124,    44,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    70,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    -1,    95,
      96,    97,    98,    99,    -1,   101,   183,    -1,    -1,    -1,
     187,    -1,   189,   190,    -1,    -1,    -1,    -1,   114,   115,
      -1,    -1,    -1,   120,    -1,    -1,    -1,   124,   205,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,
      -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   147,   148,   149,   150,   151,    32,   153,    -1,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,   183,    -1,    -1,    -1,
     187,   187,   189,   190,   190,   191,   192,    -1,   194,    -1,
      -1,   197,   198,    -1,    -1,    -1,    -1,    -1,   205,   205,
      -1,   207,    -1,   209,   210,    -1,   212,   214,   214,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,   120,    -1,    -1,    -1,   124,    44,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    68,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,    -1,
      95,    96,    97,    98,    99,    -1,   101,   183,    -1,    -1,
      -1,   187,    -1,   189,   190,    -1,    -1,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   205,
      -1,    -1,    -1,    -1,   129,   130,   131,    -1,   214,    -1,
      -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,   191,   192,    -1,   194,
      -1,    -1,   197,   198,    -1,    -1,    14,    15,    16,    17,
      18,    -1,   207,    -1,   209,   210,    24,   212,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    -1,    95,    96,    97,
      98,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,   197,
     198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,
      -1,   209,   210,    -1,   212,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,
      -1,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,
      69,    70,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    -1,    -1,    95,    96,    97,    98,
      99,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   190,   191,   192,    -1,   194,    -1,    -1,   197,   198,
      -1,    -1,    14,    15,    16,    17,    18,    -1,   207,    -1,
     209,   210,    24,   212,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    -1,    -1,    95,    96,    97,    98,    99,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,   191,
     192,    -1,   194,    -1,    -1,   197,   198,    -1,    -1,    14,
      15,    16,    17,    18,    -1,   207,    -1,   209,   210,    24,
     212,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    68,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,    -1,
      95,    96,    97,    98,    99,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,   191,   192,    -1,   194,
      -1,    -1,   197,   198,    -1,    -1,    14,    15,    16,    17,
      18,    -1,   207,    -1,   209,   210,    24,   212,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    -1,    95,    96,    97,
      98,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,   197,
     198,    -1,    -1,    14,    15,    16,    17,    18,    -1,   207,
      -1,   209,   210,    24,   212,    26,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    -1,    95,    96,    97,    98,    99,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,
     191,   192,    -1,   194,    -1,    -1,   197,   198,    -1,    -1,
      -1,    -1,    -1,    -1,   205,    -1,   207,   208,   209,   210,
      -1,   212,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    -1,    -1,    95,    96,    97,    98,    99,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,   191,
     192,    -1,   194,    -1,    -1,   197,   198,    -1,    -1,    14,
      15,    16,    17,    18,   206,   207,    -1,   209,   210,    24,
     212,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    64,
      -1,    -1,    67,    68,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,    -1,
      95,    96,    97,    98,    99,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,   191,   192,    -1,   194,
      -1,    -1,   197,   198,    -1,    -1,    14,    15,    16,    17,
      18,    -1,   207,    -1,   209,   210,    24,   212,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    -1,    95,    96,    97,
      98,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,   197,
     198,    -1,    -1,    14,    15,    16,    17,    18,    -1,   207,
      -1,   209,   210,    24,   212,    26,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    -1,    95,    96,    97,    98,    99,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,   190,
     191,   192,    -1,   194,    -1,    -1,   197,   198,    -1,    -1,
      14,    15,    16,    17,    18,    -1,   207,    21,   209,   210,
      24,   212,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      -1,    95,    96,    97,    98,    99,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   190,   191,   192,    -1,
     194,    -1,    -1,   197,   198,    -1,    -1,    14,    15,    16,
      17,    18,    -1,   207,    -1,   209,   210,    24,   212,    26,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      47,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    -1,    -1,    95,    96,
      97,    98,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     147,   148,   149,   150,   151,    -1,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,
     197,   198,    -1,    -1,    14,    15,    16,    17,    18,    -1,
     207,   208,   209,   210,    24,   212,    26,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,
      70,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    -1,    -1,    95,    96,    97,    98,    99,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     190,   191,   192,    -1,   194,    -1,    -1,   197,   198,    -1,
      -1,    14,    15,    16,    17,    18,    -1,   207,   208,   209,
     210,    24,   212,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    68,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      -1,    -1,    95,    96,    97,    98,    99,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   147,   148,   149,   150,   151,    -1,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    -1,   190,   191,   192,
      -1,   194,    -1,    -1,   197,   198,    -1,    -1,    14,    15,
      16,    17,    18,    -1,   207,    -1,   209,   210,    24,   212,
      26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    70,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    -1,    95,
      96,    97,    98,    99,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   147,   148,   149,   150,   151,    -1,   153,    -1,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   190,   191,   192,    -1,   194,    -1,
      -1,   197,   198,    -1,    -1,    14,    15,    16,    17,    18,
      -1,   207,   208,   209,   210,    24,   212,    26,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,
      -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,
      69,    70,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    -1,    -1,    95,    96,    97,    98,
      99,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   190,   191,   192,    -1,   194,    -1,    -1,   197,   198,
      -1,    -1,    14,    15,    16,    17,    18,    -1,   207,   208,
     209,   210,    24,   212,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    -1,    -1,    95,    96,    97,    98,    99,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,   191,
     192,    -1,   194,    -1,    -1,   197,   198,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,   207,    -1,   209,   210,    -1,
     212,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    68,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      -1,    -1,    95,    96,    97,    98,    99,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   147,   148,   149,   150,   151,    -1,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,   191,   192,
      -1,   194,    -1,    -1,   197,   198,    -1,    -1,    14,    15,
      16,    17,    18,    -1,   207,   208,   209,   210,    24,   212,
      26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    70,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    -1,    95,
      96,    97,    98,    99,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   147,   148,   149,   150,   151,    -1,   153,    -1,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   190,   191,   192,    -1,   194,    -1,
      -1,   197,   198,    -1,    -1,    14,    15,    16,    17,    18,
      -1,   207,   208,   209,   210,    24,   212,    26,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,
      -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,
      69,    70,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    -1,    -1,    95,    96,    97,    98,
      99,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   190,   191,   192,    -1,   194,    -1,    -1,   197,   198,
      -1,    -1,    14,    15,    16,    17,    18,    -1,   207,   208,
     209,   210,    24,   212,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    -1,    -1,    95,    96,    97,    98,    99,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,   191,
     192,    -1,   194,    -1,    -1,   197,   198,    -1,    -1,    14,
      15,    16,    17,    18,    -1,   207,   208,   209,   210,    24,
     212,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    68,    69,    70,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,    -1,
      95,    96,    97,    98,    99,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,   191,   192,    -1,   194,
      -1,    -1,   197,   198,    -1,    -1,    14,    15,    16,    17,
      18,    -1,   207,    -1,   209,   210,    24,   212,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    -1,    -1,    95,    96,    97,
      98,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,   191,   192,    -1,   194,    -1,    -1,   197,
     198,    -1,    -1,    14,    15,    16,    17,    18,    -1,   207,
      -1,   209,   210,    24,   212,    26,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    -1,    95,    96,    97,    98,    99,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,
     191,   192,    -1,   194,    -1,    -1,   197,   198,    -1,    -1,
      14,    15,    16,    17,    18,    -1,   207,    -1,   209,   210,
      24,   212,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    90,    91,    92,    -1,
      -1,    95,    96,    97,    98,    99,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,    -1,    -1,    -1,     9,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      20,    21,    -1,    24,    -1,    -1,   190,   191,   192,    30,
     194,    -1,    -1,   197,   198,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,   207,    -1,   209,   210,    48,   212,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      -1,    -1,    -1,    -1,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   139,    -1,
     140,   141,   142,   143,   144,   145,   146,    -1,    -1,    -1,
      -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   182,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    18,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,   204,   205,    -1,    30,   209,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,   166,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,
      -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   209,    -1,   211,    -1,
     132,   133,   134,   135,   136,   137,    20,    21,   140,   141,
     142,   143,   144,   145,   146,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
     182,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,    -1,    -1,    -1,    -1,    -1,   211,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,   133,
     134,   135,   136,   137,    -1,    -1,   140,   141,   142,   143,
     144,   145,   146,    -1,    -1,    -1,    -1,   112,   113,   114,
     115,   116,    -1,    -1,   119,   120,   121,   122,    -1,   124,
     125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
     204,   205,    -1,    30,    -1,    -1,    -1,   211,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,   204,
     205,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    20,    21,    -1,   152,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,   166,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    -1,    -1,   112,   113,   114,   115,
     116,    -1,   209,   119,   120,   121,   122,    -1,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,
      -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,    -1,   139,    -1,   112,   113,   114,   115,   116,    -1,
      -1,   119,   120,   121,   122,   152,   124,   125,   126,   127,
      20,    21,    -1,    -1,   132,    -1,   134,   135,    -1,   166,
      -1,    -1,   140,   141,   142,    -1,    -1,   183,   146,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,   204,   205,
      -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
      -1,    -1,   209,    -1,    -1,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,
      -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   113,   114,   115,   116,    -1,    -1,   119,
     120,   121,   122,    -1,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,   112,   113,   114,
     115,   116,    -1,    -1,   119,   120,   121,   122,    -1,   124,
     125,   126,   127,    20,    21,    -1,    -1,   132,    -1,   134,
     135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,
      -1,   146,    -1,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,   204,   205,    -1,    -1,    -1,    -1,
      -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,   114,   115,   116,
      -1,    -1,   119,   120,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,
      -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,
     112,   113,   114,   115,   116,    20,    21,   119,   120,   121,
     122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,
     132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,    -1,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,
      -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,    -1,    -1,   208,   112,   113,   114,
     115,   116,    20,    21,   119,   120,   121,   122,    -1,   124,
     125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,
      -1,   146,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,    -1,    -1,   208,   112,   113,   114,   115,   116,    -1,
      -1,   119,   120,   121,   122,    -1,   124,   125,   126,   127,
      -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,
      -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,   112,
     113,   114,   115,   116,    20,    21,   119,   120,   121,   122,
      -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,
      -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,
      -1,    -1,    -1,   146,    -1,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,    -1,    -1,   208,   112,   113,   114,   115,
     116,    20,    21,   119,   120,   121,   122,    -1,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,
      -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
      -1,    -1,   208,   112,   113,   114,   115,   116,    -1,    -1,
     119,   120,   121,   122,    -1,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,
      -1,   140,   141,   142,    -1,    -1,    -1,   146,   112,   113,
     114,   115,   116,    20,    21,   119,   120,   121,   122,    -1,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,
     134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,    -1,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,   208,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,    -1,    -1,   208,   112,   113,   114,   115,   116,
      20,    21,   119,   120,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,
      -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,
      -1,   208,   112,   113,   114,   115,   116,    -1,    -1,   119,
     120,   121,   122,    -1,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,   112,   113,   114,
     115,   116,    20,    21,   119,   120,   121,   122,    -1,   124,
     125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,
      -1,   146,    -1,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,    -1,    -1,   208,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,    -1,    -1,   208,   112,   113,   114,   115,   116,    20,
      21,   119,   120,   121,   122,    -1,   124,   125,   126,   127,
      -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,
      -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,
     208,   112,   113,   114,   115,   116,    -1,    -1,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,
     141,   142,    -1,    -1,    -1,   146,   112,   113,   114,   115,
     116,    20,    21,   119,   120,   121,   122,    -1,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,
      -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,    -1,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,   205,    -1,    -1,   208,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
      -1,    -1,   208,   112,   113,   114,   115,   116,    20,    21,
     119,   120,   121,   122,    -1,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,
      -1,   140,   141,   142,    -1,    -1,    -1,   146,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,   208,
     112,   113,   114,   115,   116,    -1,    -1,   119,   120,   121,
     122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,
     132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,   112,   113,   114,   115,   116,
      20,    21,   119,   120,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,
      -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,
      -1,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,    -1,    -1,   208,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,
      -1,   208,   112,   113,   114,   115,   116,    20,    21,   119,
     120,   121,   122,    -1,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,    -1,    -1,   208,   112,
     113,   114,   115,   116,    -1,    -1,   119,   120,   121,   122,
      -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,
      -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,
      -1,    -1,    -1,   146,   112,   113,   114,   115,   116,    20,
      21,   119,   120,   121,   122,    -1,   124,   125,   126,   127,
      -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,
      -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,    -1,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,    -1,    -1,   208,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,
     208,   112,   113,   114,   115,   116,    20,    21,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,
     141,   142,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,   205,    -1,    -1,   208,   112,   113,
     114,   115,   116,    -1,    -1,   119,   120,   121,   122,    -1,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,
     134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,   112,   113,   114,   115,   116,    20,    21,
     119,   120,   121,   122,    -1,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,
      -1,   140,   141,   142,    -1,    -1,    -1,   146,    -1,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,    -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,   208,
     112,   113,   114,   115,   116,    20,    21,   119,   120,   121,
     122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,
     132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,    -1,    -1,   208,   112,   113,   114,
     115,   116,    -1,    -1,   119,   120,   121,   122,    -1,   124,
     125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,
      -1,   146,   112,   113,   114,   115,   116,    20,    21,   119,
     120,   121,   122,    -1,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,    -1,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,    -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,    -1,    -1,   208,   112,
     113,   114,   115,   116,    20,    21,   119,   120,   121,   122,
      -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,
      -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,    -1,    -1,   208,   112,   113,   114,   115,
     116,    -1,    -1,   119,   120,   121,   122,    -1,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,
      -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   112,   113,   114,   115,   116,    20,    21,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,
     141,   142,    -1,    -1,    -1,   146,    -1,   183,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
      -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,   205,    -1,    -1,   208,   112,   113,
     114,   115,   116,    20,    21,   119,   120,   121,   122,    -1,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,
     134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,    -1,    -1,   208,   112,   113,   114,   115,   116,
      -1,    -1,   119,   120,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,
      -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,
     112,   113,   114,   115,   116,    20,    21,   119,   120,   121,
     122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,
     132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,    -1,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,   206,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,   206,    -1,    -1,   112,   113,   114,
     115,   116,    20,    21,   119,   120,   121,   122,    -1,   124,
     125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,
      -1,   146,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,   206,    -1,    -1,   112,   113,   114,   115,   116,    -1,
      -1,   119,   120,   121,   122,    -1,   124,   125,   126,   127,
      -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,
      -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,   112,
     113,   114,   115,   116,    -1,    -1,   119,   120,   121,   122,
      -1,   124,   125,   126,   127,    20,    21,    -1,    -1,   132,
      -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,
      -1,    -1,    -1,   146,    -1,   183,    -1,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   204,   205,   206,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,   206,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    20,    21,   132,   133,   134,
     135,   136,   137,    -1,    -1,   140,   141,   142,   143,   144,
     145,   146,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,
     135,   136,   137,    -1,    -1,   140,   141,   142,   143,   144,
     145,   146,   112,   113,   114,   115,   116,    20,    21,   119,
     120,   121,   122,    -1,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,   132,    -1,   134,   135,    -1,    -1,   138,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,    -1,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,    -1,   197,   198,    -1,    -1,    -1,    -1,    -1,   204,
     205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   183,    -1,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,    -1,    -1,    -1,   112,
     113,   114,   115,   116,    20,    21,   119,   120,   121,   122,
      -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,
      -1,   134,   135,    -1,    -1,   138,    -1,   140,   141,   142,
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,    -1,    -1,    -1,   112,   113,   114,   115,
     116,    -1,    -1,   119,   120,   121,   122,    -1,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,
      -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   112,   113,   114,   115,   116,    20,    21,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,
     141,   142,    -1,    -1,    -1,   146,    -1,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
      -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,   205,    -1,    -1,    -1,   112,   113,
     114,   115,   116,    20,    21,   119,   120,   121,   122,    -1,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,
     134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   205,    -1,    -1,    -1,   112,   113,   114,   115,   116,
      -1,    -1,   119,   120,   121,   122,    -1,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,
      -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,   146,
     112,   113,   114,   115,   116,    20,    21,   119,   120,   121,
     122,    -1,   124,   125,   126,   127,    -1,    -1,    -1,    -1,
     132,    -1,   134,   135,    -1,    -1,    -1,    -1,   140,   141,
     142,    -1,    -1,    -1,    20,    21,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   205,    -1,    -1,    -1,   112,   113,   114,
     115,   116,    -1,    -1,   119,   120,   121,   122,    -1,   124,
     125,   126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    20,    21,    -1,    -1,   140,   112,   113,   114,   115,
     116,    -1,    -1,   119,   120,   121,   122,    -1,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,
     205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,   112,   113,   114,   115,   116,   204,   205,
     119,   120,   121,   122,    -1,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,
      -1,    -1,   112,   113,   114,   115,   116,    -1,    -1,   119,
      -1,    -1,   122,    -1,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,   188,
     189,   190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,   188,   189,
     190,   191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   205,    68,    69,    70,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    90,    91,
      92,    -1,    -1,    95,    96,    97,    98,    68,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    -1,    -1,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    68,    69,    70,   166,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    90,    91,    92,    -1,    -1,    95,
      96,    97,    98,    68,    -1,    70,    -1,    72,    73,    74,
      75,    76,    -1,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    -1,    -1,
      95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   166
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   216,     0,     6,    29,    31,    33,    39,    49,    55,
      77,    99,   100,   194,   205,   211,   217,   220,   226,   228,
     229,   234,   262,   266,   295,   368,   375,   379,   389,   431,
     436,   441,    18,    19,   166,   255,   256,   257,   159,   235,
     236,   166,   167,   168,   194,   230,   231,   232,   212,   376,
     166,   209,   219,    56,    62,   371,   371,   371,   139,   166,
     282,    33,    62,   132,   198,   207,   258,   259,   260,   261,
     282,   211,     4,     5,     7,    35,   387,    61,   366,   182,
     181,   184,   181,   231,    21,    56,   193,   204,   233,   371,
     372,   374,   372,   366,   442,   432,   437,   166,   139,   227,
     260,   260,   260,   207,   140,   141,   142,   181,   206,    56,
      62,   267,   269,    56,    62,   377,    56,    62,   388,    56,
      62,   367,    14,    15,   159,   164,   166,   169,   207,   222,
     256,   159,   236,   166,   230,   230,   166,   211,   213,   372,
     211,    56,    62,   218,   166,   166,   166,   166,   170,   225,
     208,   257,   260,   260,   260,   260,   270,   166,   378,   390,
     212,   369,   170,   171,   221,    14,    15,   159,   164,   166,
     222,   253,   254,   233,   373,   211,   443,   433,   438,   170,
     208,    34,    68,    70,    72,    73,    74,    75,    76,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      90,    91,    92,    95,    96,    97,    98,   114,   115,   166,
     265,   268,   184,   212,   103,   385,   386,   364,   156,   340,
     170,   171,   172,   181,   208,   182,   212,   212,   212,    20,
      21,    37,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     124,   125,   126,   133,   134,   135,   136,   137,   140,   141,
     142,   143,   144,   145,   146,   183,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   197,   198,   204,   205,
      34,    34,   207,   263,   212,   271,    72,    76,    95,    96,
      97,    98,   394,   380,   166,   391,   213,   365,   257,   148,
     166,   362,   363,   253,    18,    24,    30,    40,    48,    63,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   152,   209,   282,   393,   395,   396,   399,
     403,   430,   444,   434,   439,   166,   166,   166,   206,    21,
     166,   206,   151,   208,   340,   350,   351,   184,   264,   273,
     212,   370,   184,   384,   212,   340,   206,   207,    42,   181,
     184,   187,   361,   188,   188,   188,   207,   188,   188,   207,
     188,   188,   188,   188,   188,   188,   207,   282,    32,    59,
      60,   120,   124,   183,   187,   190,   205,   214,   185,   398,
     354,   357,   166,   133,   207,    49,   148,   166,   359,   392,
     208,   211,   430,     1,     8,     9,    10,    12,    14,    15,
      16,    17,    18,    24,    25,    26,    27,    28,    30,    37,
      38,    41,    43,    44,    47,    50,    51,    53,    54,    57,
      58,    64,    67,    77,    99,   101,   102,   114,   115,   129,
     130,   131,   147,   148,   149,   150,   151,   153,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   167,
     168,   169,   190,   191,   192,   197,   198,   207,   209,   210,
     211,   213,   224,   226,   237,   238,   241,   244,   245,   247,
     248,   249,   250,   251,   271,   272,   274,   276,   281,   282,
     283,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     299,   300,   307,   310,   313,   317,   318,   319,   320,   321,
     322,   324,   329,   332,   339,   393,   446,   455,   458,   460,
     467,   469,   382,   166,   211,   381,   282,   346,   363,   206,
      64,   167,   332,   166,   166,   403,   123,   133,   182,   360,
     404,   408,   410,   332,   412,   406,   166,   400,   414,   416,
     418,   420,   422,   424,   426,   428,   332,   207,    32,   187,
      32,   187,   205,   214,   206,   332,   214,   403,   166,   211,
     445,   166,   211,   352,   430,   435,   166,   211,   355,   440,
     332,   359,   207,    42,   123,   181,   182,   184,   187,   358,
     350,   332,   392,   188,   284,   395,   446,   207,   188,   188,
     207,   123,   281,   311,   319,   332,   271,   188,   207,    60,
     332,   207,   332,   166,   188,   188,   207,   211,   188,   159,
      57,   332,   207,   271,   188,   207,   207,   188,   123,   281,
     332,   332,   332,   210,   317,   317,   317,   207,   207,   207,
     207,   207,   207,    12,   403,    12,   403,   332,   457,   465,
     188,   332,   188,   223,   332,   332,   332,   332,   332,   332,
     210,    36,   211,   211,   332,     9,   166,   207,   211,   211,
     211,   211,   211,    65,   296,   262,   128,   211,    20,    21,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   132,   133,   134,   135,   136,   137,
     140,   141,   142,   143,   144,   145,   146,   182,   183,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   204,
     205,   207,   370,   182,   211,   213,   205,   213,   262,   347,
     208,    42,   211,   360,   281,   332,   430,   430,   402,   430,
     208,   430,   430,   208,   166,   397,   430,   263,   430,   263,
     430,   263,   352,   353,   355,   356,   208,   275,   311,   332,
     206,   206,   211,   213,   184,   211,   213,   184,   211,   213,
     208,   332,   166,   166,   430,   281,   332,   271,    19,   285,
     207,   282,   308,   461,   311,   281,   311,   181,   123,   182,
      13,   403,   457,   466,   332,   332,   271,   182,   301,   303,
     332,   305,   184,   159,   332,   463,   311,   311,   403,   281,
     332,   210,   332,   332,   332,   332,   332,   332,   392,    52,
     154,   166,   190,   207,   332,   447,   448,   449,   456,   459,
     392,   207,   448,   459,   138,   176,   211,   213,   450,   277,
     271,   279,   172,   173,   221,   208,   148,   153,   188,   282,
     323,   212,   271,   246,   205,   208,   311,   156,   298,   363,
     156,   316,   317,    18,   154,   166,   393,    18,   154,   166,
     393,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   166,   129,   130,
     131,   332,   332,   154,   166,   332,   332,   332,   393,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   129,   130,   131,   332,    21,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   125,   126,   154,
     166,   204,   205,   330,   332,   208,   311,   383,   332,   261,
       7,   340,   345,   166,   281,   332,   211,   189,   189,   189,
     211,   189,   189,   189,   211,   189,   264,   189,   264,   189,
     264,   189,   211,   189,   211,   208,   430,   430,   208,    42,
     358,   311,   430,   208,   311,   188,   332,   430,   403,   208,
     332,   271,   189,   211,   181,   208,   208,   252,   403,   403,
     208,   403,   208,   403,   208,   208,   189,   208,   208,   208,
     208,   208,   208,    19,   317,   207,   133,   358,   208,   138,
     181,   211,   449,   178,   179,   206,   453,   181,   178,   206,
     211,   452,    19,   208,   449,   177,   213,   451,   332,   457,
     213,   403,   403,   332,   207,   207,   325,   327,   273,    11,
      22,    23,   239,   240,   332,   166,   447,   181,   208,   166,
     297,   123,   133,   182,   187,   314,   315,   263,   188,   207,
     188,   207,   207,   317,   317,   317,   207,   206,   317,   317,
     317,    18,   154,   166,   393,   184,   154,   166,   332,   207,
     207,   154,   166,   332,     1,   206,   208,   213,   211,   206,
      56,    62,   343,    66,   344,   211,   211,   405,   409,   411,
     430,   413,   407,   401,   166,   415,   189,   419,   189,   423,
     189,   427,   352,   429,   355,   166,   332,   211,   189,   208,
     166,   208,   189,   189,   207,   403,   457,   332,   189,   189,
     189,   189,   316,   207,   311,   332,   332,   332,   448,   449,
     332,   154,   166,   447,   453,   206,   332,   206,   456,   311,
     448,   177,   180,   213,   454,   206,   189,   189,   174,   332,
     332,   403,   263,   213,   271,   332,    11,   242,   206,   205,
     181,   206,   166,   166,   166,   166,   181,   206,   264,   333,
     332,   335,   332,   208,   311,   332,   188,   207,   332,   207,
     206,   332,   208,   311,   207,   206,   331,   211,    46,   344,
      45,   103,   341,   417,   421,   425,   271,   286,   189,   211,
     309,   462,   466,   189,   302,   304,   306,   464,   207,   208,
     311,   211,   208,   449,   453,   207,   133,   358,   211,   449,
     206,   278,   280,   208,   208,   189,   264,   271,   243,   211,
     208,   447,   166,   206,   314,   206,   138,   271,   312,   403,
     208,   430,   208,   208,   208,   337,   332,   332,   208,   208,
     332,    32,   342,   341,   343,   332,   166,   207,   208,   207,
     332,   332,   332,   207,   208,   332,   208,   332,   133,   358,
     453,   332,   332,   332,   332,   454,   332,   207,   326,   189,
     240,    25,   102,   244,   288,   289,   290,   292,   332,   206,
     184,   361,   123,   332,   189,   189,   430,   208,   208,   208,
     348,   342,   359,   208,   189,   311,   466,   311,   208,   211,
     468,   332,   332,   208,   468,   275,   323,   328,   123,   123,
     332,   208,   403,   360,   332,   334,   336,   189,   268,   349,
     332,   208,   208,   208,    52,   206,   133,   358,   213,   208,
     323,   332,   360,   332,   338,   211,   268,   208,   332,   206,
     332,   332,   206,   332,   211,   271,   211
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   215,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   217,   218,   218,
     218,   219,   219,   220,   221,   221,   221,   221,   222,   223,
     223,   223,   224,   225,   225,   227,   226,   228,   229,   230,
     230,   230,   231,   231,   231,   231,   232,   232,   233,   233,
     234,   235,   235,   236,   236,   237,   238,   238,   239,   239,
     240,   240,   240,   241,   241,   242,   243,   242,   244,   244,
     244,   244,   244,   245,   246,   245,   247,   248,   249,   250,
     252,   251,   253,   253,   253,   253,   253,   253,   254,   254,
     255,   255,   255,   256,   256,   256,   256,   256,   256,   256,
     256,   257,   257,   258,   258,   258,   259,   259,   260,   260,
     260,   260,   260,   260,   260,   261,   261,   262,   262,   263,
     263,   263,   264,   264,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   266,
     267,   267,   267,   268,   270,   269,   271,   271,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   273,
     273,   273,   274,   275,   275,   277,   278,   276,   279,   280,
     276,   281,   281,   281,   281,   282,   282,   282,   283,   283,
     285,   286,   284,   284,   287,   287,   287,   287,   288,   289,
     290,   290,   290,   291,   291,   291,   292,   292,   293,   293,
     293,   294,   295,   295,   296,   296,   297,   297,   298,   298,
     299,   299,   301,   302,   300,   303,   304,   300,   305,   306,
     300,   308,   309,   307,   310,   310,   310,   311,   311,   312,
     312,   312,   313,   313,   313,   314,   314,   314,   314,   315,
     315,   316,   316,   317,   317,   318,   318,   318,   318,   318,
     318,   318,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   320,   320,   320,   320,   320,   320,   321,   321,   322,
     322,   323,   323,   324,   325,   326,   324,   327,   328,   324,
     329,   329,   329,   329,   330,   331,   329,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   333,   334,   332,   332,
     332,   332,   335,   336,   332,   332,   332,   337,   338,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     340,   340,   341,   341,   341,   342,   342,   343,   343,   343,
     344,   344,   345,   346,   347,   346,   348,   346,   349,   346,
     346,   350,   350,   350,   351,   351,   352,   352,   353,   353,
     354,   354,   354,   355,   356,   356,   357,   357,   357,   358,
     358,   359,   359,   359,   359,   359,   359,   360,   360,   360,
     361,   361,   362,   362,   362,   362,   362,   363,   363,   363,
     363,   363,   364,   365,   364,   366,   366,   367,   367,   367,
     368,   369,   368,   370,   370,   370,   370,   371,   371,   371,
     373,   372,   374,   374,   375,   376,   375,   377,   377,   377,
     378,   380,   381,   379,   382,   383,   379,   384,   384,   385,
     385,   386,   387,   387,   388,   388,   388,   390,   391,   389,
     392,   392,   392,   392,   392,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   394,   394,   394,   394,   394,   394,   395,   396,
     396,   396,   397,   397,   398,   398,   398,   400,   401,   399,
     402,   402,   403,   403,   403,   403,   403,   403,   404,   405,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   406,   407,   403,   403,   408,
     409,   403,   410,   411,   403,   412,   413,   403,   403,   414,
     415,   403,   416,   417,   403,   403,   418,   419,   403,   420,
     421,   403,   403,   422,   423,   403,   424,   425,   403,   426,
     427,   403,   428,   429,   403,   430,   430,   430,   432,   433,
     434,   435,   431,   437,   438,   439,   440,   436,   442,   443,
     444,   445,   441,   446,   446,   446,   446,   446,   447,   447,
     447,   447,   447,   447,   447,   447,   448,   448,   449,   449,
     450,   450,   451,   451,   452,   452,   453,   453,   453,   454,
     454,   454,   455,   455,   455,   455,   455,   455,   456,   456,
     456,   457,   457,   458,   459,   459,   460,   460,   460,   461,
     462,   460,   460,   463,   464,   460,   465,   465,   466,   466,
     467,   467,   467,   467,   468,   468,   469,   469
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     1,
       1,     1,     1,     4,     1,     1,     2,     2,     3,     0,
       2,     4,     3,     1,     2,     0,     4,     2,     2,     1,
       1,     1,     1,     2,     3,     3,     2,     4,     0,     1,
       2,     1,     3,     1,     3,     3,     3,     2,     1,     1,
       0,     2,     4,     1,     1,     0,     0,     3,     1,     1,
       1,     1,     1,     4,     0,     6,     6,     2,     3,     3,
       0,     5,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     4,     1,     2,
       3,     3,     3,     3,     2,     1,     3,     0,     3,     0,
       2,     3,     0,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       2,     2,     3,     4,     3,     2,     2,     2,     2,     2,
       3,     3,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     1,     1,     3,     0,     4,     3,     7,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     2,     2,     2,     0,
       2,     2,     3,     0,     1,     0,     0,     7,     0,     0,
       9,     3,     2,     2,     2,     1,     3,     2,     2,     3,
       0,     0,     5,     1,     2,     4,     5,     2,     1,     1,
       1,     2,     3,     2,     2,     3,     2,     3,     2,     2,
       3,     4,     1,     1,     1,     0,     1,     3,     9,     8,
       3,     3,     0,     0,     7,     0,     0,     7,     0,     0,
       7,     0,     0,     6,     5,     8,    10,     1,     3,     1,
       2,     3,     1,     1,     2,     2,     2,     2,     2,     1,
       3,     0,     4,     1,     6,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     4,     4,     4,     4,     4,     6,     8,     5,
       6,     1,     4,     3,     0,     0,     8,     0,     0,     9,
       3,     4,     5,     6,     0,     0,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     3,     4,     5,
       4,     5,     3,     4,     1,     3,     4,     3,     4,     2,
       4,     4,     7,     8,     3,     5,     0,     0,     8,     3,
       3,     3,     0,     0,     8,     3,     4,     0,     0,     9,
       4,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     2,     4,     1,     4,     4,     4,     4,     4,     1,
       6,     7,     6,     6,     7,     7,     6,     7,     6,     6,
       0,     4,     0,     1,     1,     0,     1,     0,     1,     1,
       0,     1,     5,     0,     0,     4,     0,     9,     0,    10,
       5,     2,     3,     4,     1,     3,     1,     3,     1,     3,
       0,     2,     3,     3,     1,     3,     0,     2,     3,     1,
       1,     1,     2,     3,     5,     3,     3,     1,     1,     1,
       0,     1,     1,     4,     3,     3,     5,     4,     6,     5,
       5,     4,     0,     0,     4,     0,     1,     0,     1,     1,
       6,     0,     6,     0,     2,     3,     5,     0,     1,     1,
       0,     5,     2,     3,     4,     0,     4,     0,     1,     1,
       1,     0,     0,     9,     0,     0,    11,     0,     2,     0,
       1,     3,     1,     1,     0,     1,     1,     0,     0,     9,
       1,     4,     3,     3,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     1,     3,     0,     2,     3,     0,     0,     6,
       1,     3,     1,     1,     1,     1,     4,     3,     0,     0,
       6,     4,     5,     4,     2,     2,     3,     2,     3,     2,
       2,     3,     3,     3,     2,     0,     0,     6,     2,     0,
       0,     6,     0,     0,     6,     0,     0,     6,     1,     0,
       0,     6,     0,     0,     7,     1,     0,     0,     6,     0,
       0,     7,     1,     0,     0,     6,     0,     0,     7,     0,
       0,     6,     0,     0,     6,     1,     3,     3,     0,     0,
       0,     0,    10,     0,     0,     0,     0,    10,     0,     0,
       0,     0,    10,     1,     1,     1,     1,     1,     3,     3,
       5,     5,     6,     6,     8,     8,     1,     3,     0,     2,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     2,
       1,     1,     5,     4,     6,     7,     5,     7,     1,     3,
       3,     3,     1,     4,     1,     3,     4,     4,     4,     0,
       0,     9,     4,     0,     0,     9,     1,     3,     1,     3,
       3,     4,     7,     9,     0,     3,    10,    10
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = DAS_YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == DAS_YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use DAS_YYerror or DAS_YYUNDEF. */
#define YYERRCODE DAS_YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if DAS_YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner)
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !DAS_YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !DAS_YYDEBUG */


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
  YYLTYPE *yylloc;
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_NAME: /* "name"  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_KEYWORD: /* "keyword"  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_TYPE_FUNCTION: /* "type function"  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_module_name: /* module_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_character_sequence: /* character_sequence  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_string_constant: /* string_constant  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_string_builder_body: /* string_builder_body  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_string_builder: /* string_builder  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_reader: /* expr_reader  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_keyword_or_name: /* keyword_or_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_require_module_name: /* require_module_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_expression_label: /* expression_label  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_goto: /* expression_goto  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_else: /* expression_else  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_else_one_liner: /* expression_else_one_liner  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_if_one_liner: /* expression_if_one_liner  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_if_then_else: /* expression_if_then_else  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_for_loop: /* expression_for_loop  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_unsafe: /* expression_unsafe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_while_loop: /* expression_while_loop  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_with: /* expression_with  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_with_alias: /* expression_with_alias  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_annotation_argument_value: /* annotation_argument_value  */
            { delete ((*yyvaluep).aa); }
        break;

    case YYSYMBOL_annotation_argument_value_list: /* annotation_argument_value_list  */
            { delete ((*yyvaluep).aaList); }
        break;

    case YYSYMBOL_annotation_argument_name: /* annotation_argument_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_annotation_argument: /* annotation_argument  */
            { delete ((*yyvaluep).aa); }
        break;

    case YYSYMBOL_annotation_argument_list: /* annotation_argument_list  */
            { delete ((*yyvaluep).aaList); }
        break;

    case YYSYMBOL_annotation_declaration_name: /* annotation_declaration_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_annotation_declaration_basic: /* annotation_declaration_basic  */
            { delete ((*yyvaluep).fa); }
        break;

    case YYSYMBOL_annotation_declaration: /* annotation_declaration  */
            { delete ((*yyvaluep).fa); }
        break;

    case YYSYMBOL_annotation_list: /* annotation_list  */
            { delete ((*yyvaluep).faList); }
        break;

    case YYSYMBOL_optional_annotation_list: /* optional_annotation_list  */
            { delete ((*yyvaluep).faList); }
        break;

    case YYSYMBOL_optional_function_argument_list: /* optional_function_argument_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_optional_function_type: /* optional_function_type  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_function_name: /* function_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_function_declaration_header: /* function_declaration_header  */
            { ((*yyvaluep).pFuncDecl)->delRef(); }
        break;

    case YYSYMBOL_function_declaration: /* function_declaration  */
            { ((*yyvaluep).pFuncDecl)->delRef(); }
        break;

    case YYSYMBOL_expression_block: /* expression_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_any: /* expression_any  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expressions: /* expressions  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_keyword: /* expr_keyword  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_optional_expr_list: /* optional_expr_list  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_keyword: /* expression_keyword  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_pipe: /* expr_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_name_in_namespace: /* name_in_namespace  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_expression_delete: /* expression_delete  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_new_type_declaration: /* new_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_expr_new: /* expr_new  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_break: /* expression_break  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_continue: /* expression_continue  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_return_no_pipe: /* expression_return_no_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_return: /* expression_return  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_yield_no_pipe: /* expression_yield_no_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_yield: /* expression_yield  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_try_catch: /* expression_try_catch  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_tuple_expansion: /* tuple_expansion  */
            { delete ((*yyvaluep).pNameList); }
        break;

    case YYSYMBOL_tuple_expansion_variable_declaration: /* tuple_expansion_variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_expression_let: /* expression_let  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_cast: /* expr_cast  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_type_decl: /* expr_type_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_type_info: /* expr_type_info  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_block_or_simple_block: /* block_or_simple_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_capture_entry: /* capture_entry  */
            { delete ((*yyvaluep).pCapt); }
        break;

    case YYSYMBOL_capture_list: /* capture_list  */
            { delete ((*yyvaluep).pCaptList); }
        break;

    case YYSYMBOL_optional_capture_list: /* optional_capture_list  */
            { delete ((*yyvaluep).pCaptList); }
        break;

    case YYSYMBOL_expr_block: /* expr_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_numeric_const: /* expr_numeric_const  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_assign: /* expr_assign  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_assign_pipe: /* expr_assign_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_named_call: /* expr_named_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_method_call: /* expr_method_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_func_addr_name: /* func_addr_name  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_func_addr_expr: /* func_addr_expr  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_field: /* expr_field  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr: /* expr  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_mtag: /* expr_mtag  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_optional_field_annotation: /* optional_field_annotation  */
            { delete ((*yyvaluep).aaList); }
        break;

    case YYSYMBOL_structure_variable_declaration: /* structure_variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_struct_variable_declaration_list: /* struct_variable_declaration_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_function_argument_declaration: /* function_argument_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_function_argument_list: /* function_argument_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_tuple_type: /* tuple_type  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_tuple_type_list: /* tuple_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_tuple_alias_type_list: /* tuple_alias_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_variant_type: /* variant_type  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_variant_type_list: /* variant_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_variant_alias_type_list: /* variant_alias_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_variable_declaration: /* variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_let_variable_name_with_pos_list: /* let_variable_name_with_pos_list  */
            { delete ((*yyvaluep).pNameWithPosList); }
        break;

    case YYSYMBOL_let_variable_declaration: /* let_variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_global_variable_declaration_list: /* global_variable_declaration_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_enum_list: /* enum_list  */
            { if ( ((*yyvaluep).pEnum)->use_count()==1 ) delete ((*yyvaluep).pEnum); }
        break;

    case YYSYMBOL_enum_name: /* enum_name  */
            { if ( ((*yyvaluep).pEnum)->use_count()==1 ) delete ((*yyvaluep).pEnum); }
        break;

    case YYSYMBOL_optional_structure_parent: /* optional_structure_parent  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_variable_name_with_pos_list: /* variable_name_with_pos_list  */
            { delete ((*yyvaluep).pNameWithPosList); }
        break;

    case YYSYMBOL_structure_type_declaration: /* structure_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_auto_type_declaration: /* auto_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_bitfield_bits: /* bitfield_bits  */
            { delete ((*yyvaluep).pNameList); }
        break;

    case YYSYMBOL_bitfield_alias_bits: /* bitfield_alias_bits  */
            { delete ((*yyvaluep).pNameList); }
        break;

    case YYSYMBOL_bitfield_type_declaration: /* bitfield_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_table_type_pair: /* table_type_pair  */
            { delete ((*yyvaluep).aTypePair).firstType; delete ((*yyvaluep).aTypePair).secondType; }
        break;

    case YYSYMBOL_type_declaration_no_options: /* type_declaration_no_options  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_type_declaration: /* type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_make_decl: /* make_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_struct_fields: /* make_struct_fields  */
            { delete ((*yyvaluep).pMakeStruct); }
        break;

    case YYSYMBOL_make_struct_dim: /* make_struct_dim  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_optional_block: /* optional_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_struct_decl: /* make_struct_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_tuple: /* make_tuple  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_map_tuple: /* make_map_tuple  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_tuple_call: /* make_tuple_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_dim: /* make_dim  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_dim_decl: /* make_dim_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_table: /* make_table  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_map_tuple_list: /* expr_map_tuple_list  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_table_decl: /* make_table_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_array_comprehension_where: /* array_comprehension_where  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_array_comprehension: /* array_comprehension  */
            { delete ((*yyvaluep).pExpression); }
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = DAS_YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yychar == DAS_YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= DAS_YYEOF)
    {
      yychar = DAS_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == DAS_YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = DAS_YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = DAS_YYEMPTY;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* program: program module_declaration  */
                                   {
            if ( yyextra->das_has_type_declarations ) {
                das_yyerror(scanner,"module name has to be first declaration",tokAt(scanner,(yylsp[0])), CompilationError::syntax_error);
            }
        }
    break;

  case 4: /* program: program structure_declaration  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 5: /* program: program enum_declaration  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 6: /* program: program global_let  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 7: /* program: program global_function_declaration  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 11: /* program: program alias_declaration  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 12: /* program: program variant_alias_declaration  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 13: /* program: program tuple_alias_declaration  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 14: /* program: program bitfield_alias_declaration  */
                                                { yyextra->das_has_type_declarations = true; }
    break;

  case 17: /* top_level_reader_macro: expr_reader ';'  */
                             {
        delete (yyvsp[-1].pExpression);    // we do nothing, we don't even attemp to 'visit'
    }
    break;

  case 18: /* optional_public_or_private_module: %empty  */
                        { (yyval.b) = yyextra->g_Program->policies.default_module_public; }
    break;

  case 19: /* optional_public_or_private_module: "public"  */
                        { (yyval.b) = true; }
    break;

  case 20: /* optional_public_or_private_module: "private"  */
                        { (yyval.b) = false; }
    break;

  case 21: /* module_name: '$'  */
                    { (yyval.s) = new string("$"); }
    break;

  case 22: /* module_name: "name"  */
                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 23: /* module_declaration: "module" module_name optional_shared optional_public_or_private_module  */
                                                                                                      {
        yyextra->g_Program->thisModuleName = *(yyvsp[-2].s);
        yyextra->g_Program->thisModule->isPublic = (yyvsp[0].b);
        yyextra->g_Program->thisModule->isModule = true;
        if ( yyextra->g_Program->thisModule->name.empty() ) {
            yyextra->g_Program->thisModule->name = *(yyvsp[-2].s);
        } else if ( yyextra->g_Program->thisModule->name != *(yyvsp[-2].s) ){
            das_yyerror(scanner,"this module already has a name " + yyextra->g_Program->thisModule->name,tokAt(scanner,(yylsp[-2])),
                CompilationError::module_already_has_a_name);
        }
        if ( !yyextra->g_Program->policies.ignore_shared_modules ) {
            yyextra->g_Program->promoteToBuiltin = (yyvsp[-1].b);
        }
        delete (yyvsp[-2].s);
    }
    break;

  case 24: /* character_sequence: STRING_CHARACTER  */
                                                            { (yyval.s) = new string(); *(yyval.s) += (yyvsp[0].ch); }
    break;

  case 25: /* character_sequence: STRING_CHARACTER_ESC  */
                                                            { (yyval.s) = new string(); *(yyval.s) += "\\\\"; }
    break;

  case 26: /* character_sequence: character_sequence STRING_CHARACTER  */
                                                            { (yyval.s) = (yyvsp[-1].s); *(yyvsp[-1].s) += (yyvsp[0].ch); }
    break;

  case 27: /* character_sequence: character_sequence STRING_CHARACTER_ESC  */
                                                            { (yyval.s) = (yyvsp[-1].s); *(yyvsp[-1].s) += "\\\\"; }
    break;

  case 28: /* string_constant: "start of the string" character_sequence "end of the string"  */
                                                           { (yyval.s) = (yyvsp[-1].s); }
    break;

  case 29: /* string_builder_body: %empty  */
        {
        (yyval.pExpression) = new ExprStringBuilder();
        (yyval.pExpression)->at = LineInfo(yyextra->g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line);
    }
    break;

  case 30: /* string_builder_body: string_builder_body character_sequence  */
                                                           {
        bool err;
        auto esconst = unescapeString(*(yyvsp[0].s),&err);
        if ( err ) das_yyerror(scanner,"invalid escape sequence",tokAt(scanner,(yylsp[-1])), CompilationError::invalid_escape_sequence);
        auto sc = make_smart<ExprConstString>(tokAt(scanner,(yylsp[0])),esconst);
        delete (yyvsp[0].s);
        static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression))->elements.push_back(sc);
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 31: /* string_builder_body: string_builder_body "{" expr "}"  */
                                                                                {
        auto se = ExpressionPtr((yyvsp[-1].pExpression));
        static_cast<ExprStringBuilder *>((yyvsp[-3].pExpression))->elements.push_back(se);
        (yyval.pExpression) = (yyvsp[-3].pExpression);
    }
    break;

  case 32: /* string_builder: "start of the string" string_builder_body "end of the string"  */
                                                                   {
        auto strb = static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression));
        if ( strb->elements.size()==0 ) {
            (yyval.pExpression) = new ExprConstString(tokRangeAt(scanner,(yylsp[-2]),(yylsp[0])),"");
            delete (yyvsp[-1].pExpression);
        } else if ( strb->elements.size()==1 && strb->elements[0]->rtti_isStringConstant() ) {
            auto sconst = static_pointer_cast<ExprConstString>(strb->elements[0]);
            (yyval.pExpression) = new ExprConstString(tokRangeAt(scanner,(yylsp[-2]),(yylsp[0])),sconst->text);
            delete (yyvsp[-1].pExpression);
        } else {
            (yyval.pExpression) = (yyvsp[-1].pExpression);
        }
    }
    break;

  case 33: /* reader_character_sequence: STRING_CHARACTER  */
                               {
        if ( !yyextra->g_ReaderMacro->accept(yyextra->g_Program.get(), yyextra->g_Program->thisModule.get(), yyextra->g_ReaderExpr, (yyvsp[0].ch), tokAt(scanner,(yylsp[0]))) ) {
            das_yyend_reader(scanner);
        }
    }
    break;

  case 34: /* reader_character_sequence: reader_character_sequence STRING_CHARACTER  */
                                                                {
        if ( !yyextra->g_ReaderMacro->accept(yyextra->g_Program.get(), yyextra->g_Program->thisModule.get(), yyextra->g_ReaderExpr, (yyvsp[0].ch), tokAt(scanner,(yylsp[0]))) ) {
            das_yyend_reader(scanner);
        }
    }
    break;

  case 35: /* $@1: %empty  */
                                        {
        auto macros = yyextra->g_Program->getReaderMacro(*(yyvsp[0].s));
        if ( macros.size()==0 ) {
            das_yyerror(scanner,"reader macro " + *(yyvsp[0].s) + " not found",tokAt(scanner,(yylsp[0])),
                CompilationError::unsupported_read_macro);
        } else if ( macros.size()>1 ) {
            string options;
            for ( auto & x : macros ) {
                options += "\t" + x->module->name + "::" + x->name + "\n";
            }
            das_yyerror(scanner,"too many options for the reader macro " + *(yyvsp[0].s) +  "\n" + options, tokAt(scanner,(yylsp[0])),
                CompilationError::unsupported_read_macro);
        } else if ( yychar != '~' ) {
            das_yyerror(scanner,"expecting ~ after the reader macro", tokAt(scanner,(yylsp[0])),
                CompilationError::syntax_error);
        } else {
            yyextra->g_ReaderMacro = macros.back().get();
            yyextra->g_ReaderExpr = new ExprReader(tokAt(scanner,(yylsp[-1])),yyextra->g_ReaderMacro);
            yyclearin ;
            das_yybegin_reader(scanner);
        }
    }
    break;

  case 36: /* expr_reader: '%' name_in_namespace $@1 reader_character_sequence  */
                                     {
        yyextra->g_ReaderExpr->at = tokRangeAt(scanner,(yylsp[-3]),(yylsp[0]));
        (yyval.pExpression) = yyextra->g_ReaderExpr;
        int thisLine = 0;
        FileInfo * info = nullptr;
        if ( auto seqt = yyextra->g_ReaderMacro->suffix(yyextra->g_Program.get(), yyextra->g_Program->thisModule.get(), yyextra->g_ReaderExpr, thisLine, info, tokAt(scanner,(yylsp[0]))) ) {
            das_accept_sequence(scanner,seqt,strlen(seqt),thisLine,info);
            yylloc.first_column = (yylsp[0]).first_column;
            yylloc.first_line = (yylsp[0]).first_line;
            yylloc.last_column = (yylsp[0]).last_column;
            yylloc.last_line = (yylsp[0]).last_line;
        }
        delete (yyvsp[-2].s);
        yyextra->g_ReaderMacro = nullptr;
        yyextra->g_ReaderExpr = nullptr;
    }
    break;

  case 37: /* options_declaration: "options" annotation_argument_list  */
                                                   {
        if ( yyextra->g_Program->options.size() ) {
            for ( auto & opt : *(yyvsp[0].aaList) ) {
                if ( yyextra->g_Access->isOptionAllowed(opt.name, yyextra->g_Program->thisModuleName) ) {
                    yyextra->g_Program->options.push_back(opt);
                } else {
                    das_yyerror(scanner,"option " + opt.name + " is not allowed here",
                        tokAt(scanner,(yylsp[0])), CompilationError::invalid_option);
                }
            }
        } else {
            swap ( yyextra->g_Program->options, *(yyvsp[0].aaList) );
        }
        auto opt = yyextra->g_Program->options.find("indenting", tInt);
        if (opt)
        {
            if (opt->iValue != 0 && opt->iValue != 2 && opt->iValue != 4 && opt->iValue != 8)//this is error
                yyextra->das_tab_size = yyextra->das_def_tab_size;
            else
                yyextra->das_tab_size = opt->iValue ? opt->iValue : yyextra->das_def_tab_size;//0 is default
            yyextra->g_FileAccessStack.back()->tabSize = yyextra->das_tab_size;
        }
        delete (yyvsp[0].aaList);
    }
    break;

  case 39: /* keyword_or_name: "name"  */
                            { (yyval.s) = (yyvsp[0].s); }
    break;

  case 40: /* keyword_or_name: "keyword"  */
                            { (yyval.s) = (yyvsp[0].s); }
    break;

  case 41: /* keyword_or_name: "type function"  */
                            { (yyval.s) = (yyvsp[0].s); }
    break;

  case 42: /* require_module_name: keyword_or_name  */
                              {
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 43: /* require_module_name: '%' require_module_name  */
                                     {
        *(yyvsp[0].s) = "%" + *(yyvsp[0].s);
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 44: /* require_module_name: require_module_name '.' keyword_or_name  */
                                                           {
        *(yyvsp[-2].s) += ".";
        *(yyvsp[-2].s) += *(yyvsp[0].s);
        delete (yyvsp[0].s);
        (yyval.s) = (yyvsp[-2].s);
    }
    break;

  case 45: /* require_module_name: require_module_name '/' keyword_or_name  */
                                                           {
        *(yyvsp[-2].s) += "/";
        *(yyvsp[-2].s) += *(yyvsp[0].s);
        delete (yyvsp[0].s);
        (yyval.s) = (yyvsp[-2].s);
    }
    break;

  case 46: /* require_module: require_module_name is_public_module  */
                                                         {
        ast_requireModule(scanner,(yyvsp[-1].s),nullptr,(yyvsp[0].b),tokAt(scanner,(yylsp[-1])));
    }
    break;

  case 47: /* require_module: require_module_name "as" "name" is_public_module  */
                                                                              {
        ast_requireModule(scanner,(yyvsp[-3].s),(yyvsp[-1].s),(yyvsp[0].b),tokAt(scanner,(yylsp[-3])));
    }
    break;

  case 48: /* is_public_module: %empty  */
                    { (yyval.b) = false; }
    break;

  case 49: /* is_public_module: "public"  */
                    { (yyval.b) = true; }
    break;

  case 53: /* expect_error: "integer constant"  */
                   {
        yyextra->g_Program->expectErrors[CompilationError((yyvsp[0].i))] ++;
    }
    break;

  case 54: /* expect_error: "integer constant" ':' "integer constant"  */
                                      {
        yyextra->g_Program->expectErrors[CompilationError((yyvsp[-2].i))] += (yyvsp[0].i);
    }
    break;

  case 55: /* expression_label: "label" "integer constant" ':'  */
                                          {
        (yyval.pExpression) = new ExprLabel(tokAt(scanner,(yylsp[-2])),(yyvsp[-1].i));
    }
    break;

  case 56: /* expression_goto: "goto" "label" "integer constant"  */
                                                {
        (yyval.pExpression) = new ExprGoto(tokAt(scanner,(yylsp[-2])),(yyvsp[0].i));
    }
    break;

  case 57: /* expression_goto: "goto" expr  */
                               {
        (yyval.pExpression) = new ExprGoto(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 58: /* elif_or_static_elif: "elif"  */
                          { (yyval.b) = false; }
    break;

  case 59: /* elif_or_static_elif: "static_elif"  */
                          { (yyval.b) = true; }
    break;

  case 60: /* expression_else: %empty  */
                                                           { (yyval.pExpression) = nullptr; }
    break;

  case 61: /* expression_else: "else" expression_block  */
                                                           { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 62: /* expression_else: elif_or_static_elif expr expression_block expression_else  */
                                                                                          {
        auto eite = new ExprIfThenElse(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        eite->isStatic = (yyvsp[-3].b);
        (yyval.pExpression) = eite;
    }
    break;

  case 63: /* if_or_static_if: "if"  */
                        { (yyval.b) = false; }
    break;

  case 64: /* if_or_static_if: "static_if"  */
                        { (yyval.b) = true; }
    break;

  case 65: /* expression_else_one_liner: %empty  */
        { (yyval.pExpression) = nullptr; }
    break;

  case 66: /* $@2: %empty  */
                      { yyextra->das_need_oxford_comma = true; }
    break;

  case 67: /* expression_else_one_liner: "else" $@2 expression_if_one_liner  */
                                                                                                 {
            (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 68: /* expression_if_one_liner: expr  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 69: /* expression_if_one_liner: expression_return_no_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 70: /* expression_if_one_liner: expression_yield_no_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 71: /* expression_if_one_liner: expression_break  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 72: /* expression_if_one_liner: expression_continue  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 73: /* expression_if_then_else: if_or_static_if expr expression_block expression_else  */
                                                                                      {
        auto eite = new ExprIfThenElse(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        eite->isStatic = (yyvsp[-3].b);
        (yyval.pExpression) = eite;
    }
    break;

  case 74: /* $@3: %empty  */
                                                     { yyextra->das_need_oxford_comma = true; }
    break;

  case 75: /* expression_if_then_else: expression_if_one_liner "if" $@3 expr expression_else_one_liner ';'  */
                                                                                                                                                   {
        (yyval.pExpression) = new ExprIfThenElse(tokAt(scanner,(yylsp[-4])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr(ast_wrapInBlock((yyvsp[-5].pExpression))),(yyvsp[-1].pExpression) ? ExpressionPtr(ast_wrapInBlock((yyvsp[-1].pExpression))) : nullptr);
    }
    break;

  case 76: /* expression_for_loop: "for" variable_name_with_pos_list "in" expr_list ';' expression_block  */
                                                                                                           {
        (yyval.pExpression) = ast_forLoop(scanner,(yyvsp[-4].pNameWithPosList),(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-5])),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 77: /* expression_unsafe: "unsafe" expression_block  */
                                                 {
        auto pUnsafe = new ExprUnsafe(tokAt(scanner,(yylsp[-1])));
        pUnsafe->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyval.pExpression) = pUnsafe;
    }
    break;

  case 78: /* expression_while_loop: "while" expr expression_block  */
                                                               {
        auto pWhile = new ExprWhile(tokAt(scanner,(yylsp[-2])));
        pWhile->cond = ExpressionPtr((yyvsp[-1].pExpression));
        pWhile->body = ExpressionPtr((yyvsp[0].pExpression));
        ((ExprBlock *)(yyvsp[0].pExpression))->inTheLoop = true;
        (yyval.pExpression) = pWhile;
    }
    break;

  case 79: /* expression_with: "with" expr expression_block  */
                                                         {
        auto pWith = new ExprWith(tokAt(scanner,(yylsp[-2])));
        pWith->with = ExpressionPtr((yyvsp[-1].pExpression));
        pWith->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyval.pExpression) = pWith;
    }
    break;

  case 80: /* $@4: %empty  */
                                        { yyextra->das_need_oxford_comma=true; }
    break;

  case 81: /* expression_with_alias: "assume" "name" '=' $@4 expr  */
                                                                                               {
        (yyval.pExpression) = new ExprAssume(tokAt(scanner,(yylsp[-4])), *(yyvsp[-3].s), (yyvsp[0].pExpression) );
        delete (yyvsp[-3].s);
    }
    break;

  case 82: /* annotation_argument_value: string_constant  */
                                 { (yyval.aa) = new AnnotationArgument("",*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 83: /* annotation_argument_value: "name"  */
                                 { (yyval.aa) = new AnnotationArgument("",*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 84: /* annotation_argument_value: "integer constant"  */
                                 { (yyval.aa) = new AnnotationArgument("",(yyvsp[0].i)); }
    break;

  case 85: /* annotation_argument_value: "floating point constant"  */
                                 { (yyval.aa) = new AnnotationArgument("",float((yyvsp[0].fd))); }
    break;

  case 86: /* annotation_argument_value: "true"  */
                                 { (yyval.aa) = new AnnotationArgument("",true); }
    break;

  case 87: /* annotation_argument_value: "false"  */
                                 { (yyval.aa) = new AnnotationArgument("",false); }
    break;

  case 88: /* annotation_argument_value_list: annotation_argument_value  */
                                       {
        (yyval.aaList) = new AnnotationArgumentList();
        (yyval.aaList)->push_back(*(yyvsp[0].aa));
        delete (yyvsp[0].aa);
    }
    break;

  case 89: /* annotation_argument_value_list: annotation_argument_value_list ',' annotation_argument_value  */
                                                                                {
            (yyval.aaList) = (yyvsp[-2].aaList);
            (yyval.aaList)->push_back(*(yyvsp[0].aa));
            delete (yyvsp[0].aa);
    }
    break;

  case 90: /* annotation_argument_name: "name"  */
                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 91: /* annotation_argument_name: "type"  */
                    { (yyval.s) = new string("type"); }
    break;

  case 92: /* annotation_argument_name: "in"  */
                    { (yyval.s) = new string("in"); }
    break;

  case 93: /* annotation_argument: annotation_argument_name '=' string_constant  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[0].s); delete (yyvsp[-2].s); }
    break;

  case 94: /* annotation_argument: annotation_argument_name '=' "name"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[0].s); delete (yyvsp[-2].s); }
    break;

  case 95: /* annotation_argument: annotation_argument_name '=' "integer constant"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),(yyvsp[0].i),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 96: /* annotation_argument: annotation_argument_name '=' "floating point constant"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),float((yyvsp[0].fd)),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 97: /* annotation_argument: annotation_argument_name '=' "true"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),true,tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 98: /* annotation_argument: annotation_argument_name '=' "false"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),false,tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 99: /* annotation_argument: annotation_argument_name  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[0].s),true,tokAt(scanner,(yylsp[0]))); delete (yyvsp[0].s); }
    break;

  case 100: /* annotation_argument: annotation_argument_name '=' '(' annotation_argument_value_list ')'  */
                                                                                          {
        { (yyval.aa) = new AnnotationArgument(*(yyvsp[-4].s),(yyvsp[-1].aaList),tokAt(scanner,(yylsp[-4]))); delete (yyvsp[-4].s); }
    }
    break;

  case 101: /* annotation_argument_list: annotation_argument  */
                                  {
        (yyval.aaList) = ast_annotationArgumentListEntry(scanner,new AnnotationArgumentList(),(yyvsp[0].aa));
    }
    break;

  case 102: /* annotation_argument_list: annotation_argument_list ',' annotation_argument  */
                                                                    {
        (yyval.aaList) = ast_annotationArgumentListEntry(scanner,(yyvsp[-2].aaList),(yyvsp[0].aa));
    }
    break;

  case 103: /* annotation_declaration_name: name_in_namespace  */
                                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 104: /* annotation_declaration_name: "require"  */
                                    { (yyval.s) = new string("require"); }
    break;

  case 105: /* annotation_declaration_name: "private"  */
                                    { (yyval.s) = new string("private"); }
    break;

  case 106: /* annotation_declaration_basic: annotation_declaration_name  */
                                          {
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner,(yylsp[0]));
        if ( auto ann = findAnnotation(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0]))) ) {
            (yyval.fa)->annotation = ann;
        }
        delete (yyvsp[0].s);
    }
    break;

  case 107: /* annotation_declaration_basic: annotation_declaration_name '(' annotation_argument_list ')'  */
                                                                                 {
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner,(yylsp[-3]));
        if ( auto ann = findAnnotation(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3]))) ) {
            (yyval.fa)->annotation = ann;
        }
        swap ( (yyval.fa)->arguments, *(yyvsp[-1].aaList) );
        delete (yyvsp[-1].aaList);
        delete (yyvsp[-3].s);
    }
    break;

  case 108: /* annotation_declaration: annotation_declaration_basic  */
                                          {
        (yyval.fa) = (yyvsp[0].fa);
    }
    break;

  case 109: /* annotation_declaration: '!' annotation_declaration  */
                                              {
        if ( !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::Not,(yyvsp[0].fa),nullptr);
    }
    break;

  case 110: /* annotation_declaration: annotation_declaration "&&" annotation_declaration  */
                                                                              {
        if ( !(yyvsp[-2].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[-2].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[-2])),
                CompilationError::invalid_annotation); }
        if ( !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::And,(yyvsp[-2].fa),(yyvsp[0].fa));
    }
    break;

  case 111: /* annotation_declaration: annotation_declaration "||" annotation_declaration  */
                                                                            {
        if ( !(yyvsp[-2].fa)->annotation || !(yyvsp[-2].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[-2].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[-2])),
                CompilationError::invalid_annotation); }
        if ( !(yyvsp[0].fa)->annotation || !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::Or,(yyvsp[-2].fa),(yyvsp[0].fa));
    }
    break;

  case 112: /* annotation_declaration: annotation_declaration "^^" annotation_declaration  */
                                                                              {
        if ( !(yyvsp[-2].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[-2].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[-2])),
                CompilationError::invalid_annotation); }
        if ( !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::Xor,(yyvsp[-2].fa),(yyvsp[0].fa));
    }
    break;

  case 113: /* annotation_declaration: '(' annotation_declaration ')'  */
                                            {
        (yyval.fa) = (yyvsp[-1].fa);
    }
    break;

  case 114: /* annotation_declaration: "|>" annotation_declaration  */
                                          {
        (yyval.fa) = (yyvsp[0].fa);
        (yyvsp[0].fa)->inherited = true;
    }
    break;

  case 115: /* annotation_list: annotation_declaration  */
                                    {
            (yyval.faList) = new AnnotationList();
            (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
    break;

  case 116: /* annotation_list: annotation_list ',' annotation_declaration  */
                                                              {
        (yyval.faList) = (yyvsp[-2].faList);
        (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
    break;

  case 117: /* optional_annotation_list: %empty  */
                                        { (yyval.faList) = nullptr; }
    break;

  case 118: /* optional_annotation_list: '[' annotation_list ']'  */
                                        { (yyval.faList) = (yyvsp[-1].faList); }
    break;

  case 119: /* optional_function_argument_list: %empty  */
                                                { (yyval.pVarDeclList) = nullptr; }
    break;

  case 120: /* optional_function_argument_list: '(' ')'  */
                                                { (yyval.pVarDeclList) = nullptr; }
    break;

  case 121: /* optional_function_argument_list: '(' function_argument_list ')'  */
                                                { (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList); }
    break;

  case 122: /* optional_function_type: %empty  */
        {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
    }
    break;

  case 123: /* optional_function_type: ':' type_declaration  */
                                        {
        (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 124: /* function_name: "name"  */
                          {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 125: /* function_name: "operator" '!'  */
                             { (yyval.s) = new string("!"); }
    break;

  case 126: /* function_name: "operator" '~'  */
                             { (yyval.s) = new string("~"); }
    break;

  case 127: /* function_name: "operator" "+="  */
                             { (yyval.s) = new string("+="); }
    break;

  case 128: /* function_name: "operator" "-="  */
                             { (yyval.s) = new string("-="); }
    break;

  case 129: /* function_name: "operator" "*="  */
                             { (yyval.s) = new string("*="); }
    break;

  case 130: /* function_name: "operator" "/="  */
                             { (yyval.s) = new string("/="); }
    break;

  case 131: /* function_name: "operator" "%="  */
                             { (yyval.s) = new string("%="); }
    break;

  case 132: /* function_name: "operator" "&="  */
                             { (yyval.s) = new string("&="); }
    break;

  case 133: /* function_name: "operator" "|="  */
                             { (yyval.s) = new string("|="); }
    break;

  case 134: /* function_name: "operator" "^="  */
                             { (yyval.s) = new string("^="); }
    break;

  case 135: /* function_name: "operator" "&&="  */
                                { (yyval.s) = new string("&&="); }
    break;

  case 136: /* function_name: "operator" "||="  */
                                { (yyval.s) = new string("||="); }
    break;

  case 137: /* function_name: "operator" "^^="  */
                                { (yyval.s) = new string("^^="); }
    break;

  case 138: /* function_name: "operator" "&&"  */
                             { (yyval.s) = new string("&&"); }
    break;

  case 139: /* function_name: "operator" "||"  */
                             { (yyval.s) = new string("||"); }
    break;

  case 140: /* function_name: "operator" "^^"  */
                             { (yyval.s) = new string("^^"); }
    break;

  case 141: /* function_name: "operator" '+'  */
                             { (yyval.s) = new string("+"); }
    break;

  case 142: /* function_name: "operator" '-'  */
                             { (yyval.s) = new string("-"); }
    break;

  case 143: /* function_name: "operator" '*'  */
                             { (yyval.s) = new string("*"); }
    break;

  case 144: /* function_name: "operator" '/'  */
                             { (yyval.s) = new string("/"); }
    break;

  case 145: /* function_name: "operator" '%'  */
                             { (yyval.s) = new string("%"); }
    break;

  case 146: /* function_name: "operator" '<'  */
                             { (yyval.s) = new string("<"); }
    break;

  case 147: /* function_name: "operator" '>'  */
                             { (yyval.s) = new string(">"); }
    break;

  case 148: /* function_name: "operator" ".."  */
                             { (yyval.s) = new string("interval"); }
    break;

  case 149: /* function_name: "operator" "=="  */
                             { (yyval.s) = new string("=="); }
    break;

  case 150: /* function_name: "operator" "!="  */
                             { (yyval.s) = new string("!="); }
    break;

  case 151: /* function_name: "operator" "<="  */
                             { (yyval.s) = new string("<="); }
    break;

  case 152: /* function_name: "operator" ">="  */
                             { (yyval.s) = new string(">="); }
    break;

  case 153: /* function_name: "operator" '&'  */
                             { (yyval.s) = new string("&"); }
    break;

  case 154: /* function_name: "operator" '|'  */
                             { (yyval.s) = new string("|"); }
    break;

  case 155: /* function_name: "operator" '^'  */
                             { (yyval.s) = new string("^"); }
    break;

  case 156: /* function_name: "++" "operator"  */
                             { (yyval.s) = new string("++"); }
    break;

  case 157: /* function_name: "--" "operator"  */
                             { (yyval.s) = new string("--"); }
    break;

  case 158: /* function_name: "operator" "++"  */
                             { (yyval.s) = new string("+++"); }
    break;

  case 159: /* function_name: "operator" "--"  */
                             { (yyval.s) = new string("---"); }
    break;

  case 160: /* function_name: "operator" "<<"  */
                             { (yyval.s) = new string("<<"); }
    break;

  case 161: /* function_name: "operator" ">>"  */
                             { (yyval.s) = new string(">>"); }
    break;

  case 162: /* function_name: "operator" "<<="  */
                             { (yyval.s) = new string("<<="); }
    break;

  case 163: /* function_name: "operator" ">>="  */
                             { (yyval.s) = new string(">>="); }
    break;

  case 164: /* function_name: "operator" "<<<"  */
                             { (yyval.s) = new string("<<<"); }
    break;

  case 165: /* function_name: "operator" ">>>"  */
                             { (yyval.s) = new string(">>>"); }
    break;

  case 166: /* function_name: "operator" "<<<="  */
                             { (yyval.s) = new string("<<<="); }
    break;

  case 167: /* function_name: "operator" ">>>="  */
                             { (yyval.s) = new string(">>>="); }
    break;

  case 168: /* function_name: "operator" '[' ']'  */
                             { (yyval.s) = new string("[]"); }
    break;

  case 169: /* function_name: "operator" "?[" ']'  */
                                { (yyval.s) = new string("?[]"); }
    break;

  case 170: /* function_name: "operator" '.'  */
                             { (yyval.s) = new string("."); }
    break;

  case 171: /* function_name: "operator" "?."  */
                             { (yyval.s) = new string("?."); }
    break;

  case 172: /* function_name: "operator" '.' "name"  */
                                       { (yyval.s) = new string(".`"+*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 173: /* function_name: "operator" '.' "name" ":="  */
                                             { (yyval.s) = new string(".`"+*(yyvsp[-1].s)+"`clone"); delete (yyvsp[-1].s); }
    break;

  case 174: /* function_name: "operator" "?." "name"  */
                                       { (yyval.s) = new string("?.`"+*(yyvsp[0].s)); delete (yyvsp[0].s);}
    break;

  case 175: /* function_name: "operator" ":="  */
                                { (yyval.s) = new string("clone"); }
    break;

  case 176: /* function_name: "operator" "delete"  */
                                { (yyval.s) = new string("finalize"); }
    break;

  case 177: /* function_name: "operator" "??"  */
                           { (yyval.s) = new string("??"); }
    break;

  case 178: /* function_name: "operator" "is"  */
                            { (yyval.s) = new string("`is"); }
    break;

  case 179: /* function_name: "operator" "as"  */
                            { (yyval.s) = new string("`as"); }
    break;

  case 180: /* function_name: "operator" "is" "name"  */
                                       { (yyval.s) = (yyvsp[0].s); *(yyvsp[0].s) = "`is`" + *(yyvsp[0].s); }
    break;

  case 181: /* function_name: "operator" "as" "name"  */
                                       { (yyval.s) = (yyvsp[0].s); *(yyvsp[0].s) = "`as`" + *(yyvsp[0].s); }
    break;

  case 182: /* function_name: "operator" '?' "as"  */
                                { (yyval.s) = new string("?as"); }
    break;

  case 183: /* function_name: "operator" '?' "as" "name"  */
                                           { (yyval.s) = (yyvsp[0].s); *(yyvsp[0].s) = "?as`" + *(yyvsp[0].s); }
    break;

  case 184: /* function_name: "bool"  */
                     { (yyval.s) = new string("bool"); }
    break;

  case 185: /* function_name: "string"  */
                     { (yyval.s) = new string("string"); }
    break;

  case 186: /* function_name: "int"  */
                     { (yyval.s) = new string("int"); }
    break;

  case 187: /* function_name: "int2"  */
                     { (yyval.s) = new string("int2"); }
    break;

  case 188: /* function_name: "int3"  */
                     { (yyval.s) = new string("int3"); }
    break;

  case 189: /* function_name: "int4"  */
                     { (yyval.s) = new string("int4"); }
    break;

  case 190: /* function_name: "uint"  */
                     { (yyval.s) = new string("uint"); }
    break;

  case 191: /* function_name: "uint2"  */
                     { (yyval.s) = new string("uint2"); }
    break;

  case 192: /* function_name: "uint3"  */
                     { (yyval.s) = new string("uint3"); }
    break;

  case 193: /* function_name: "uint4"  */
                     { (yyval.s) = new string("uint4"); }
    break;

  case 194: /* function_name: "float"  */
                     { (yyval.s) = new string("float"); }
    break;

  case 195: /* function_name: "float2"  */
                     { (yyval.s) = new string("float2"); }
    break;

  case 196: /* function_name: "float3"  */
                     { (yyval.s) = new string("float3"); }
    break;

  case 197: /* function_name: "float4"  */
                     { (yyval.s) = new string("float4"); }
    break;

  case 198: /* function_name: "range"  */
                     { (yyval.s) = new string("range"); }
    break;

  case 199: /* function_name: "urange"  */
                     { (yyval.s) = new string("urange"); }
    break;

  case 200: /* function_name: "range64"  */
                     { (yyval.s) = new string("range64"); }
    break;

  case 201: /* function_name: "urange64"  */
                     { (yyval.s) = new string("urange64"); }
    break;

  case 202: /* function_name: "int64"  */
                     { (yyval.s) = new string("int64"); }
    break;

  case 203: /* function_name: "uint64"  */
                     { (yyval.s) = new string("uint64"); }
    break;

  case 204: /* function_name: "double"  */
                     { (yyval.s) = new string("double"); }
    break;

  case 205: /* function_name: "int8"  */
                     { (yyval.s) = new string("int8"); }
    break;

  case 206: /* function_name: "uint8"  */
                     { (yyval.s) = new string("uint8"); }
    break;

  case 207: /* function_name: "int16"  */
                     { (yyval.s) = new string("int16"); }
    break;

  case 208: /* function_name: "uint16"  */
                     { (yyval.s) = new string("uint16"); }
    break;

  case 209: /* global_function_declaration: optional_annotation_list "def" function_declaration  */
                                                                                {
        (yyvsp[0].pFuncDecl)->atDecl = tokRangeAt(scanner,(yylsp[-1]),(yylsp[0]));
        assignDefaultArguments((yyvsp[0].pFuncDecl));
        runFunctionAnnotations(scanner, yyextra, (yyvsp[0].pFuncDecl), (yyvsp[-2].faList), tokAt(scanner,(yylsp[-2])));
        if ( (yyvsp[0].pFuncDecl)->isGeneric() ) {
            if ( !yyextra->g_Program->addGeneric((yyvsp[0].pFuncDecl)) ) {
                das_yyerror(scanner,"generic function is already defined " +
                    (yyvsp[0].pFuncDecl)->getMangledName(),(yyvsp[0].pFuncDecl)->at,
                        CompilationError::function_already_declared);
            }
        } else {
            if ( !yyextra->g_Program->addFunction((yyvsp[0].pFuncDecl)) ) {
                das_yyerror(scanner,"function is already defined " +
                    (yyvsp[0].pFuncDecl)->getMangledName(),(yyvsp[0].pFuncDecl)->at,
                        CompilationError::function_already_declared);
            }
        }
        (yyvsp[0].pFuncDecl)->delRef();
    }
    break;

  case 210: /* optional_public_or_private_function: %empty  */
                        { (yyval.b) = yyextra->g_thisStructure ? !yyextra->g_thisStructure->privateStructure : yyextra->g_Program->thisModule->isPublic; }
    break;

  case 211: /* optional_public_or_private_function: "private"  */
                        { (yyval.b) = false; }
    break;

  case 212: /* optional_public_or_private_function: "public"  */
                        { (yyval.b) = true; }
    break;

  case 213: /* function_declaration_header: function_name optional_function_argument_list optional_function_type  */
                                                                                                {
        (yyval.pFuncDecl) = ast_functionDeclarationHeader(scanner,(yyvsp[-2].s),(yyvsp[-1].pVarDeclList),(yyvsp[0].pTypeDecl),tokAt(scanner,(yylsp[-2])));
    }
    break;

  case 214: /* $@5: %empty  */
                                                     {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
        }
    }
    break;

  case 215: /* function_declaration: optional_public_or_private_function $@5 function_declaration_header expression_block  */
                                                                {
        (yyvsp[-1].pFuncDecl)->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyvsp[-1].pFuncDecl)->privateFunction = !(yyvsp[-3].b);
        (yyval.pFuncDecl) = (yyvsp[-1].pFuncDecl);
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
        }
    }
    break;

  case 216: /* expression_block: '{' expressions '}'  */
                                                   {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
        (yyval.pExpression)->at = tokRangeAt(scanner,(yylsp[-2]),(yylsp[0]));
    }
    break;

  case 217: /* expression_block: '{' expressions '}' "finally" '{' expressions '}'  */
                                                                                          {
        auto pB = (ExprBlock *) (yyvsp[-5].pExpression);
        auto pF = (ExprBlock *) (yyvsp[-1].pExpression);
        swap ( pB->finalList, pF->list );
        (yyval.pExpression) = (yyvsp[-5].pExpression);
        (yyval.pExpression)->at = tokRangeAt(scanner,(yylsp[-6]),(yylsp[0]));
        delete (yyvsp[-1].pExpression);
    }
    break;

  case 218: /* expression_any: ';'  */
                                            { (yyval.pExpression) = nullptr; }
    break;

  case 219: /* expression_any: expr_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 220: /* expression_any: expr_keyword  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 221: /* expression_any: expr_assign_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 222: /* expression_any: expr_assign ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 223: /* expression_any: expression_delete ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 224: /* expression_any: expression_let  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 225: /* expression_any: expression_while_loop  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 226: /* expression_any: expression_unsafe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 227: /* expression_any: expression_with  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 228: /* expression_any: expression_with_alias  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 229: /* expression_any: expression_for_loop  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 230: /* expression_any: expression_break ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 231: /* expression_any: expression_continue ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 232: /* expression_any: expression_return  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 233: /* expression_any: expression_yield  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 234: /* expression_any: expression_if_then_else  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 235: /* expression_any: expression_try_catch  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 236: /* expression_any: expression_label ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 237: /* expression_any: expression_goto ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 238: /* expression_any: "pass" ';'  */
                                            { (yyval.pExpression) = nullptr; }
    break;

  case 239: /* expressions: %empty  */
        {
        (yyval.pExpression) = new ExprBlock();
        (yyval.pExpression)->at = LineInfo(yyextra->g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line);
    }
    break;

  case 240: /* expressions: expressions expression_any  */
                                                        {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
        if ( (yyvsp[0].pExpression) ) {
            static_cast<ExprBlock*>((yyvsp[-1].pExpression))->list.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        }
    }
    break;

  case 241: /* expressions: expressions error  */
                                 {
        delete (yyvsp[-1].pExpression); (yyval.pExpression) = nullptr; YYABORT;
    }
    break;

  case 242: /* expr_keyword: "keyword" expr expression_block  */
                                                           {
        auto pCall = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s));
        pCall->arguments.push_back(ExpressionPtr((yyvsp[-1].pExpression)));
        auto resT = new TypeDecl(Type::autoinfer);
        auto blk = ast_makeBlock(scanner,0,nullptr,nullptr,nullptr,resT,(yyvsp[0].pExpression),tokAt(scanner,(yylsp[0])),tokAt(scanner,(yylsp[0])));
        pCall->arguments.push_back(ExpressionPtr(blk));
        delete (yyvsp[-2].s);
        (yyval.pExpression) = pCall;
    }
    break;

  case 243: /* optional_expr_list: %empty  */
        { (yyval.pExpression) = nullptr; }
    break;

  case 244: /* optional_expr_list: expr_list  */
                             { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 245: /* $@6: %empty  */
                         { yyextra->das_arrow_depth ++; }
    break;

  case 246: /* $@7: %empty  */
                                                                                                { yyextra->das_arrow_depth --; }
    break;

  case 247: /* expression_keyword: "keyword" '<' $@6 type_declaration_no_options '>' $@7 expr  */
                                                                                                                                               {
        auto pCall = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-6])),tokAt(scanner,(yylsp[0])),*(yyvsp[-6].s));
        auto td = new ExprTypeDecl(tokAt(scanner,(yylsp[-3])),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCall->arguments.insert(pCall->arguments.begin(), ExpressionPtr(td));
        pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        delete (yyvsp[-6].s);
        (yyval.pExpression) = pCall;
    }
    break;

  case 248: /* $@8: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 249: /* $@9: %empty  */
                                                                                                      { yyextra->das_arrow_depth --; }
    break;

  case 250: /* expression_keyword: "type function" '<' $@8 type_declaration_no_options '>' $@9 '(' optional_expr_list ')'  */
                                                                                                                                                                                    {
        auto pCall = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-8])),tokAt(scanner,(yylsp[0])),*(yyvsp[-8].s));
        if ( (yyvsp[-1].pExpression) ) {
            pCall->arguments = sequenceToList((yyvsp[-1].pExpression));
        }
        auto td = new ExprTypeDecl(tokAt(scanner,(yylsp[-5])),TypeDeclPtr((yyvsp[-5].pTypeDecl)));
        pCall->arguments.insert(pCall->arguments.begin(), ExpressionPtr(td));
        delete (yyvsp[-8].s);
        (yyval.pExpression) = pCall;
    }
    break;

  case 251: /* expr_pipe: expr_assign " <|" expr_block  */
                                                        {
        Expression * pipeCall = (yyvsp[-2].pExpression)->tail();
        if ( pipeCall->rtti_isCallLikeExpr() ) {
            auto pCall = (ExprLooksLikeCall *) pipeCall;
            pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        } else if ( pipeCall->rtti_isVar() ) {
            // a += b <| c
            auto pVar = (ExprVar *) pipeCall;
            auto pCall = yyextra->g_Program->makeCall(pVar->at,pVar->name);
            pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
            if ( !(yyvsp[-2].pExpression)->swap_tail(pVar,pCall) ) {
                delete pVar;
                (yyval.pExpression) = pCall;
            } else {
                (yyval.pExpression) = (yyvsp[-2].pExpression);
            }
        } else if ( pipeCall->rtti_isMakeStruct() ) {
            auto pMS = (ExprMakeStruct *) pipeCall;
            if ( pMS->block ) {
                das_yyerror(scanner,"can't pipe into [[ make structure ]]. it already has where closure",
                    tokAt(scanner,(yylsp[-1])),CompilationError::cant_pipe);
                delete (yyvsp[0].pExpression);
            } else {
                pMS->block = (yyvsp[0].pExpression);
            }
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        } else {
            das_yyerror(scanner,"can only pipe into function call or [[ make structure ]]",
                tokAt(scanner,(yylsp[-1])),CompilationError::cant_pipe);
            delete (yyvsp[0].pExpression);
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        }
    }
    break;

  case 252: /* expr_pipe: "@ <|" expr_block  */
                               {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 253: /* expr_pipe: "@@ <|" expr_block  */
                               {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 254: /* expr_pipe: "$ <|" expr_block  */
                               {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 255: /* name_in_namespace: "name"  */
                                               { (yyval.s) = (yyvsp[0].s); }
    break;

  case 256: /* name_in_namespace: "name" "::" "name"  */
                                               {
            auto ita = yyextra->das_module_alias.find(*(yyvsp[-2].s));
            if ( ita == yyextra->das_module_alias.end() ) {
                *(yyvsp[-2].s) += "::";
            } else {
                *(yyvsp[-2].s) = ita->second + "::";
            }
            *(yyvsp[-2].s) += *(yyvsp[0].s);
            delete (yyvsp[0].s);
            (yyval.s) = (yyvsp[-2].s);
        }
    break;

  case 257: /* name_in_namespace: "::" "name"  */
                                               { *(yyvsp[0].s) = "::" + *(yyvsp[0].s); (yyval.s) = (yyvsp[0].s); }
    break;

  case 258: /* expression_delete: "delete" expr  */
                                      {
        (yyval.pExpression) = new ExprDelete(tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 259: /* expression_delete: "delete" "explicit" expr  */
                                                   {
        auto delExpr = new ExprDelete(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[0].pExpression)));
        delExpr->native = true;
        (yyval.pExpression) = delExpr;
    }
    break;

  case 260: /* $@10: %empty  */
           { yyextra->das_arrow_depth ++; }
    break;

  case 261: /* $@11: %empty  */
                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 262: /* new_type_declaration: '<' $@10 type_declaration '>' $@11  */
                                                                                                            {
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 263: /* new_type_declaration: structure_type_declaration  */
                                               {
        (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl);
    }
    break;

  case 264: /* expr_new: "new" new_type_declaration  */
                                                       {
        (yyval.pExpression) = new ExprNew(tokAt(scanner,(yylsp[-1])),TypeDeclPtr((yyvsp[0].pTypeDecl)),false);
    }
    break;

  case 265: /* expr_new: "new" new_type_declaration '(' ')'  */
                                                               {
        (yyval.pExpression) = new ExprNew(tokAt(scanner,(yylsp[-3])),TypeDeclPtr((yyvsp[-2].pTypeDecl)),true);
    }
    break;

  case 266: /* expr_new: "new" new_type_declaration '(' expr_list ')'  */
                                                                                    {
        auto pNew = new ExprNew(tokAt(scanner,(yylsp[-4])),TypeDeclPtr((yyvsp[-3].pTypeDecl)),true);
        (yyval.pExpression) = parseFunctionArguments(pNew,(yyvsp[-1].pExpression));
    }
    break;

  case 267: /* expr_new: "new" make_decl  */
                                    {
        (yyval.pExpression) = new ExprAscend(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 268: /* expression_break: "break"  */
                       { (yyval.pExpression) = new ExprBreak(tokAt(scanner,(yylsp[0]))); }
    break;

  case 269: /* expression_continue: "continue"  */
                          { (yyval.pExpression) = new ExprContinue(tokAt(scanner,(yylsp[0]))); }
    break;

  case 270: /* expression_return_no_pipe: "return"  */
                        {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[0])),nullptr);
    }
    break;

  case 271: /* expression_return_no_pipe: "return" expr_list  */
                                           {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[-1])),sequenceToTuple((yyvsp[0].pExpression)));
    }
    break;

  case 272: /* expression_return_no_pipe: "return" "<-" expr_list  */
                                                  {
        auto pRet = new ExprReturn(tokAt(scanner,(yylsp[-2])),sequenceToTuple((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 273: /* expression_return: expression_return_no_pipe ';'  */
                                              {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 274: /* expression_return: "return" expr_pipe  */
                                           {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 275: /* expression_return: "return" "<-" expr_pipe  */
                                                  {
        auto pRet = new ExprReturn(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 276: /* expression_yield_no_pipe: "yield" expr  */
                                     {
        (yyval.pExpression) = new ExprYield(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 277: /* expression_yield_no_pipe: "yield" "<-" expr  */
                                            {
        auto pRet = new ExprYield(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 278: /* expression_yield: expression_yield_no_pipe ';'  */
                                             {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 279: /* expression_yield: "yield" expr_pipe  */
                                          {
        (yyval.pExpression) = new ExprYield(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 280: /* expression_yield: "yield" "<-" expr_pipe  */
                                                 {
        auto pRet = new ExprYield(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 281: /* expression_try_catch: "try" expression_block "recover" expression_block  */
                                                                                       {
        (yyval.pExpression) = new ExprTryCatch(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 282: /* kwd_let: "let"  */
                 { (yyval.b) = true; }
    break;

  case 283: /* kwd_let: "var"  */
                 { (yyval.b) = false; }
    break;

  case 284: /* optional_in_scope: "inscope"  */
                    { (yyval.b) = true; }
    break;

  case 285: /* optional_in_scope: %empty  */
                     { (yyval.b) = false; }
    break;

  case 286: /* tuple_expansion: "name"  */
                    {
        (yyval.pNameList) = new vector<string>();
        (yyval.pNameList)->push_back(*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 287: /* tuple_expansion: tuple_expansion ',' "name"  */
                                             {
        (yyvsp[-2].pNameList)->push_back(*(yyvsp[0].s));
        delete (yyvsp[0].s);
        (yyval.pNameList) = (yyvsp[-2].pNameList);
    }
    break;

  case 288: /* tuple_expansion_variable_declaration: "[[" tuple_expansion ']' ']' ':' type_declaration_no_options copy_or_move_or_clone expr ';'  */
                                                                                                                                  {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-7].pNameList),tokAt(scanner,(yylsp[-7])),(yyvsp[-3].pTypeDecl),(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
        (yyval.pVarDecl)->isTupleExpansion = true;
    }
    break;

  case 289: /* tuple_expansion_variable_declaration: "[[" tuple_expansion ']' ']' optional_ref copy_or_move_or_clone expr ';'  */
                                                                                                          {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-6]));
        typeDecl->ref = (yyvsp[-3].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-6].pNameList),tokAt(scanner,(yylsp[-6])),typeDecl,(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
        (yyval.pVarDecl)->isTupleExpansion = true;
    }
    break;

  case 290: /* expression_let: kwd_let optional_in_scope let_variable_declaration  */
                                                                 {
        (yyval.pExpression) = ast_Let(scanner,(yyvsp[-2].b),(yyvsp[-1].b),(yyvsp[0].pVarDecl),tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 291: /* expression_let: kwd_let optional_in_scope tuple_expansion_variable_declaration  */
                                                                             {
        (yyval.pExpression) = ast_Let(scanner,(yyvsp[-2].b),(yyvsp[-1].b),(yyvsp[0].pVarDecl),tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 292: /* $@12: %empty  */
                          { yyextra->das_arrow_depth ++; }
    break;

  case 293: /* $@13: %empty  */
                                                                                                 { yyextra->das_arrow_depth --; }
    break;

  case 294: /* expr_cast: "cast" '<' $@12 type_declaration_no_options '>' $@13 expr  */
                                                                                                                                                {
        (yyval.pExpression) = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
    }
    break;

  case 295: /* $@14: %empty  */
                            { yyextra->das_arrow_depth ++; }
    break;

  case 296: /* $@15: %empty  */
                                                                                                   { yyextra->das_arrow_depth --; }
    break;

  case 297: /* expr_cast: "upcast" '<' $@14 type_declaration_no_options '>' $@15 expr  */
                                                                                                                                                  {
        auto pCast = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCast->upcast = true;
        (yyval.pExpression) = pCast;
    }
    break;

  case 298: /* $@16: %empty  */
                                 { yyextra->das_arrow_depth ++; }
    break;

  case 299: /* $@17: %empty  */
                                                                                                        { yyextra->das_arrow_depth --; }
    break;

  case 300: /* expr_cast: "reinterpret" '<' $@16 type_declaration_no_options '>' $@17 expr  */
                                                                                                                                                       {
        auto pCast = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCast->reinterpret = true;
        (yyval.pExpression) = pCast;
    }
    break;

  case 301: /* $@18: %empty  */
                         { yyextra->das_arrow_depth ++; }
    break;

  case 302: /* $@19: %empty  */
                                                                                     { yyextra->das_arrow_depth --; }
    break;

  case 303: /* expr_type_decl: "type" '<' $@18 type_declaration '>' $@19  */
                                                                                                                      {
        (yyval.pExpression) = new ExprTypeDecl(tokAt(scanner,(yylsp[-5])),TypeDeclPtr((yyvsp[-2].pTypeDecl)));
    }
    break;

  case 304: /* expr_type_info: "typeinfo" '(' name_in_namespace expr ')'  */
                                                                         {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-4])),*(yyvsp[-2].s),ptd->typeexpr);
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-4])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[-1].pExpression)));
            }
            delete (yyvsp[-2].s);
    }
    break;

  case 305: /* expr_type_info: "typeinfo" '(' name_in_namespace '<' "name" '>' expr ')'  */
                                                                                                {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-7])),*(yyvsp[-5].s),ptd->typeexpr,*(yyvsp[-3].s));
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-7])),*(yyvsp[-5].s),ExpressionPtr((yyvsp[-1].pExpression)),*(yyvsp[-3].s));
            }
            delete (yyvsp[-5].s);
            delete (yyvsp[-3].s);
    }
    break;

  case 306: /* expr_type_info: "typeinfo" '(' name_in_namespace '<' "name" ';' "name" '>' expr ')'  */
                                                                                                                     {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-9])),*(yyvsp[-7].s),ptd->typeexpr,*(yyvsp[-5].s),*(yyvsp[-3].s));
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-9])),*(yyvsp[-7].s),ExpressionPtr((yyvsp[-1].pExpression)),*(yyvsp[-5].s),*(yyvsp[-3].s));
            }
            delete (yyvsp[-7].s);
            delete (yyvsp[-5].s);
            delete (yyvsp[-3].s);
    }
    break;

  case 307: /* expr_list: expr  */
                      {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 308: /* expr_list: expr_list ',' expr  */
                                            {
            (yyval.pExpression) = new ExprSequence(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 309: /* block_or_simple_block: expression_block  */
                                    { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 310: /* block_or_simple_block: "=>" expr  */
                                        {
            auto retE = make_smart<ExprReturn>(tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[0].pExpression)));
            auto blkE = new ExprBlock();
            blkE->at = tokAt(scanner,(yylsp[-1]));
            blkE->list.push_back(retE);
            (yyval.pExpression) = blkE;
    }
    break;

  case 311: /* block_or_simple_block: "=>" "<-" expr  */
                                               {
            auto retE = make_smart<ExprReturn>(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[0].pExpression)));
            retE->moveSemantics = true;
            auto blkE = new ExprBlock();
            blkE->at = tokAt(scanner,(yylsp[-2]));
            blkE->list.push_back(retE);
            (yyval.pExpression) = blkE;
    }
    break;

  case 312: /* block_or_lambda: '$'  */
                { (yyval.i) = 0;   /* block */  }
    break;

  case 313: /* block_or_lambda: '@'  */
                { (yyval.i) = 1;   /* lambda */ }
    break;

  case 314: /* block_or_lambda: '@' '@'  */
                { (yyval.i) = 2;   /* local function */ }
    break;

  case 315: /* capture_entry: '&' "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_reference); delete (yyvsp[0].s); }
    break;

  case 316: /* capture_entry: '=' "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_copy); delete (yyvsp[0].s); }
    break;

  case 317: /* capture_entry: "<-" "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_move); delete (yyvsp[0].s); }
    break;

  case 318: /* capture_entry: ":=" "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_clone); delete (yyvsp[0].s); }
    break;

  case 319: /* capture_list: capture_entry  */
                         {
        (yyval.pCaptList) = new vector<CaptureEntry>();
        (yyval.pCaptList)->push_back(*(yyvsp[0].pCapt));
        delete (yyvsp[0].pCapt);
    }
    break;

  case 320: /* capture_list: capture_list ',' capture_entry  */
                                               {
        (yyvsp[-2].pCaptList)->push_back(*(yyvsp[0].pCapt));
        delete (yyvsp[0].pCapt);
        (yyval.pCaptList) = (yyvsp[-2].pCaptList);
    }
    break;

  case 321: /* optional_capture_list: %empty  */
        { (yyval.pCaptList) = nullptr; }
    break;

  case 322: /* optional_capture_list: "[[" capture_list ']' ']'  */
                                         { (yyval.pCaptList) = (yyvsp[-2].pCaptList); }
    break;

  case 323: /* expr_block: expression_block  */
                                            {
        ExprBlock * closure = (ExprBlock *) (yyvsp[0].pExpression);
        (yyval.pExpression) = new ExprMakeBlock(tokAt(scanner,(yylsp[0])),ExpressionPtr((yyvsp[0].pExpression)));
        closure->returnType = make_smart<TypeDecl>(Type::autoinfer);
    }
    break;

  case 324: /* expr_block: block_or_lambda optional_annotation_list optional_capture_list optional_function_argument_list optional_function_type block_or_simple_block  */
                                                                                            {
        (yyval.pExpression) = ast_makeBlock(scanner,(yyvsp[-5].i),(yyvsp[-4].faList),(yyvsp[-3].pCaptList),(yyvsp[-2].pVarDeclList),(yyvsp[-1].pTypeDecl),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[0])),tokAt(scanner,(yylsp[-4])));
    }
    break;

  case 325: /* expr_numeric_const: "integer constant"  */
                                              { (yyval.pExpression) = new ExprConstInt(tokAt(scanner,(yylsp[0])),(int32_t)(yyvsp[0].i)); }
    break;

  case 326: /* expr_numeric_const: "unsigned integer constant"  */
                                              { (yyval.pExpression) = new ExprConstUInt(tokAt(scanner,(yylsp[0])),(uint32_t)(yyvsp[0].ui)); }
    break;

  case 327: /* expr_numeric_const: "long integer constant"  */
                                              { (yyval.pExpression) = new ExprConstInt64(tokAt(scanner,(yylsp[0])),(int64_t)(yyvsp[0].i64)); }
    break;

  case 328: /* expr_numeric_const: "unsigned long integer constant"  */
                                              { (yyval.pExpression) = new ExprConstUInt64(tokAt(scanner,(yylsp[0])),(uint64_t)(yyvsp[0].ui64)); }
    break;

  case 329: /* expr_numeric_const: "unsigned int8 constant"  */
                                              { (yyval.pExpression) = new ExprConstUInt8(tokAt(scanner,(yylsp[0])),(uint8_t)(yyvsp[0].ui)); }
    break;

  case 330: /* expr_numeric_const: "floating point constant"  */
                                              { (yyval.pExpression) = new ExprConstFloat(tokAt(scanner,(yylsp[0])),(float)(yyvsp[0].fd)); }
    break;

  case 331: /* expr_numeric_const: "double constant"  */
                                              { (yyval.pExpression) = new ExprConstDouble(tokAt(scanner,(yylsp[0])),(double)(yyvsp[0].d)); }
    break;

  case 332: /* expr_assign: expr  */
                                             { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 333: /* expr_assign: expr '=' expr  */
                                             { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 334: /* expr_assign: expr "<-" expr  */
                                             { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 335: /* expr_assign: expr ":=" expr  */
                                             { (yyval.pExpression) = new ExprClone(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 336: /* expr_assign: expr "&=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 337: /* expr_assign: expr "|=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"|=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 338: /* expr_assign: expr "^=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 339: /* expr_assign: expr "&&=" expr  */
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&&=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 340: /* expr_assign: expr "||=" expr  */
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"||=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 341: /* expr_assign: expr "^^=" expr  */
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^^=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 342: /* expr_assign: expr "+=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"+=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 343: /* expr_assign: expr "-=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"-=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 344: /* expr_assign: expr "*=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"*=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 345: /* expr_assign: expr "/=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"/=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 346: /* expr_assign: expr "%=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"%=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 347: /* expr_assign: expr "<<=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 348: /* expr_assign: expr ">>=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 349: /* expr_assign: expr "<<<=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 350: /* expr_assign: expr ">>>=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>>=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 351: /* expr_assign_pipe: expr '=' "@ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 352: /* expr_assign_pipe: expr '=' "@@ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 353: /* expr_assign_pipe: expr '=' "$ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 354: /* expr_assign_pipe: expr "<-" "@ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 355: /* expr_assign_pipe: expr "<-" "@@ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 356: /* expr_assign_pipe: expr "<-" "$ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 357: /* expr_named_call: name_in_namespace '(' '[' make_struct_fields ']' ')'  */
                                                                         {
        auto nc = new ExprNamedCall(tokAt(scanner,(yylsp[-5])),*(yyvsp[-5].s));
        nc->arguments = *(yyvsp[-2].pMakeStruct);
        delete (yyvsp[-2].pMakeStruct);
        delete (yyvsp[-5].s);
        (yyval.pExpression) = nc;
    }
    break;

  case 358: /* expr_named_call: name_in_namespace '(' expr_list ',' '[' make_struct_fields ']' ')'  */
                                                                                                  {
        auto nc = new ExprNamedCall(tokAt(scanner,(yylsp[-7])),*(yyvsp[-7].s));
        nc->nonNamedArguments = sequenceToList((yyvsp[-5].pExpression));
        nc->arguments = *(yyvsp[-2].pMakeStruct);
        delete (yyvsp[-2].pMakeStruct);
        delete (yyvsp[-7].s);
        (yyval.pExpression) = nc;
    }
    break;

  case 359: /* expr_method_call: expr "->" "name" '(' ')'  */
                                                         {
        auto pInvoke = makeInvokeMethod(tokAt(scanner,(yylsp[-3])), (yyvsp[-4].pExpression), *(yyvsp[-2].s));
        delete (yyvsp[-2].s);
        (yyval.pExpression) = pInvoke;
    }
    break;

  case 360: /* expr_method_call: expr "->" "name" '(' expr_list ')'  */
                                                                              {
        auto pInvoke = makeInvokeMethod(tokAt(scanner,(yylsp[-4])), (yyvsp[-5].pExpression), *(yyvsp[-3].s));
        auto callArgs = sequenceToList((yyvsp[-1].pExpression));
        pInvoke->arguments.insert ( pInvoke->arguments.end(), callArgs.begin(), callArgs.end() );
        delete (yyvsp[-3].s);
        (yyval.pExpression) = pInvoke;
    }
    break;

  case 361: /* func_addr_name: name_in_namespace  */
                                    {
        (yyval.pExpression) = new ExprAddr(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 362: /* func_addr_name: "$i" '(' expr ')'  */
                                          {
        auto expr = new ExprAddr(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``ADDR``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression), expr, "i");
    }
    break;

  case 363: /* func_addr_expr: '@' '@' func_addr_name  */
                                          {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 364: /* $@20: %empty  */
                    { yyextra->das_arrow_depth ++; }
    break;

  case 365: /* $@21: %empty  */
                                                                                                { yyextra->das_arrow_depth --; }
    break;

  case 366: /* func_addr_expr: '@' '@' '<' $@20 type_declaration_no_options '>' $@21 func_addr_name  */
                                                                                                                                                       {
        auto expr = (ExprAddr *) ((yyvsp[0].pExpression)->rtti_isAddr() ? (yyvsp[0].pExpression) : (((ExprTag *) (yyvsp[0].pExpression))->value.get()));
        expr->funcType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 367: /* $@22: %empty  */
                    { yyextra->das_arrow_depth ++; }
    break;

  case 368: /* $@23: %empty  */
                                                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 369: /* func_addr_expr: '@' '@' '<' $@22 optional_function_argument_list optional_function_type '>' $@23 func_addr_name  */
                                                                                                                                                                                     {
        auto expr = (ExprAddr *) ((yyvsp[0].pExpression)->rtti_isAddr() ? (yyvsp[0].pExpression) : (((ExprTag *) (yyvsp[0].pExpression))->value.get()));
        expr->funcType = make_smart<TypeDecl>(Type::tFunction);
        expr->funcType->firstType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        if ( (yyvsp[-4].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, expr->funcType.get(), (yyvsp[-4].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-4].pVarDeclList));
        }
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 370: /* expr_field: expr '.' "name"  */
                                              {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 371: /* expr_field: expr '.' '.' "name"  */
                                                  {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-3].pExpression)), *(yyvsp[0].s), true);
        delete (yyvsp[0].s);
    }
    break;

  case 372: /* expr_field: expr '.' "name" '(' ')'  */
                                                  {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-3])), tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-4].pExpression)), *(yyvsp[-2].s));
        delete (yyvsp[-2].s);
        das_yyerror(scanner,"foo.bar() method call syntax is not supported, use foo->bar() instead",
            tokAt(scanner,(yylsp[-3])),CompilationError::syntax_error);
    }
    break;

  case 373: /* expr_field: expr '.' "name" '(' expr_list ')'  */
                                                                       {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-3])), ExpressionPtr((yyvsp[-5].pExpression)), *(yyvsp[-3].s));
        delete (yyvsp[-3].s);
        das_yyerror(scanner,"foo.bar(...) method call syntax is not supported, use foo->bar(...) instead",
            tokAt(scanner,(yylsp[-4])),CompilationError::syntax_error);
        delete (yyvsp[-1].pExpression);
    }
    break;

  case 374: /* $@24: %empty  */
                               { yyextra->das_suppress_errors=true; }
    break;

  case 375: /* $@25: %empty  */
                                                                            { yyextra->das_suppress_errors=false; }
    break;

  case 376: /* expr_field: expr '.' $@24 error $@25  */
                                                                                                                    {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-3])), tokAt(scanner,(yylsp[-3])), ExpressionPtr((yyvsp[-4].pExpression)), "");
        yyerrok;
    }
    break;

  case 377: /* expr: "null"  */
                                              { (yyval.pExpression) = new ExprConstPtr(tokAt(scanner,(yylsp[0])),nullptr); }
    break;

  case 378: /* expr: name_in_namespace  */
                                              { (yyval.pExpression) = new ExprVar(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 379: /* expr: expr_numeric_const  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 380: /* expr: expr_reader  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 381: /* expr: string_builder  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 382: /* expr: make_decl  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 383: /* expr: "true"  */
                                              { (yyval.pExpression) = new ExprConstBool(tokAt(scanner,(yylsp[0])),true); }
    break;

  case 384: /* expr: "false"  */
                                              { (yyval.pExpression) = new ExprConstBool(tokAt(scanner,(yylsp[0])),false); }
    break;

  case 385: /* expr: expr_field  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 386: /* expr: expr_mtag  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 387: /* expr: '!' expr  */
                                              { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"!",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 388: /* expr: '~' expr  */
                                              { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"~",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 389: /* expr: '+' expr  */
                                                  { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"+",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 390: /* expr: '-' expr  */
                                                  { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"-",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 391: /* expr: expr "<<" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 392: /* expr: expr ">>" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 393: /* expr: expr "<<<" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 394: /* expr: expr ">>>" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>>", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 395: /* expr: expr '+' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"+", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 396: /* expr: expr '-' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"-", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 397: /* expr: expr '*' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"*", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 398: /* expr: expr '/' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"/", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 399: /* expr: expr '%' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"%", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 400: /* expr: expr '<' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 401: /* expr: expr '>' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 402: /* expr: expr "==" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"==", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 403: /* expr: expr "!=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"!=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 404: /* expr: expr "<=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 405: /* expr: expr ">=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 406: /* expr: expr '&' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 407: /* expr: expr '|' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"|", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 408: /* expr: expr '^' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 409: /* expr: expr "&&" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&&", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 410: /* expr: expr "||" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"||", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 411: /* expr: expr "^^" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^^", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 412: /* expr: expr ".." expr  */
                                             {
        auto itv = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-1])),"interval");
        itv->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        itv->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = itv;
    }
    break;

  case 413: /* expr: "++" expr  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"++", ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 414: /* expr: "--" expr  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"--", ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 415: /* expr: expr "++"  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[0])),"+++", ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 416: /* expr: expr "--"  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[0])),"---", ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 417: /* expr: '(' expr ')'  */
                                                 { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 418: /* expr: expr '[' expr ']'  */
                                                 { (yyval.pExpression) = new ExprAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 419: /* expr: expr '.' '[' expr ']'  */
                                                     { (yyval.pExpression) = new ExprAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-4].pExpression)), ExpressionPtr((yyvsp[-1].pExpression)), true); }
    break;

  case 420: /* expr: expr "?[" expr ']'  */
                                                 { (yyval.pExpression) = new ExprSafeAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 421: /* expr: expr '.' "?[" expr ']'  */
                                                     { (yyval.pExpression) = new ExprSafeAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-4].pExpression)), ExpressionPtr((yyvsp[-1].pExpression)), true); }
    break;

  case 422: /* expr: expr "?." "name"  */
                                                 { (yyval.pExpression) = new ExprSafeField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 423: /* expr: expr '.' "?." "name"  */
                                                     { (yyval.pExpression) = new ExprSafeField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-3].pExpression)), *(yyvsp[0].s), true); delete (yyvsp[0].s); }
    break;

  case 424: /* expr: func_addr_expr  */
                                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 425: /* expr: name_in_namespace '(' ')'  */
                                               {
            (yyval.pExpression) = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])),*(yyvsp[-2].s));
            delete (yyvsp[-2].s);
        }
    break;

  case 426: /* expr: name_in_namespace '(' expr_list ')'  */
                                                                    {
            (yyval.pExpression) = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),tokAt(scanner,(yylsp[0])),*(yyvsp[-3].s)),(yyvsp[-1].pExpression));
            delete (yyvsp[-3].s);
        }
    break;

  case 427: /* expr: basic_type_declaration '(' ')'  */
                                                    {
        (yyval.pExpression) = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])),das_to_string((yyvsp[-2].type)));
    }
    break;

  case 428: /* expr: basic_type_declaration '(' expr_list ')'  */
                                                                         {
        (yyval.pExpression) = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),tokAt(scanner,(yylsp[0])),das_to_string((yyvsp[-3].type))),(yyvsp[-1].pExpression));
    }
    break;

  case 429: /* expr: '*' expr  */
                                                   { (yyval.pExpression) = new ExprPtr2Ref(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 430: /* expr: "deref" '(' expr ')'  */
                                                   { (yyval.pExpression) = new ExprPtr2Ref(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 431: /* expr: "addr" '(' expr ')'  */
                                                   { (yyval.pExpression) = new ExprRef2Ptr(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 432: /* expr: "generator" '<' type_declaration_no_options '>' optional_capture_list '(' ')'  */
                                                                                                              {
        (yyval.pExpression) = ast_makeGenerator(scanner,(yyvsp[-4].pTypeDecl),(yyvsp[-2].pCaptList),nullptr,tokAt(scanner,(yylsp[-6])));
    }
    break;

  case 433: /* expr: "generator" '<' type_declaration_no_options '>' optional_capture_list '(' expr ')'  */
                                                                                                                            {
        (yyval.pExpression) = ast_makeGenerator(scanner,(yyvsp[-5].pTypeDecl),(yyvsp[-3].pCaptList),(yyvsp[-1].pExpression),tokAt(scanner,(yylsp[-7])));
    }
    break;

  case 434: /* expr: expr "??" expr  */
                                                   { (yyval.pExpression) = new ExprNullCoalescing(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 435: /* expr: expr '?' expr ':' expr  */
                                                          {
            (yyval.pExpression) = new ExprOp3(tokAt(scanner,(yylsp[-3])),"?",ExpressionPtr((yyvsp[-4].pExpression)),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        }
    break;

  case 436: /* $@26: %empty  */
                                               { yyextra->das_arrow_depth ++; }
    break;

  case 437: /* $@27: %empty  */
                                                                                                                      { yyextra->das_arrow_depth --; }
    break;

  case 438: /* expr: expr "is" "type" '<' $@26 type_declaration_no_options '>' $@27  */
                                                                                                                                                       {
        (yyval.pExpression) = new ExprIs(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-7].pExpression)),TypeDeclPtr((yyvsp[-2].pTypeDecl)));
    }
    break;

  case 439: /* expr: expr "is" basic_type_declaration  */
                                                               {
        auto vdecl = new TypeDecl((yyvsp[0].type));
        vdecl->at = tokAt(scanner,(yylsp[0]));
        (yyval.pExpression) = new ExprIs(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),vdecl);
    }
    break;

  case 440: /* expr: expr "is" "name"  */
                                              {
        (yyval.pExpression) = new ExprIsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 441: /* expr: expr "as" "name"  */
                                              {
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 442: /* $@28: %empty  */
                                               { yyextra->das_arrow_depth ++; }
    break;

  case 443: /* $@29: %empty  */
                                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 444: /* expr: expr "as" "type" '<' $@28 type_declaration '>' $@29  */
                                                                                                                                            {
        auto vname = (yyvsp[-2].pTypeDecl)->describe();
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-7].pExpression)),vname);
        delete (yyvsp[-2].pTypeDecl);
    }
    break;

  case 445: /* expr: expr "as" basic_type_declaration  */
                                                               {
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),das_to_string((yyvsp[0].type)));
    }
    break;

  case 446: /* expr: expr '?' "as" "name"  */
                                                  {
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-3].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 447: /* $@30: %empty  */
                                                   { yyextra->das_arrow_depth ++; }
    break;

  case 448: /* $@31: %empty  */
                                                                                                               { yyextra->das_arrow_depth --; }
    break;

  case 449: /* expr: expr '?' "as" "type" '<' $@30 type_declaration '>' $@31  */
                                                                                                                                                {
        auto vname = (yyvsp[-2].pTypeDecl)->describe();
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-8].pExpression)),vname);
        delete (yyvsp[-2].pTypeDecl);
    }
    break;

  case 450: /* expr: expr '?' "as" basic_type_declaration  */
                                                                   {
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-3].pExpression)),das_to_string((yyvsp[0].type)));
    }
    break;

  case 451: /* expr: expr_type_info  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 452: /* expr: expr_type_decl  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 453: /* expr: expr_cast  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 454: /* expr: expr_new  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 455: /* expr: expr_method_call  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 456: /* expr: expr_named_call  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 457: /* expr: expr_block  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 458: /* expr: expr "<|" expr  */
                                                { (yyval.pExpression) = ast_lpipe(scanner,(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-1]))); }
    break;

  case 459: /* expr: expr "|>" expr  */
                                                { (yyval.pExpression) = ast_rpipe(scanner,(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-1]))); }
    break;

  case 460: /* expr: expr "|>" basic_type_declaration  */
                                                          {
        auto fncall = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[0])),tokAt(scanner,(yylsp[0])),das_to_string((yyvsp[0].type)));
        (yyval.pExpression) = ast_rpipe(scanner,(yyvsp[-2].pExpression),fncall,tokAt(scanner,(yylsp[-1])));
    }
    break;

  case 461: /* expr: name_in_namespace "name"  */
                                                { (yyval.pExpression) = ast_NameName(scanner,(yyvsp[-1].s),(yyvsp[0].s),tokAt(scanner,(yylsp[-1])),tokAt(scanner,(yylsp[0]))); }
    break;

  case 462: /* expr: "unsafe" '(' expr ')'  */
                                         {
        (yyvsp[-1].pExpression)->alwaysSafe = true;
        (yyvsp[-1].pExpression)->userSaidItsSafe = true;
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 463: /* expr: expression_keyword  */
                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 464: /* expr_mtag: "$$" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"e"); }
    break;

  case 465: /* expr_mtag: "$i" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"i"); }
    break;

  case 466: /* expr_mtag: "$v" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"v"); }
    break;

  case 467: /* expr_mtag: "$b" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"b"); }
    break;

  case 468: /* expr_mtag: "$a" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"a"); }
    break;

  case 469: /* expr_mtag: "..."  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[0])),nullptr,"..."); }
    break;

  case 470: /* expr_mtag: "$c" '(' expr ')' '(' ')'  */
                                                            {
            auto ccall = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-5])),tokAt(scanner,(yylsp[0])),"``MACRO``TAG``CALL``");
            (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-5])),(yyvsp[-3].pExpression),ccall,"c");
        }
    break;

  case 471: /* expr_mtag: "$c" '(' expr ')' '(' expr_list ')'  */
                                                                                {
            auto ccall = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-6])),tokAt(scanner,(yylsp[0])),"``MACRO``TAG``CALL``"),(yyvsp[-1].pExpression));
            (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-6])),(yyvsp[-4].pExpression),ccall,"c");
        }
    break;

  case 472: /* expr_mtag: expr '.' "$f" '(' expr ')'  */
                                                                {
        auto cfield = new ExprField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-5].pExpression)), "``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 473: /* expr_mtag: expr "?." "$f" '(' expr ')'  */
                                                                 {
        auto cfield = new ExprSafeField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-5].pExpression)), "``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 474: /* expr_mtag: expr '.' '.' "$f" '(' expr ')'  */
                                                                    {
        auto cfield = new ExprField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-6].pExpression)), "``MACRO``TAG``FIELD``", true);
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 475: /* expr_mtag: expr '.' "?." "$f" '(' expr ')'  */
                                                                     {
        auto cfield = new ExprSafeField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-6].pExpression)), "``MACRO``TAG``FIELD``", true);
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 476: /* expr_mtag: expr "as" "$f" '(' expr ')'  */
                                                                   {
        auto cfield = new ExprAsVariant(tokAt(scanner,(yylsp[-4])),ExpressionPtr((yyvsp[-5].pExpression)),"``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 477: /* expr_mtag: expr '?' "as" "$f" '(' expr ')'  */
                                                                       {
        auto cfield = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-4])),ExpressionPtr((yyvsp[-6].pExpression)),"``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 478: /* expr_mtag: expr "is" "$f" '(' expr ')'  */
                                                                   {
        auto cfield = new ExprIsVariant(tokAt(scanner,(yylsp[-4])),ExpressionPtr((yyvsp[-5].pExpression)),"``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 479: /* expr_mtag: '@' '@' "$c" '(' expr ')'  */
                                                         {
        auto ccall = new ExprAddr(tokAt(scanner,(yylsp[-4])),"``MACRO``TAG``ADDR``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-3])),(yyvsp[-1].pExpression),ccall,"c");
    }
    break;

  case 480: /* optional_field_annotation: %empty  */
                                                        { (yyval.aaList) = nullptr; }
    break;

  case 481: /* optional_field_annotation: "[[" annotation_argument_list ']' ']'  */
                                                        { (yyval.aaList) = (yyvsp[-2].aaList); }
    break;

  case 482: /* optional_override: %empty  */
                      { (yyval.i) = OVERRIDE_NONE; }
    break;

  case 483: /* optional_override: "override"  */
                      { (yyval.i) = OVERRIDE_OVERRIDE; }
    break;

  case 484: /* optional_override: "sealed"  */
                      { (yyval.i) = OVERRIDE_SEALED; }
    break;

  case 485: /* optional_constant: %empty  */
                        { (yyval.b) = false; }
    break;

  case 486: /* optional_constant: "const"  */
                        { (yyval.b) = true; }
    break;

  case 487: /* optional_public_or_private_member_variable: %empty  */
                        { (yyval.b) = false; }
    break;

  case 488: /* optional_public_or_private_member_variable: "public"  */
                        { (yyval.b) = false; }
    break;

  case 489: /* optional_public_or_private_member_variable: "private"  */
                        { (yyval.b) = true; }
    break;

  case 490: /* optional_static_member_variable: %empty  */
                        { (yyval.b) = false; }
    break;

  case 491: /* optional_static_member_variable: "static"  */
                        { (yyval.b) = true; }
    break;

  case 492: /* structure_variable_declaration: optional_field_annotation optional_static_member_variable optional_override optional_public_or_private_member_variable variable_declaration  */
                                                                                                                                                                                      {
        (yyvsp[0].pVarDecl)->override = (yyvsp[-2].i) == OVERRIDE_OVERRIDE;
        (yyvsp[0].pVarDecl)->sealed = (yyvsp[-2].i) == OVERRIDE_SEALED;
        (yyvsp[0].pVarDecl)->annotation = (yyvsp[-4].aaList);
        (yyvsp[0].pVarDecl)->isPrivate = (yyvsp[-1].b);
        (yyvsp[0].pVarDecl)->isStatic = (yyvsp[-3].b);
        (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
    }
    break;

  case 493: /* struct_variable_declaration_list: %empty  */
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 494: /* $@32: %empty  */
                                               {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeStructureFields(tak);
        }
    }
    break;

  case 495: /* struct_variable_declaration_list: struct_variable_declaration_list $@32 structure_variable_declaration ';'  */
                                               {
        (yyval.pVarDeclList) = (yyvsp[-3].pVarDeclList);
        if ( (yyvsp[-1].pVarDecl) ) (yyvsp[-3].pVarDeclList)->push_back((yyvsp[-1].pVarDecl));
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-3]));
            for ( auto & crd : yyextra->g_CommentReaders ) {
                for ( const auto & nl : *((yyvsp[-1].pVarDecl)->pNameList) ) {
                    crd->afterStructureField(nl.name.c_str(), nl.at);
                }
            }
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterStructureFields(tak);
        }
    }
    break;

  case 496: /* $@33: %empty  */
                                                                                                                     {
                yyextra->das_force_oxford_comma=true;
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[-2]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
                }
            }
    break;

  case 497: /* struct_variable_declaration_list: struct_variable_declaration_list optional_annotation_list "def" optional_public_or_private_member_variable "abstract" optional_constant $@33 function_declaration_header ';'  */
                                                    {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[-1]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
                }
                (yyval.pVarDeclList) = ast_structVarDefAbstract(scanner,(yyvsp[-8].pVarDeclList),(yyvsp[-7].faList),(yyvsp[-5].b),(yyvsp[-3].b), (yyvsp[-1].pFuncDecl));
            }
    break;

  case 498: /* $@34: %empty  */
                                                                                                                                                                         {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[0]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
                }
            }
    break;

  case 499: /* struct_variable_declaration_list: struct_variable_declaration_list optional_annotation_list "def" optional_public_or_private_member_variable optional_static_member_variable optional_override optional_constant $@34 function_declaration_header expression_block  */
                                                                        {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[0]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
                }
                (yyval.pVarDeclList) = ast_structVarDef(scanner,(yyvsp[-9].pVarDeclList),(yyvsp[-8].faList),(yyvsp[-5].b),(yyvsp[-6].b),(yyvsp[-4].i),(yyvsp[-3].b),(yyvsp[-1].pFuncDecl),(yyvsp[0].pExpression),tokRangeAt(scanner,(yylsp[-7]),(yylsp[0])),tokAt(scanner,(yylsp[-8])));
            }
    break;

  case 500: /* struct_variable_declaration_list: struct_variable_declaration_list '[' annotation_list ']' ';'  */
                                                                                 {
        das_yyerror(scanner,"structure field or class method annotation expected to remain on the same line with the field or the class",
            tokAt(scanner,(yylsp[-2])), CompilationError::syntax_error);
        delete (yyvsp[-2].faList);
        (yyval.pVarDeclList) = (yyvsp[-4].pVarDeclList);
    }
    break;

  case 501: /* function_argument_declaration: optional_field_annotation variable_declaration  */
                                                                           {
            (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
            (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
            (yyvsp[0].pVarDecl)->pTypeDecl->constant = true;
            (yyvsp[0].pVarDecl)->annotation = (yyvsp[-1].aaList);
        }
    break;

  case 502: /* function_argument_declaration: optional_field_annotation "var" variable_declaration  */
                                                                           {
            (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
            (yyvsp[0].pVarDecl)->pTypeDecl->removeConstant = true;
            (yyvsp[0].pVarDecl)->annotation = (yyvsp[-2].aaList);
        }
    break;

  case 503: /* function_argument_declaration: "$a" '(' expr ')'  */
                                     {
            auto na = new vector<VariableNameAndPosition>();
            na->push_back(VariableNameAndPosition{"``MACRO``TAG``","",tokAt(scanner,(yylsp[-1]))});
            auto decl = new VariableDeclaration(na, new TypeDecl(Type::none), (yyvsp[-1].pExpression));
            decl->pTypeDecl->isTag = true;
            (yyval.pVarDecl) = decl;
        }
    break;

  case 504: /* function_argument_list: function_argument_declaration  */
                                                                                 { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 505: /* function_argument_list: function_argument_list ';' function_argument_declaration  */
                                                                                 { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 506: /* tuple_type: type_declaration  */
                                    {
        (yyval.pVarDecl) = new VariableDeclaration(nullptr,(yyvsp[0].pTypeDecl),nullptr);
    }
    break;

  case 507: /* tuple_type: "name" ':' type_declaration  */
                                                   {
        auto na = new vector<VariableNameAndPosition>();
        na->push_back(VariableNameAndPosition{*(yyvsp[-2].s),"",tokAt(scanner,(yylsp[-2]))});
        (yyval.pVarDecl) = new VariableDeclaration(na,(yyvsp[0].pTypeDecl),nullptr);
        delete (yyvsp[-2].s);
    }
    break;

  case 508: /* tuple_type_list: tuple_type  */
                                                       { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 509: /* tuple_type_list: tuple_type_list ';' tuple_type  */
                                                       { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 510: /* tuple_alias_type_list: %empty  */
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 511: /* tuple_alias_type_list: tuple_alias_type_list ';'  */
                                      {
        (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList);
    }
    break;

  case 512: /* tuple_alias_type_list: tuple_alias_type_list tuple_type ';'  */
                                                         {
        (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[-1].pVarDecl));
        /*
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tokName = tokAt(scanner,@decl);
            for ( auto & crd : yyextra->g_CommentReaders ) {
                for ( const auto & nl : *($decl->pNameList) ) {
                    crd->afterVariantEntry(nl.name.c_str(), nl.at);
                }
            }
        }
        */
    }
    break;

  case 513: /* variant_type: "name" ':' type_declaration  */
                                                   {
        auto na = new vector<VariableNameAndPosition>();
        na->push_back(VariableNameAndPosition{*(yyvsp[-2].s),"",tokAt(scanner,(yylsp[-2]))});
        (yyval.pVarDecl) = new VariableDeclaration(na,(yyvsp[0].pTypeDecl),nullptr);
        delete (yyvsp[-2].s);
    }
    break;

  case 514: /* variant_type_list: variant_type  */
                                                         { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 515: /* variant_type_list: variant_type_list ';' variant_type  */
                                                         { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 516: /* variant_alias_type_list: %empty  */
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 517: /* variant_alias_type_list: variant_alias_type_list ';'  */
                                        {
        (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList);
    }
    break;

  case 518: /* variant_alias_type_list: variant_alias_type_list variant_type ';'  */
                                                             {
        (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[-1].pVarDecl));
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tokName = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) {
                for ( const auto & nl : *((yyvsp[-1].pVarDecl)->pNameList) ) {
                    crd->afterVariantEntry(nl.name.c_str(), nl.at);
                }
            }
        }
    }
    break;

  case 519: /* copy_or_move: '='  */
                    { (yyval.b) = false; }
    break;

  case 520: /* copy_or_move: "<-"  */
                    { (yyval.b) = true; }
    break;

  case 521: /* variable_declaration: variable_name_with_pos_list  */
                                          {
        auto autoT = new TypeDecl(Type::autoinfer);
        autoT->at = tokAt(scanner,(yylsp[0]));
        autoT->ref = false;
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[0].pNameWithPosList),autoT,nullptr);
    }
    break;

  case 522: /* variable_declaration: variable_name_with_pos_list '&'  */
                                              {
        auto autoT = new TypeDecl(Type::autoinfer);
        autoT->at = tokAt(scanner,(yylsp[-1]));
        autoT->ref = true;
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-1].pNameWithPosList),autoT,nullptr);
    }
    break;

  case 523: /* variable_declaration: variable_name_with_pos_list ':' type_declaration  */
                                                                          {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),(yyvsp[0].pTypeDecl),nullptr);
    }
    break;

  case 524: /* variable_declaration: variable_name_with_pos_list ':' type_declaration copy_or_move expr  */
                                                                                                      {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),(yyvsp[-2].pTypeDecl),(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 525: /* variable_declaration: variable_name_with_pos_list copy_or_move expr  */
                                                                       {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-2]));
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 526: /* variable_declaration: variable_name_with_pos_list copy_or_move expr_pipe  */
                                                                            {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-2]));
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 527: /* copy_or_move_or_clone: '='  */
                    { (yyval.i) = CorM_COPY; }
    break;

  case 528: /* copy_or_move_or_clone: "<-"  */
                    { (yyval.i) = CorM_MOVE; }
    break;

  case 529: /* copy_or_move_or_clone: ":="  */
                    { (yyval.i) = CorM_CLONE; }
    break;

  case 530: /* optional_ref: %empty  */
            { (yyval.b) = false; }
    break;

  case 531: /* optional_ref: '&'  */
            { (yyval.b) = true; }
    break;

  case 532: /* let_variable_name_with_pos_list: "name"  */
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 533: /* let_variable_name_with_pos_list: "$i" '(' expr ')'  */
                                     {
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{"``MACRO``TAG``","",tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-1].pExpression))});
        (yyval.pNameWithPosList) = pSL;
    }
    break;

  case 534: /* let_variable_name_with_pos_list: "name" "aka" "name"  */
                                         {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 535: /* let_variable_name_with_pos_list: let_variable_name_with_pos_list ',' "name"  */
                                                             {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = (yyvsp[-2].pNameWithPosList);
        delete (yyvsp[0].s);
    }
    break;

  case 536: /* let_variable_name_with_pos_list: let_variable_name_with_pos_list ',' "name" "aka" "name"  */
                                                                                   {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-4].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = (yyvsp[-4].pNameWithPosList);
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 537: /* let_variable_declaration: let_variable_name_with_pos_list ':' type_declaration_no_options ';'  */
                                                                                            {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-3].pNameWithPosList),(yyvsp[-1].pTypeDecl),nullptr);
    }
    break;

  case 538: /* let_variable_declaration: let_variable_name_with_pos_list ':' type_declaration_no_options copy_or_move_or_clone expr ';'  */
                                                                                                                                  {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-5].pNameWithPosList),(yyvsp[-3].pTypeDecl),(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
    }
    break;

  case 539: /* let_variable_declaration: let_variable_name_with_pos_list ':' type_declaration_no_options copy_or_move_or_clone expr_pipe  */
                                                                                                                                   {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),(yyvsp[-2].pTypeDecl),(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-1].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-1].i) & CorM_CLONE) !=0;
    }
    break;

  case 540: /* let_variable_declaration: let_variable_name_with_pos_list optional_ref copy_or_move_or_clone expr ';'  */
                                                                                                          {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-4]));
        typeDecl->ref = (yyvsp[-3].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),typeDecl,(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
    }
    break;

  case 541: /* let_variable_declaration: let_variable_name_with_pos_list optional_ref copy_or_move_or_clone expr_pipe  */
                                                                                                           {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-3]));
        typeDecl->ref = (yyvsp[-2].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-3].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-1].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-1].i) & CorM_CLONE) !=0;
    }
    break;

  case 542: /* global_variable_declaration_list: %empty  */
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 543: /* $@35: %empty  */
                                               {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeGlobalVariables(tak);
        }
    }
    break;

  case 544: /* global_variable_declaration_list: global_variable_declaration_list $@35 optional_field_annotation let_variable_declaration  */
                                                                      {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders )
                for ( auto & nl : *((yyvsp[0].pVarDecl)->pNameList) )
                    crd->afterGlobalVariable(nl.name.c_str(),tak);
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterGlobalVariables(tak);
        }
        (yyval.pVarDeclList) = (yyvsp[-3].pVarDeclList);
        (yyvsp[0].pVarDecl)->annotation = (yyvsp[-1].aaList);
        (yyvsp[-3].pVarDeclList)->push_back((yyvsp[0].pVarDecl));
    }
    break;

  case 545: /* optional_shared: %empty  */
                     { (yyval.b) = false; }
    break;

  case 546: /* optional_shared: "shared"  */
                     { (yyval.b) = true; }
    break;

  case 547: /* optional_public_or_private_variable: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 548: /* optional_public_or_private_variable: "private"  */
                     { (yyval.b) = false; }
    break;

  case 549: /* optional_public_or_private_variable: "public"  */
                     { (yyval.b) = true; }
    break;

  case 550: /* global_let: kwd_let optional_shared optional_public_or_private_variable '{' global_variable_declaration_list '}'  */
                                                                                                                                       {
        ast_globalLetList(scanner,(yyvsp[-5].b),(yyvsp[-4].b),(yyvsp[-3].b),(yyvsp[-1].pVarDeclList));
    }
    break;

  case 551: /* $@36: %empty  */
                                                                                        {
        yyextra->das_force_oxford_comma=true;
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeGlobalVariables(tak);
        }
    }
    break;

  case 552: /* global_let: kwd_let optional_shared optional_public_or_private_variable $@36 optional_field_annotation let_variable_declaration  */
                                                                    {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders )
                for ( auto & nl : *((yyvsp[0].pVarDecl)->pNameList) )
                    crd->afterGlobalVariable(nl.name.c_str(),tak);
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterGlobalVariables(tak);
        }
        ast_globalLet(scanner,(yyvsp[-5].b),(yyvsp[-4].b),(yyvsp[-3].b),(yyvsp[-1].aaList),(yyvsp[0].pVarDecl));
    }
    break;

  case 553: /* enum_list: %empty  */
        {
        (yyval.pEnum) = new Enumeration();
    }
    break;

  case 554: /* enum_list: enum_list ';'  */
                          {
        (yyval.pEnum) = (yyvsp[-1].pEnum);
    }
    break;

  case 555: /* enum_list: enum_list "name" ';'  */
                                     {
        das_checkName(scanner,*(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])));
        if ( !(yyvsp[-2].pEnum)->add(*(yyvsp[-1].s),nullptr,tokAt(scanner,(yylsp[-1]))) ) {
            das_yyerror(scanner,"enumeration already declared " + *(yyvsp[-1].s), tokAt(scanner,(yylsp[-1])),
                CompilationError::enumeration_value_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tokName = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) {
                crd->afterEnumerationEntry((yyvsp[-1].s)->c_str(), tokName);
            }
        }
        delete (yyvsp[-1].s);
        (yyval.pEnum) = (yyvsp[-2].pEnum);
    }
    break;

  case 556: /* enum_list: enum_list "name" '=' expr ';'  */
                                                     {
        das_checkName(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])));
        if ( !(yyvsp[-4].pEnum)->add(*(yyvsp[-3].s),ExpressionPtr((yyvsp[-1].pExpression)),tokAt(scanner,(yylsp[-3]))) ) {
            das_yyerror(scanner,"enumeration value already declared " + *(yyvsp[-3].s), tokAt(scanner,(yylsp[-3])),
                CompilationError::enumeration_value_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tokName = tokAt(scanner,(yylsp[-3]));
            for ( auto & crd : yyextra->g_CommentReaders ) {
                crd->afterEnumerationEntry((yyvsp[-3].s)->c_str(), tokName);
            }
        }
        delete (yyvsp[-3].s);
        (yyval.pEnum) = (yyvsp[-4].pEnum);
    }
    break;

  case 557: /* optional_public_or_private_alias: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 558: /* optional_public_or_private_alias: "private"  */
                     { (yyval.b) = false; }
    break;

  case 559: /* optional_public_or_private_alias: "public"  */
                     { (yyval.b) = true; }
    break;

  case 560: /* $@37: %empty  */
                                                         {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeAlias(pubename);
        }
    }
    break;

  case 561: /* single_alias: optional_public_or_private_alias "name" $@37 '=' type_declaration  */
                                  {
        das_checkName(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])));
        (yyvsp[0].pTypeDecl)->isPrivateAlias = !(yyvsp[-4].b);
        (yyvsp[0].pTypeDecl)->alias = *(yyvsp[-3].s);
        if ( !yyextra->g_Program->addAlias(TypeDeclPtr((yyvsp[0].pTypeDecl))) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterAlias((yyvsp[-3].s)->c_str(),pubename);
        }
        delete (yyvsp[-3].s);
    }
    break;

  case 565: /* $@38: %empty  */
                    { yyextra->das_force_oxford_comma=true;}
    break;

  case 567: /* optional_public_or_private_enum: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 568: /* optional_public_or_private_enum: "private"  */
                     { (yyval.b) = false; }
    break;

  case 569: /* optional_public_or_private_enum: "public"  */
                     { (yyval.b) = true; }
    break;

  case 570: /* enum_name: "name"  */
                   {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeEnumeration(pubename);
        }
        (yyval.pEnum) = ast_addEmptyEnum(scanner, (yyvsp[0].s), tokAt(scanner,(yylsp[0])));
    }
    break;

  case 571: /* $@39: %empty  */
                                                                                                                {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeEnumerationEntries(tak);
        }
    }
    break;

  case 572: /* $@40: %empty  */
                    {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumerationEntries(tak);
        }
    }
    break;

  case 573: /* enum_declaration: optional_annotation_list "enum" optional_public_or_private_enum enum_name '{' $@39 enum_list $@40 '}'  */
          {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[-2]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumeration((yyvsp[-5].pEnum)->name.c_str(),pubename);
        }
        ast_enumDeclaration(scanner,(yyvsp[-8].faList),tokAt(scanner,(yylsp[-8])),(yyvsp[-6].b),(yyvsp[-5].pEnum),(yyvsp[-2].pEnum),Type::tInt);
    }
    break;

  case 574: /* $@41: %empty  */
                                                                                                                                                     {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-3]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeEnumerationEntries(tak);
        }
    }
    break;

  case 575: /* $@42: %empty  */
                    {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumerationEntries(tak);
        }
    }
    break;

  case 576: /* enum_declaration: optional_annotation_list "enum" optional_public_or_private_enum enum_name ':' enum_basic_type_declaration '{' $@41 enum_list $@42 '}'  */
          {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[-2]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumeration((yyvsp[-7].pEnum)->name.c_str(),pubename);
        }
        ast_enumDeclaration(scanner,(yyvsp[-10].faList),tokAt(scanner,(yylsp[-10])),(yyvsp[-8].b),(yyvsp[-7].pEnum),(yyvsp[-2].pEnum),(yyvsp[-5].type));
    }
    break;

  case 577: /* optional_structure_parent: %empty  */
                                        { (yyval.s) = nullptr; }
    break;

  case 578: /* optional_structure_parent: ':' name_in_namespace  */
                                        { (yyval.s) = (yyvsp[0].s); }
    break;

  case 579: /* optional_sealed: %empty  */
                        { (yyval.b) = false; }
    break;

  case 580: /* optional_sealed: "sealed"  */
                        { (yyval.b) = true; }
    break;

  case 581: /* structure_name: optional_sealed "name" optional_structure_parent  */
                                                                           {
        (yyval.pStructure) = ast_structureName(scanner,(yyvsp[-2].b),(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])),(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 582: /* class_or_struct: "class"  */
                    { (yyval.b) = true; }
    break;

  case 583: /* class_or_struct: "struct"  */
                    { (yyval.b) = false; }
    break;

  case 584: /* optional_public_or_private_structure: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 585: /* optional_public_or_private_structure: "private"  */
                     { (yyval.b) = false; }
    break;

  case 586: /* optional_public_or_private_structure: "public"  */
                     { (yyval.b) = true; }
    break;

  case 587: /* $@43: %empty  */
                                                                                                        {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeStructure(tak);
        }
    }
    break;

  case 588: /* $@44: %empty  */
                         { if ( (yyvsp[0].pStructure) ) { (yyvsp[0].pStructure)->isClass = (yyvsp[-3].b); (yyvsp[0].pStructure)->privateStructure = !(yyvsp[-2].b); } }
    break;

  case 589: /* structure_declaration: optional_annotation_list class_or_struct optional_public_or_private_structure $@43 structure_name $@44 '{' struct_variable_declaration_list '}'  */
                                                                                                                                                   {
        if ( (yyvsp[-4].pStructure) ) {
            ast_structureDeclaration ( scanner, (yyvsp[-8].faList), tokAt(scanner,(yylsp[-7])), (yyvsp[-4].pStructure), tokAt(scanner,(yylsp[-4])), (yyvsp[-1].pVarDeclList) );
            if ( !yyextra->g_CommentReaders.empty() ) {
                auto tak = tokAt(scanner,(yylsp[-7]));
                for ( auto & crd : yyextra->g_CommentReaders ) crd->afterStructure((yyvsp[-4].pStructure),tak);
            }
        } else {
            deleteVariableDeclarationList((yyvsp[-1].pVarDeclList));
        }
    }
    break;

  case 590: /* variable_name_with_pos_list: "name"  */
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 591: /* variable_name_with_pos_list: "$i" '(' expr ')'  */
                                     {
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{"``MACRO``TAG``","",tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression)});
        (yyval.pNameWithPosList) = pSL;
    }
    break;

  case 592: /* variable_name_with_pos_list: "name" "aka" "name"  */
                                         {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 593: /* variable_name_with_pos_list: variable_name_with_pos_list ',' "name"  */
                                                         {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = (yyvsp[-2].pNameWithPosList);
        delete (yyvsp[0].s);
    }
    break;

  case 594: /* variable_name_with_pos_list: variable_name_with_pos_list ',' "name" "aka" "name"  */
                                                                               {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-4].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = (yyvsp[-4].pNameWithPosList);
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 595: /* basic_type_declaration: "bool"  */
                        { (yyval.type) = Type::tBool; }
    break;

  case 596: /* basic_type_declaration: "string"  */
                        { (yyval.type) = Type::tString; }
    break;

  case 597: /* basic_type_declaration: "int"  */
                        { (yyval.type) = Type::tInt; }
    break;

  case 598: /* basic_type_declaration: "int8"  */
                        { (yyval.type) = Type::tInt8; }
    break;

  case 599: /* basic_type_declaration: "int16"  */
                        { (yyval.type) = Type::tInt16; }
    break;

  case 600: /* basic_type_declaration: "int64"  */
                        { (yyval.type) = Type::tInt64; }
    break;

  case 601: /* basic_type_declaration: "int2"  */
                        { (yyval.type) = Type::tInt2; }
    break;

  case 602: /* basic_type_declaration: "int3"  */
                        { (yyval.type) = Type::tInt3; }
    break;

  case 603: /* basic_type_declaration: "int4"  */
                        { (yyval.type) = Type::tInt4; }
    break;

  case 604: /* basic_type_declaration: "uint"  */
                        { (yyval.type) = Type::tUInt; }
    break;

  case 605: /* basic_type_declaration: "uint8"  */
                        { (yyval.type) = Type::tUInt8; }
    break;

  case 606: /* basic_type_declaration: "uint16"  */
                        { (yyval.type) = Type::tUInt16; }
    break;

  case 607: /* basic_type_declaration: "uint64"  */
                        { (yyval.type) = Type::tUInt64; }
    break;

  case 608: /* basic_type_declaration: "uint2"  */
                        { (yyval.type) = Type::tUInt2; }
    break;

  case 609: /* basic_type_declaration: "uint3"  */
                        { (yyval.type) = Type::tUInt3; }
    break;

  case 610: /* basic_type_declaration: "uint4"  */
                        { (yyval.type) = Type::tUInt4; }
    break;

  case 611: /* basic_type_declaration: "float"  */
                        { (yyval.type) = Type::tFloat; }
    break;

  case 612: /* basic_type_declaration: "float2"  */
                        { (yyval.type) = Type::tFloat2; }
    break;

  case 613: /* basic_type_declaration: "float3"  */
                        { (yyval.type) = Type::tFloat3; }
    break;

  case 614: /* basic_type_declaration: "float4"  */
                        { (yyval.type) = Type::tFloat4; }
    break;

  case 615: /* basic_type_declaration: "void"  */
                        { (yyval.type) = Type::tVoid; }
    break;

  case 616: /* basic_type_declaration: "range"  */
                        { (yyval.type) = Type::tRange; }
    break;

  case 617: /* basic_type_declaration: "urange"  */
                        { (yyval.type) = Type::tURange; }
    break;

  case 618: /* basic_type_declaration: "range64"  */
                        { (yyval.type) = Type::tRange64; }
    break;

  case 619: /* basic_type_declaration: "urange64"  */
                        { (yyval.type) = Type::tURange64; }
    break;

  case 620: /* basic_type_declaration: "double"  */
                        { (yyval.type) = Type::tDouble; }
    break;

  case 621: /* basic_type_declaration: "bitfield"  */
                        { (yyval.type) = Type::tBitfield; }
    break;

  case 622: /* enum_basic_type_declaration: "int"  */
                        { (yyval.type) = Type::tInt; }
    break;

  case 623: /* enum_basic_type_declaration: "int8"  */
                        { (yyval.type) = Type::tInt8; }
    break;

  case 624: /* enum_basic_type_declaration: "int16"  */
                        { (yyval.type) = Type::tInt16; }
    break;

  case 625: /* enum_basic_type_declaration: "uint"  */
                        { (yyval.type) = Type::tUInt; }
    break;

  case 626: /* enum_basic_type_declaration: "uint8"  */
                        { (yyval.type) = Type::tUInt8; }
    break;

  case 627: /* enum_basic_type_declaration: "uint16"  */
                        { (yyval.type) = Type::tUInt16; }
    break;

  case 628: /* structure_type_declaration: name_in_namespace  */
                                 {
        (yyval.pTypeDecl) = yyextra->g_Program->makeTypeDeclaration(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s));
        if ( !(yyval.pTypeDecl) ) {
            (yyval.pTypeDecl) = new TypeDecl(Type::tVoid);
            (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
        }
        delete (yyvsp[0].s);
    }
    break;

  case 629: /* auto_type_declaration: "auto"  */
                       {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 630: /* auto_type_declaration: "auto" '(' "name" ')'  */
                                            {
        das_checkName(scanner,*(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])));
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-3]));
        (yyval.pTypeDecl)->alias = *(yyvsp[-1].s);
        delete (yyvsp[-1].s);
    }
    break;

  case 631: /* auto_type_declaration: "$t" '(' expr ')'  */
                                          {
        (yyval.pTypeDecl) = new TypeDecl(Type::alias);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-3]));
        (yyval.pTypeDecl)->alias = "``MACRO``TAG``";
        (yyval.pTypeDecl)->isTag = true;
        (yyval.pTypeDecl)->firstType = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->firstType->at = tokAt(scanner, (yylsp[-1]));
        (yyval.pTypeDecl)->firstType->dimExpr.push_back((yyvsp[-1].pExpression));
    }
    break;

  case 632: /* bitfield_bits: "name"  */
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<string>();
        pSL->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 633: /* bitfield_bits: bitfield_bits ';' "name"  */
                                           {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameList)->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = (yyvsp[-2].pNameList);
        delete (yyvsp[0].s);
    }
    break;

  case 634: /* bitfield_alias_bits: %empty  */
        {
        auto pSL = new vector<string>();
        (yyval.pNameList) = pSL;

    }
    break;

  case 635: /* bitfield_alias_bits: bitfield_alias_bits ';'  */
                                      {
        (yyval.pNameList) = (yyvsp[-1].pNameList);
    }
    break;

  case 636: /* bitfield_alias_bits: bitfield_alias_bits "name" ';'  */
                                                 {
        das_checkName(scanner,*(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])));
        (yyvsp[-2].pNameList)->push_back(*(yyvsp[-1].s));
        (yyval.pNameList) = (yyvsp[-2].pNameList);
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterBitfieldEntry((yyvsp[-1].s)->c_str(),atvname);
        }
        delete (yyvsp[-1].s);
    }
    break;

  case 637: /* $@45: %empty  */
                                     { yyextra->das_arrow_depth ++; }
    break;

  case 638: /* $@46: %empty  */
                                                                                            { yyextra->das_arrow_depth --; }
    break;

  case 639: /* bitfield_type_declaration: "bitfield" '<' $@45 bitfield_bits '>' $@46  */
                                                                                                                             {
            (yyval.pTypeDecl) = new TypeDecl(Type::tBitfield);
            (yyval.pTypeDecl)->argNames = *(yyvsp[-2].pNameList);
            if ( (yyval.pTypeDecl)->argNames.size()>32 ) {
                das_yyerror(scanner,"only 32 different bits are allowed in a bitfield",tokAt(scanner,(yylsp[-5])),
                    CompilationError::invalid_type);
            }
            (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
            delete (yyvsp[-2].pNameList);
    }
    break;

  case 640: /* table_type_pair: type_declaration  */
                                      {
        (yyval.aTypePair).firstType = (yyvsp[0].pTypeDecl);
        (yyval.aTypePair).secondType = new TypeDecl(Type::tVoid);
    }
    break;

  case 641: /* table_type_pair: type_declaration ';' type_declaration  */
                                                                          {
        (yyval.aTypePair).firstType = (yyvsp[-2].pTypeDecl);
        (yyval.aTypePair).secondType = (yyvsp[0].pTypeDecl);
    }
    break;

  case 642: /* type_declaration_no_options: basic_type_declaration  */
                                                            { (yyval.pTypeDecl) = new TypeDecl((yyvsp[0].type)); (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0])); }
    break;

  case 643: /* type_declaration_no_options: auto_type_declaration  */
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 644: /* type_declaration_no_options: bitfield_type_declaration  */
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 645: /* type_declaration_no_options: structure_type_declaration  */
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 646: /* type_declaration_no_options: type_declaration_no_options '[' expr ']'  */
                                                                    {
        if ( (yyvsp[-3].pTypeDecl)->baseType==Type::typeDecl ) {
            das_yyerror(scanner,"type declaration can`t be used as array base type",tokAt(scanner,(yylsp[-3])),
                CompilationError::invalid_type);
        } else if ( (yyvsp[-3].pTypeDecl)->baseType==Type::typeMacro ) {
            das_yyerror(scanner,"macro can`t be used as array base type",tokAt(scanner,(yylsp[-3])),
                CompilationError::invalid_type);
        }
        int32_t dI = TypeDecl::dimConst;
        if ( (yyvsp[-1].pExpression)->rtti_isConstant() ) {                // note: this shortcut is here so we don`t get extra infer pass on every array
            auto cI = (ExprConst *) (yyvsp[-1].pExpression);
            auto bt = cI->baseType;
            if ( bt==Type::tInt || bt==Type::tUInt ) {
                dI = cast<int32_t>::to(cI->value);
            }
        }
        (yyvsp[-3].pTypeDecl)->dim.push_back(dI);
        (yyvsp[-3].pTypeDecl)->dimExpr.push_back(ExpressionPtr((yyvsp[-1].pExpression)));
        (yyvsp[-3].pTypeDecl)->removeDim = false;
        (yyval.pTypeDecl) = (yyvsp[-3].pTypeDecl);
    }
    break;

  case 647: /* type_declaration_no_options: type_declaration_no_options '[' ']'  */
                                                      {
        (yyvsp[-2].pTypeDecl)->dim.push_back(TypeDecl::dimAuto);
        (yyvsp[-2].pTypeDecl)->dimExpr.push_back(nullptr);
        (yyvsp[-2].pTypeDecl)->removeDim = false;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 648: /* $@47: %empty  */
                     { yyextra->das_arrow_depth ++; }
    break;

  case 649: /* $@48: %empty  */
                                                                                     { yyextra->das_arrow_depth --; }
    break;

  case 650: /* type_declaration_no_options: "type" '<' $@47 type_declaration '>' $@48  */
                                                                                                                      {
        (yyvsp[-2].pTypeDecl)->autoToAlias = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 651: /* type_declaration_no_options: "typedecl" '(' expr ')'  */
                                               {
        (yyval.pTypeDecl) = new TypeDecl(Type::typeDecl);
        (yyval.pTypeDecl)->at = tokRangeAt(scanner,(yylsp[-3]),(yylsp[-1]));
        (yyval.pTypeDecl)->dimExpr.push_back((yyvsp[-1].pExpression));
    }
    break;

  case 652: /* type_declaration_no_options: '$' name_in_namespace '(' optional_expr_list ')'  */
                                                                          {
        (yyval.pTypeDecl) = new TypeDecl(Type::typeMacro);
        (yyval.pTypeDecl)->at = tokRangeAt(scanner,(yylsp[-3]), (yylsp[-1]));
        (yyval.pTypeDecl)->alias = *(yyvsp[-3].s);
        (yyval.pTypeDecl)->dimExpr = sequenceToList((yyvsp[-1].pExpression));
        delete (yyvsp[-3].s);
    }
    break;

  case 653: /* type_declaration_no_options: type_declaration_no_options '-' '[' ']'  */
                                                          {
        (yyvsp[-3].pTypeDecl)->removeDim = true;
        (yyval.pTypeDecl) = (yyvsp[-3].pTypeDecl);
    }
    break;

  case 654: /* type_declaration_no_options: type_declaration_no_options "explicit"  */
                                                           {
        (yyvsp[-1].pTypeDecl)->isExplicit = true;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 655: /* type_declaration_no_options: type_declaration_no_options "const"  */
                                                        {
        (yyvsp[-1].pTypeDecl)->constant = true;
        (yyvsp[-1].pTypeDecl)->removeConstant = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 656: /* type_declaration_no_options: type_declaration_no_options '-' "const"  */
                                                            {
        (yyvsp[-2].pTypeDecl)->constant = false;
        (yyvsp[-2].pTypeDecl)->removeConstant = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 657: /* type_declaration_no_options: type_declaration_no_options '&'  */
                                                  {
        (yyvsp[-1].pTypeDecl)->ref = true;
        (yyvsp[-1].pTypeDecl)->removeRef = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 658: /* type_declaration_no_options: type_declaration_no_options '-' '&'  */
                                                      {
        (yyvsp[-2].pTypeDecl)->ref = false;
        (yyvsp[-2].pTypeDecl)->removeRef = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 659: /* type_declaration_no_options: type_declaration_no_options '#'  */
                                                  {
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
        (yyval.pTypeDecl)->temporary = true;
    }
    break;

  case 660: /* type_declaration_no_options: type_declaration_no_options "implicit"  */
                                                           {
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
        (yyval.pTypeDecl)->implicit = true;
    }
    break;

  case 661: /* type_declaration_no_options: type_declaration_no_options '-' '#'  */
                                                      {
        (yyvsp[-2].pTypeDecl)->temporary = false;
        (yyvsp[-2].pTypeDecl)->removeTemporary = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 662: /* type_declaration_no_options: type_declaration_no_options "==" "const"  */
                                                               {
        (yyvsp[-2].pTypeDecl)->explicitConst = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 663: /* type_declaration_no_options: type_declaration_no_options "==" '&'  */
                                                         {
        (yyvsp[-2].pTypeDecl)->explicitRef = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 664: /* type_declaration_no_options: type_declaration_no_options '?'  */
                                                  {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
    break;

  case 665: /* $@49: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 666: /* $@50: %empty  */
                                                                                               { yyextra->das_arrow_depth --; }
    break;

  case 667: /* type_declaration_no_options: "smart_ptr" '<' $@49 type_declaration '>' $@50  */
                                                                                                                                {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->smartPtr = true;
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 668: /* type_declaration_no_options: type_declaration_no_options "??"  */
                                                 {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType = make_smart<TypeDecl>(Type::tPointer);
        (yyval.pTypeDecl)->firstType->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
    break;

  case 669: /* $@51: %empty  */
                           { yyextra->das_arrow_depth ++; }
    break;

  case 670: /* $@52: %empty  */
                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 671: /* type_declaration_no_options: "array" '<' $@51 type_declaration '>' $@52  */
                                                                                                                            {
        (yyval.pTypeDecl) = new TypeDecl(Type::tArray);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 672: /* $@53: %empty  */
                           { yyextra->das_arrow_depth ++; }
    break;

  case 673: /* $@54: %empty  */
                                                                                     { yyextra->das_arrow_depth --; }
    break;

  case 674: /* type_declaration_no_options: "table" '<' $@53 table_type_pair '>' $@54  */
                                                                                                                      {
        (yyval.pTypeDecl) = new TypeDecl(Type::tTable);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].aTypePair).firstType);
        (yyval.pTypeDecl)->secondType = TypeDeclPtr((yyvsp[-2].aTypePair).secondType);
    }
    break;

  case 675: /* $@55: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 676: /* $@56: %empty  */
                                                                                                 { yyextra->das_arrow_depth --; }
    break;

  case 677: /* type_declaration_no_options: "iterator" '<' $@55 type_declaration '>' $@56  */
                                                                                                                                  {
        (yyval.pTypeDecl) = new TypeDecl(Type::tIterator);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 678: /* type_declaration_no_options: "block"  */
                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 679: /* $@57: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 680: /* $@58: %empty  */
                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 681: /* type_declaration_no_options: "block" '<' $@57 type_declaration '>' $@58  */
                                                                                                                               {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 682: /* $@59: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 683: /* $@60: %empty  */
                                                                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 684: /* type_declaration_no_options: "block" '<' $@59 optional_function_argument_list optional_function_type '>' $@60  */
                                                                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 685: /* type_declaration_no_options: "function"  */
                           {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 686: /* $@61: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 687: /* $@62: %empty  */
                                                                                                { yyextra->das_arrow_depth --; }
    break;

  case 688: /* type_declaration_no_options: "function" '<' $@61 type_declaration '>' $@62  */
                                                                                                                                 {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 689: /* $@63: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 690: /* $@64: %empty  */
                                                                                                                                         { yyextra->das_arrow_depth --; }
    break;

  case 691: /* type_declaration_no_options: "function" '<' $@63 optional_function_argument_list optional_function_type '>' $@64  */
                                                                                                                                                                          {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 692: /* type_declaration_no_options: "lambda"  */
                         {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 693: /* $@65: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 694: /* $@66: %empty  */
                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 695: /* type_declaration_no_options: "lambda" '<' $@65 type_declaration '>' $@66  */
                                                                                                                               {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 696: /* $@67: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 697: /* $@68: %empty  */
                                                                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 698: /* type_declaration_no_options: "lambda" '<' $@67 optional_function_argument_list optional_function_type '>' $@68  */
                                                                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 699: /* $@69: %empty  */
                            { yyextra->das_arrow_depth ++; }
    break;

  case 700: /* $@70: %empty  */
                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 701: /* type_declaration_no_options: "tuple" '<' $@69 tuple_type_list '>' $@70  */
                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tTuple);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
    }
    break;

  case 702: /* $@71: %empty  */
                              { yyextra->das_arrow_depth ++; }
    break;

  case 703: /* $@72: %empty  */
                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 704: /* type_declaration_no_options: "variant" '<' $@71 variant_type_list '>' $@72  */
                                                                                                                            {
        (yyval.pTypeDecl) = new TypeDecl(Type::tVariant);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
    }
    break;

  case 705: /* type_declaration: type_declaration_no_options  */
                                        {
        (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl);
    }
    break;

  case 706: /* type_declaration: type_declaration '|' type_declaration_no_options  */
                                                                     {
        if ( (yyvsp[-2].pTypeDecl)->baseType==Type::option ) {
            (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[0].pTypeDecl));
        } else {
            (yyval.pTypeDecl) = new TypeDecl(Type::option);
            (yyval.pTypeDecl)->at = tokRangeAt(scanner,(yylsp[-2]),(yylsp[0]));
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[-2].pTypeDecl));
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[0].pTypeDecl));
        }
    }
    break;

  case 707: /* type_declaration: type_declaration '|' '#'  */
                                             {
        if ( (yyvsp[-2].pTypeDecl)->baseType==Type::option ) {
            (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
            (yyval.pTypeDecl)->argTypes.push_back(make_smart<TypeDecl>(*(yyvsp[-2].pTypeDecl)->argTypes.back()));
            (yyvsp[-2].pTypeDecl)->argTypes.back()->temporary ^= true;
        } else {
            (yyval.pTypeDecl) = new TypeDecl(Type::option);
            (yyval.pTypeDecl)->at = tokRangeAt(scanner,(yylsp[-2]),(yylsp[0]));
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[-2].pTypeDecl));
            (yyval.pTypeDecl)->argTypes.push_back(make_smart<TypeDecl>(*(yyvsp[-2].pTypeDecl)));
            (yyval.pTypeDecl)->argTypes.back()->temporary ^= true;
        }
    }
    break;

  case 708: /* $@73: %empty  */
                                                          { yyextra->das_need_oxford_comma=false; }
    break;

  case 709: /* $@74: %empty  */
                                                                                                                {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeTuple(atvname);
        }
    }
    break;

  case 710: /* $@75: %empty  */
          {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-2]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeTupleEntries(atvname);
        }
    }
    break;

  case 711: /* $@76: %empty  */
                                  {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-4]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterTupleEntries(atvname);
        }
    }
    break;

  case 712: /* tuple_alias_declaration: "tuple" optional_public_or_private_alias $@73 "name" $@74 '{' $@75 tuple_alias_type_list $@76 '}'  */
          {
        auto vtype = make_smart<TypeDecl>(Type::tTuple);
        vtype->alias = *(yyvsp[-6].s);
        vtype->at = tokAt(scanner,(yylsp[-6]));
        vtype->isPrivateAlias = !(yyvsp[-8].b);
        varDeclToTypeDecl(scanner, vtype.get(), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
        if ( !yyextra->g_Program->addAlias(vtype) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-6].s),tokAt(scanner,(yylsp[-6])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-6]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterTuple((yyvsp[-6].s)->c_str(),atvname);
        }
        delete (yyvsp[-6].s);
    }
    break;

  case 713: /* $@77: %empty  */
                                                            { yyextra->das_need_oxford_comma=false; }
    break;

  case 714: /* $@78: %empty  */
                                                                                                                  {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeVariant(atvname);
        }
    }
    break;

  case 715: /* $@79: %empty  */
          {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-2]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeVariantEntries(atvname);
        }

    }
    break;

  case 716: /* $@80: %empty  */
                                    {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-4]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterVariantEntries(atvname);
        }
    }
    break;

  case 717: /* variant_alias_declaration: "variant" optional_public_or_private_alias $@77 "name" $@78 '{' $@79 variant_alias_type_list $@80 '}'  */
          {
        auto vtype = make_smart<TypeDecl>(Type::tVariant);
        vtype->alias = *(yyvsp[-6].s);
        vtype->at = tokAt(scanner,(yylsp[-6]));
        vtype->isPrivateAlias = !(yyvsp[-8].b);
        varDeclToTypeDecl(scanner, vtype.get(), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
        if ( !yyextra->g_Program->addAlias(vtype) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-6].s),tokAt(scanner,(yylsp[-6])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-6]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterVariant((yyvsp[-6].s)->c_str(),atvname);
        }
        delete (yyvsp[-6].s);
    }
    break;

  case 718: /* $@81: %empty  */
                                                             { yyextra->das_need_oxford_comma=false; }
    break;

  case 719: /* $@82: %empty  */
                                                                                                                   {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeBitfield(atvname);
        }
    }
    break;

  case 720: /* $@83: %empty  */
          {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-2]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeBitfieldEntries(atvname);
        }
    }
    break;

  case 721: /* $@84: %empty  */
                                {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-4]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterBitfieldEntries(atvname);
        }
    }
    break;

  case 722: /* bitfield_alias_declaration: "bitfield" optional_public_or_private_alias $@81 "name" $@82 '{' $@83 bitfield_alias_bits $@84 '}'  */
          {
        auto btype = make_smart<TypeDecl>(Type::tBitfield);
        btype->alias = *(yyvsp[-6].s);
        btype->at = tokAt(scanner,(yylsp[-6]));
        btype->argNames = *(yyvsp[-2].pNameList);
        btype->isPrivateAlias = !(yyvsp[-8].b);
        if ( btype->argNames.size()>32 ) {
            das_yyerror(scanner,"only 32 different bits are allowed in a bitfield",tokAt(scanner,(yylsp[-6])),
                CompilationError::invalid_type);
        }
        if ( !yyextra->g_Program->addAlias(btype) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-6].s),tokAt(scanner,(yylsp[-6])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-6]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterBitfield((yyvsp[-6].s)->c_str(),atvname);
        }
        delete (yyvsp[-6].s);
        delete (yyvsp[-2].pNameList);
    }
    break;

  case 723: /* make_decl: make_struct_decl  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 724: /* make_decl: make_dim_decl  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 725: /* make_decl: make_table_decl  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 726: /* make_decl: array_comprehension  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 727: /* make_decl: make_tuple_call  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 728: /* make_struct_fields: "name" copy_or_move expr  */
                                               {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        delete (yyvsp[-2].s);
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 729: /* make_struct_fields: "name" ":=" expr  */
                                      {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),false,true);
        delete (yyvsp[-2].s);
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 730: /* make_struct_fields: make_struct_fields ',' "name" copy_or_move expr  */
                                                                           {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        delete (yyvsp[-2].s);
        ((MakeStruct *)(yyvsp[-4].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-4].pMakeStruct);
    }
    break;

  case 731: /* make_struct_fields: make_struct_fields ',' "name" ":=" expr  */
                                                                  {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),false,true);
        delete (yyvsp[-2].s);
        ((MakeStruct *)(yyvsp[-4].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-4].pMakeStruct);
    }
    break;

  case 732: /* make_struct_fields: "$f" '(' expr ')' copy_or_move expr  */
                                                                   {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``FIELD``",ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        mfd->tag = ExpressionPtr((yyvsp[-3].pExpression));
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 733: /* make_struct_fields: "$f" '(' expr ')' ":=" expr  */
                                                          {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``FIELD``",ExpressionPtr((yyvsp[0].pExpression)),false,true);
        mfd->tag = ExpressionPtr((yyvsp[-3].pExpression));
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 734: /* make_struct_fields: make_struct_fields ',' "$f" '(' expr ')' copy_or_move expr  */
                                                                                               {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``FIELD``",ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        mfd->tag = ExpressionPtr((yyvsp[-3].pExpression));
        ((MakeStruct *)(yyvsp[-7].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-7].pMakeStruct);
    }
    break;

  case 735: /* make_struct_fields: make_struct_fields ',' "$f" '(' expr ')' ":=" expr  */
                                                                                      {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``FIELD``",ExpressionPtr((yyvsp[0].pExpression)),false,true);
        mfd->tag = ExpressionPtr((yyvsp[-3].pExpression));
        ((MakeStruct *)(yyvsp[-7].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-7].pMakeStruct);
    }
    break;

  case 736: /* make_struct_dim: make_struct_fields  */
                                {
        auto msd = new ExprMakeStruct();
        msd->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = msd;
    }
    break;

  case 737: /* make_struct_dim: make_struct_dim ';' make_struct_fields  */
                                                         {
        ((ExprMakeStruct *) (yyvsp[-2].pExpression))->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 738: /* optional_block: %empty  */
        { (yyval.pExpression) = nullptr; }
    break;

  case 739: /* optional_block: "where" expr_block  */
                                  { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 752: /* make_struct_decl: "[[" type_declaration_no_options make_struct_dim optional_block optional_trailing_delim_sqr_sqr  */
                                                                                                                                {
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->block = (yyvsp[-1].pExpression);
        (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-4]));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 753: /* make_struct_decl: "[[" type_declaration_no_options optional_block optional_trailing_delim_sqr_sqr  */
                                                                                                           {
        auto msd = new ExprMakeStruct();
        msd->makeType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        msd->block = (yyvsp[-1].pExpression);
        msd->at = tokAt(scanner,(yylsp[-3]));
        (yyval.pExpression) = msd;
    }
    break;

  case 754: /* make_struct_decl: "[[" type_declaration_no_options '(' ')' optional_block optional_trailing_delim_sqr_sqr  */
                                                                                                                   {
        auto msd = new ExprMakeStruct();
        msd->makeType = TypeDeclPtr((yyvsp[-4].pTypeDecl));
        msd->useInitializer = true;
        msd->block = (yyvsp[-1].pExpression);
        msd->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pExpression) = msd;
    }
    break;

  case 755: /* make_struct_decl: "[[" type_declaration_no_options '(' ')' make_struct_dim optional_block optional_trailing_delim_sqr_sqr  */
                                                                                                                                        {
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->useInitializer = true;
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->block = (yyvsp[-1].pExpression);
        (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 756: /* make_struct_decl: "[{" type_declaration_no_options make_struct_dim optional_block optional_trailing_delim_cur_sqr  */
                                                                                                                                {
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->block = (yyvsp[-1].pExpression);
        (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-4]));
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-4])),"to_array_move");
        tam->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        (yyval.pExpression) = tam;
    }
    break;

  case 757: /* make_struct_decl: "[{" type_declaration_no_options '(' ')' make_struct_dim optional_block optional_trailing_delim_cur_sqr  */
                                                                                                                                        {
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->useInitializer = true;
        ((ExprMakeStruct *)(yyvsp[-2].pExpression))->block = (yyvsp[-1].pExpression);
        (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-6]));
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-6])),"to_array_move");
        tam->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        (yyval.pExpression) = tam;
    }
    break;

  case 758: /* make_tuple: expr  */
                  {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 759: /* make_tuple: expr "=>" expr  */
                                         {
        ExprMakeTuple * mt = new ExprMakeTuple(tokAt(scanner,(yylsp[-1])));
        mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
    break;

  case 760: /* make_tuple: make_tuple ',' expr  */
                                      {
        ExprMakeTuple * mt;
        if ( (yyvsp[-2].pExpression)->rtti_isMakeTuple() ) {
            mt = static_cast<ExprMakeTuple *>((yyvsp[-2].pExpression));
        } else {
            mt = new ExprMakeTuple(tokAt(scanner,(yylsp[-2])));
            mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        }
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
    break;

  case 761: /* make_map_tuple: expr "=>" expr  */
                                         {
        ExprMakeTuple * mt = new ExprMakeTuple(tokAt(scanner,(yylsp[-1])));
        mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
    break;

  case 762: /* make_map_tuple: expr  */
                 {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 763: /* make_tuple_call: "tuple" '(' expr_list ')'  */
                                                     {
        auto mkt = new ExprMakeTuple(tokAt(scanner,(yylsp[-3])));
        mkt->values = sequenceToList((yyvsp[-1].pExpression));
        mkt->makeType = make_smart<TypeDecl>(Type::autoinfer);
        (yyval.pExpression) = mkt;
    }
    break;

  case 764: /* make_dim: make_tuple  */
                        {
        auto mka = new ExprMakeArray();
        mka->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mka;
    }
    break;

  case 765: /* make_dim: make_dim ';' make_tuple  */
                                          {
        ((ExprMakeArray *) (yyvsp[-2].pExpression))->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 766: /* make_dim_decl: "[[" type_declaration_no_options make_dim optional_trailing_semicolon_sqr_sqr  */
                                                                                                         {
        ((ExprMakeArray *)(yyvsp[-1].pExpression))->makeType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        (yyvsp[-1].pExpression)->at = tokAt(scanner,(yylsp[-3]));
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 767: /* make_dim_decl: "[{" type_declaration_no_options make_dim optional_trailing_semicolon_cur_sqr  */
                                                                                                         {
        ((ExprMakeArray *)(yyvsp[-1].pExpression))->makeType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        (yyvsp[-1].pExpression)->at = tokAt(scanner,(yylsp[-3]));
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),"to_array_move");
        tam->arguments.push_back(ExpressionPtr((yyvsp[-1].pExpression)));
        (yyval.pExpression) = tam;
    }
    break;

  case 768: /* make_dim_decl: "array" '(' expr_list ')'  */
                                                    {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-3])));
        mka->values = sequenceToList((yyvsp[-1].pExpression));
        mka->makeType = make_smart<TypeDecl>(Type::autoinfer);
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),"to_array_move");
        tam->arguments.push_back(mka);
        (yyval.pExpression) = tam;
    }
    break;

  case 769: /* $@85: %empty  */
                           { yyextra->das_arrow_depth ++; }
    break;

  case 770: /* $@86: %empty  */
                                                                                                 { yyextra->das_arrow_depth --; }
    break;

  case 771: /* make_dim_decl: "array" '<' $@85 type_declaration_no_options '>' $@86 '(' expr_list ')'  */
                                                                                                                                                               {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-8])));
        mka->values = sequenceToList((yyvsp[-1].pExpression));
        mka->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-8])),"to_array_move");
        tam->arguments.push_back(mka);
        (yyval.pExpression) = tam;
    }
    break;

  case 772: /* make_dim_decl: "fixed_array" '(' expr_list ')'  */
                                                          {
        auto mka = new ExprMakeArray(tokAt(scanner,(yylsp[-3])));
        mka->values = sequenceToList((yyvsp[-1].pExpression));
        mka->makeType = make_smart<TypeDecl>(Type::autoinfer);
        mka->makeType->dim.push_back(TypeDecl::dimAuto);
        (yyval.pExpression) = mka;
    }
    break;

  case 773: /* $@87: %empty  */
                                 { yyextra->das_arrow_depth ++; }
    break;

  case 774: /* $@88: %empty  */
                                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 775: /* make_dim_decl: "fixed_array" '<' $@87 type_declaration_no_options '>' $@88 '(' expr_list ')'  */
                                                                                                                                                                     {
        auto mka = new ExprMakeArray(tokAt(scanner,(yylsp[-8])));
        mka->values = sequenceToList((yyvsp[-1].pExpression));
        mka->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        if ( !mka->makeType->dim.size() ) mka->makeType->dim.push_back(TypeDecl::dimAuto);
        (yyval.pExpression) = mka;
    }
    break;

  case 776: /* make_table: make_map_tuple  */
                            {
        auto mka = new ExprMakeArray();
        mka->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mka;
    }
    break;

  case 777: /* make_table: make_table ';' make_map_tuple  */
                                                {
        ((ExprMakeArray *) (yyvsp[-2].pExpression))->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 778: /* expr_map_tuple_list: make_map_tuple  */
                                {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 779: /* expr_map_tuple_list: expr_map_tuple_list ',' make_map_tuple  */
                                                                {
            (yyval.pExpression) = new ExprSequence(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 780: /* make_table_decl: "{{" make_table optional_trailing_semicolon_cur_cur  */
                                                                          {
        auto mkt = make_smart<TypeDecl>(Type::autoinfer);
        mkt->dim.push_back(TypeDecl::dimAuto);
        ((ExprMakeArray *)(yyvsp[-1].pExpression))->makeType = mkt;
        (yyvsp[-1].pExpression)->at = tokAt(scanner,(yylsp[-2]));
        auto ttm = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),"to_table_move");
        ttm->arguments.push_back(ExpressionPtr((yyvsp[-1].pExpression)));
        (yyval.pExpression) = ttm;
    }
    break;

  case 781: /* make_table_decl: "table" '(' expr_map_tuple_list ')'  */
                                                              {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-3])));
        mka->values = sequenceToList((yyvsp[-1].pExpression));
        mka->makeType = make_smart<TypeDecl>(Type::autoinfer);
        auto ttm = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),"to_table_move");
        ttm->arguments.push_back(mka);
        (yyval.pExpression) = ttm;
    }
    break;

  case 782: /* make_table_decl: "table" '<' type_declaration_no_options '>' '(' expr_map_tuple_list ')'  */
                                                                                                        {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-6])));
        mka->values = sequenceToList((yyvsp[-1].pExpression));
        mka->makeType = TypeDeclPtr((yyvsp[-4].pTypeDecl));
        auto ttm = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-6])),"to_table_move");
        ttm->arguments.push_back(mka);
        (yyval.pExpression) = ttm;
    }
    break;

  case 783: /* make_table_decl: "table" '<' type_declaration_no_options ';' type_declaration_no_options '>' '(' expr_map_tuple_list ')'  */
                                                                                                                                                 {
        auto mka = make_smart<ExprMakeArray>(tokAt(scanner,(yylsp[-8])));
        mka->values = sequenceToList((yyvsp[-1].pExpression));
        mka->makeType = make_smart<TypeDecl>(Type::tTuple);
        mka->makeType->argTypes.push_back((yyvsp[-6].pTypeDecl));
        mka->makeType->argTypes.push_back((yyvsp[-4].pTypeDecl));
        auto ttm = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-8])),"to_table_move");
        ttm->arguments.push_back(mka);
        (yyval.pExpression) = ttm;
    }
    break;

  case 784: /* array_comprehension_where: %empty  */
                                    { (yyval.pExpression) = nullptr; }
    break;

  case 785: /* array_comprehension_where: ';' "where" expr  */
                                    { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 786: /* array_comprehension: "[[" "for" variable_name_with_pos_list "in" expr_list ';' expr array_comprehension_where ']' ']'  */
                                                                                                                                                            {
        (yyval.pExpression) = ast_arrayComprehension(scanner,tokAt(scanner,(yylsp[-8])),(yyvsp[-7].pNameWithPosList),(yyvsp[-5].pExpression),(yyvsp[-3].pExpression),(yyvsp[-2].pExpression),tokRangeAt(scanner,(yylsp[-3]),(yylsp[0])),true);
    }
    break;

  case 787: /* array_comprehension: "[{" "for" variable_name_with_pos_list "in" expr_list ';' expr array_comprehension_where '}' ']'  */
                                                                                                                                                            {
        (yyval.pExpression) = ast_arrayComprehension(scanner,tokAt(scanner,(yylsp[-8])),(yyvsp[-7].pNameWithPosList),(yyvsp[-5].pExpression),(yyvsp[-3].pExpression),(yyvsp[-2].pExpression),tokRangeAt(scanner,(yylsp[-3]),(yylsp[0])),false);
    }
    break;



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
  *++yylsp = yyloc;

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
  yytoken = yychar == DAS_YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
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
        yyerror (&yylloc, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= DAS_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == DAS_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner);
          yychar = DAS_YYEMPTY;
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
  yyerror (&yylloc, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != DAS_YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner);
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



void das_yyfatalerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error, CompilationError cerr ) {
    yyextra->g_Program->error(error,"","",LineInfo(yyextra->g_FileAccessStack.back(),
        lloc->first_column,lloc->first_line,lloc->last_column,lloc->last_line),cerr);
}

void das_yyerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error ) {
    if ( !yyextra->das_suppress_errors ) {
        yyextra->g_Program->error(error,"","",LineInfo(yyextra->g_FileAccessStack.back(),
            lloc->first_column,lloc->first_line,lloc->last_column,lloc->last_line),
                CompilationError::syntax_error);
    }
}

LineInfo tokAt ( yyscan_t scanner, const struct DAS_YYLTYPE & li ) {
    return LineInfo(yyextra->g_FileAccessStack.back(),
        li.first_column,li.first_line,
        li.last_column,li.last_line);
}

LineInfo tokRangeAt ( yyscan_t scanner, const struct DAS_YYLTYPE & li, const struct DAS_YYLTYPE & lie ) {
    return LineInfo(yyextra->g_FileAccessStack.back(),
        li.first_column,li.first_line,
        lie.last_column,lie.last_line);
}


