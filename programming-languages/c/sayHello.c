#include <stdio.h>

/*
void sayHello() {
    printf("Hello, World!\n");
}
*/

const char* sayHello() {
    return "Hello, World!";
}

int main() {
    const char* message = sayHello();
    printf("%s\n", message);
    // sayHello()
    return 0;
}
