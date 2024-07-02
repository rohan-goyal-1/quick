#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *read_file (char *path) {
    FILE *file = fopen(path, "r");
    if (!file) {
        fprintf(stderr, "Could not open file.\n");
        exit(1);
    }

    size_t len = 0;
    ssize_t read;
    char *line = NULL;
    size_t total_len = 1;
    char *lines = malloc(total_len);

    if (!lines) {
        fprintf(stderr, "Memory allocation error.\n");
        exit(1);
    }
    
    lines[0] = '\0';

    while ((read = getline(&line, &len, file)) != -1) {
        total_len += read + 1;
        lines = realloc(lines, total_len);

        if (!lines) {
            fprintf(stderr, "Memory reallocation error.\n");
            exit(1);
        }

        strcat(lines, line);
    }

    free(line);
    fclose(file);

    return lines;
}
