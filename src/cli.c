#include <stdio.h>

void print_usage (char **argv) {
    printf("USAGE: %s <path_to_file>\n", argv[0]);
}

int inappropriate_usage (int argc, char ** argv) {
    return argc < 2;
}
