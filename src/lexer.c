#include "../include/lexer.h"
#include "../lib/dynamic_array.h"

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

// TODO: lex comments
// TODO: maintain current line and current that you are parsing --> incorporate into errors

Token *create_token (TokenType type, char *value) {
    Token* token = (Token *)malloc(sizeof(Token));
    token->type = type;
    token->value = strdup(value);

    return token;
}

int is_digit (char c) {
    return isdigit(c);
}

int is_alpha (char c) {
    return isalpha(c);
}

int is_whitespace (char c) {
    return isspace(c);
}

int is_operator (char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '=' || c == '!';
}

DynamicArray *lex (char *input) {
    LexerState state = STATE_START;

    char *start = input;
    char *current = input;

    DynamicArray *tokens = (DynamicArray *)malloc(sizeof(DynamicArray));
    array_create(tokens, sizeof(Token), ARRAY_DEFAULT_INIT_SIZE);

    while (*current != EOF) {
        switch (state) {
            case STATE_START:
                break;
        }
    }

    return tokens;
}

void print_token (Token* token) {
    printf("TOKEN(TYPE: %d, VALUE: %s)", token->type, token->value);
}
