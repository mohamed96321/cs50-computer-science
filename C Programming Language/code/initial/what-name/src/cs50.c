#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string get_string(const char* prompt) {

    printf("%s", prompt);
    char* input = malloc(256);
    if (input == NULL) {
        return NULL;
    }

    fgets(input, 256, stdin);
    int length = strlen(input);
    if (length > 0 && input[length - 1] == '\n') {
        input[length - 1] = '\0';
    }

    return input;
}
