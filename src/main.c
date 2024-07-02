#include <stdlib.h>

#include "../include/file_io.h"
#include "../include/cli.h"


int main (int argc, char **argv) {
    if (inappropriate_usage(argc, argv)) {
        print_usage(argv);
        exit(1);
    }

    char *content = read_file(argv[1]);

    // GOES HERE

    free(content);

    return 0;
}
