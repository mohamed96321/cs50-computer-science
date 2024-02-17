#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get_string(const char* prompt) {

    printf("%s", prompt);
    char buffer[100];
    scanf("%99s", buffer);
    char* result =
        (char*)malloc((strlen(buffer) + 1) * sizeof(char));
    return result;
}
