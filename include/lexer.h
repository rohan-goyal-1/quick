#ifndef LEXER_H
#define LEXER_H

#include "error.h"

typedef enum {
    // Punctuation
    TOKEN_TYPE_END_OF_LINE,
    TOKEN_TYPE_SEMICOLON,

    // Keywords
    TOKEN_TYPE_INT,
    TOKEN_TYPE_IDENTIFIER,

    // Value
    TOKEN_TYPE_INTEGER,
    
    // Operators
    TOKEN_TYPE_EQUALS,
    TOKEN_TYPE_PLUS,
    TOKEN_TYPE_MINUS,
    TOKEN_TYPE_MULTIPLY,
    TOKEN_TYPE_DIVIDE,
    TOKEN_TYPE_BANG,
} TokenType;

typedef struct {
    TokenType type;
    char *value;
} Token;

typedef enum {
    STATE_START,
    STATE_INTEGER,
    STATE_STRING,
    STATE_IDENTIFIER,
    STATE_OPERATOR,
    STATE_WHITESPACE, 
} LexerState;

void print_token(Token* token);

#endif // LEXER_H
