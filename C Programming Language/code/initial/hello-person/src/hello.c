#include <hello.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string get_string(char* prompt)
{
    // message "What's your name?"
    printf("%s", prompt);

    char* input = malloc(256);
    if (input == NULL) {
        return NULL;
    }

    // get inpur value from stdin (like: text field)
    fgets(input, 256, stdin);
    int length = strlen(input);
    // length bigger than 0
    if (length > 0 && input[length - 1] == '\n') {
        input[length - 1] = '\0';
    }

    return input;
}
