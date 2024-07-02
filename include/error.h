#ifndef ERROR_H
#define ERROR_H

#include <stddef.h>

typedef struct {
    enum ErrorType {
        ERROR_NONE,
        ERROR_TYPE,
        ERROR_ARGUMENTS,
        ERROR_GENERIC,
        ERROR_SYNTAX,
        ERROR_TODO,
    } type;
    char *msg;
} Error;

extern Error ok;

void print_error(Error err);

#define ERROR_CREATE(n, t, msg)                 \
  Error (n) = { (t), (msg) }

#define ERROR_PREP(n, t, message)               \
  (n).type = (t);                               \
  (n).msg = (message);

#endif // ERROR_H
