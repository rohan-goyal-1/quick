#include <stdio.h>

#include "../include/error.h"

Error ok = { ERROR_NONE, NULL };

void print_error (Error err) {
    if (err.type == ERROR_NONE) {
        return;
    }
    printf("ERROR: ");
    switch (err.type) {
        default:
            printf("Unkown error type...");
            break;
        case ERROR_TODO:
            printf("TODO (not implemented)");
            break;
        case ERROR_SYNTAX:
            printf("Invalid syntax");
            break;
        case ERROR_TYPE:
            printf("Mismatched types");
            break;
        case ERROR_ARGUMENTS:
            printf("Invalid arguments");
            break;
        case ERROR_GENERIC:
            printf("Generic error");
            break;
        case ERROR_NONE:
            printf("No errors");
            break;
    }
    printf("\n");
    if (err.msg) {
        printf("     : %s\n", err.msg);
    }
}
