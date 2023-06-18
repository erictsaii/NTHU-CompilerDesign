#ifndef _yy_defines_h_
#define _yy_defines_h_

#define NUM 257
#define DVALUE 258
#define TYPE 259
#define ID 260
#define IF 261
#define ELSE 262
#define DO 263
#define WHILE 264
#define FOR 265
#define RETURN 266
#define BREAK 267
#define CONTINUE 268
#define LESS_OR_EQUAL_THAN 269
#define GREATER_OR_EQUAL_THAN 270
#define EQUAL 271
#define NOT_EQUAL 272
#define ADD 273
#define MINUS 274
#define MULTIPLY 275
#define DIVIDE 276
#define LESS_THAN 277
#define GREATER_THAN 278
#define AND_OP 279
#define ASSIGN 280
#define SEMICOLON 281
#define COMMA 282
#define L_BRACKET 283
#define R_BRACKET 284
#define L_SQ_BRACKET 285
#define R_SQ_BRACKET 286
#define L_PARENTHESIS 287
#define R_PARENTHESIS 288
#define DIGITALWRITE 289
#define DELAY 290
#define UMINUS 291
#define UMULTI 292
#define UANDOP 293
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE {
    int intVal;
    double doubleVal;
    char* sVal;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;

#endif /* _yy_defines_h_ */
