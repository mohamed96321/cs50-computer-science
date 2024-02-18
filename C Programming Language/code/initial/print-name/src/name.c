#include <stdio.h> // standard input and output
#include <stdlib.h> // standard library
#include <string.h> // string library
// #include <cs50.h> // we can use header files to access in cs50 function or cs50 library

char* get_string(const char* prompt) {

    printf("%s", prompt);
    char buffer[100];
    scanf("%99s", buffer);
    char* result =
        (char*)malloc((strlen(buffer) + 1) * sizeof(char));
    strcpy(result, buffer);

    return result;
}

int main(void) {

    char* answer = get_string("What's your name? ");
    printf("Hello, %s!\n", answer);
    free(answer);
}


/*
char* get_string(char* prompt, char* result) {

    printf("%s", prompt);
    fgets(result, 100, stdin);
    result[strcspn(result, "\n")] = '\0';
    return result;
}

int main(void) {

    char answer[100];
    get_string("What's your name? ", answer);
    printf("Hello, %s!\n", answer);
}
*/
