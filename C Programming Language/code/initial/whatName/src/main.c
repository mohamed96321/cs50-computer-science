#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void) {

    string answer = get_string("What's your name? ");
    printf("Hello, %s!\n", answer);
    free(answer);
}
