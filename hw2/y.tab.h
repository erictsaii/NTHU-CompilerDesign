#ifndef _yy_defines_h_
#define _yy_defines_h_

#define NUM 257
#define DOUBLE 258
#define CHAR 259
#define STRING 260
#define TYPE 261
#define ID 262
#define INC 263
#define DEC 264
#define ADD 265
#define MINUS 266
#define MULTIPLY 267
#define DIVIDE 268
#define PERCENT 269
#define LESS_THAN 270
#define GREATER_THAN 271
#define LOGICAL_NOT 272
#define BITWISE_NOT 273
#define AND_OP 274
#define OR_OP 275
#define XOR_OP 276
#define ASSIGN 277
#define LESS_OR_EQUAL_THAN 278
#define GREATER_OR_EQUAL_THAN 279
#define SHIFT_LEFT 280
#define SHIFT_RIGHT 281
#define EQUAL 282
#define NOT_EQUAL 283
#define AND 284
#define OR 285
#define SEMICOLON 286
#define COMMA 287
#define COLON 288
#define L_BRACKET 289
#define R_BRACKET 290
#define L_SQ_BRACKET 291
#define R_SQ_BRACKET 292
#define L_PARENTHESIS 293
#define R_PARENTHESIS 294
#define IF 295
#define ELSE 296
#define SWITCH 297
#define CASE 298
#define DEFAULT 299
#define DO 300
#define WHILE 301
#define FOR 302
#define RETURN 303
#define BREAK 304
#define CONTINUE 305
#define UMINUS 306
#define UADD 307
#define UMULTI 308
#define UANDOP 309
#define INCPOST 310
#define DECPOST 311
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE {
    int intVal;
    double doubleVal;
    char* stringVal;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;

#endif /* _yy_defines_h_ */
