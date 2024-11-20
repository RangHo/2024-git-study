#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage(char *argv0) { printf("Usage: %s [-a arg] [-b arg] [-c arg]\n", argv0); }

int main(int argc, char *argv[])
{
    int opt = 0;
    while ((opt = getopt(argc, argv, "ha:b:c:")) != -1) {
        switch (opt) {
        case 'a':
            printf("option a: %s\n", optarg);
            break;
        case 'b':
            printf("option b: %s\n", optarg);
            break;
        case 'c':
            printf("option c: %s\n", optarg);
            break;
        case 'h':
            usage(argv[0]);
            exit(0);
        default:
            usage(argv[0]);
            exit(2);
        }
    }

    if (strcmp(argv[optind], "hello") == 0) {
        printf("Hello, world!\n");
    } else {
        printf("Say hello first!\n");
        exit(1);
    }

    return 0;
}
