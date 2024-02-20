#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    string answer = get_string("What's your name? ");
    printf("Hello, %s!\n", answer);
    free(answer);
}
