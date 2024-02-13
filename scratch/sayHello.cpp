#include <iostream>
using namespace std;

/*
void sayHello() {
    cout << "Hello, World!" << endl;
}
*/

string sayHello() {
    return "Hello, World!";
}

int main() {
    string message =sayHello();
    cout << message << endl;
    // sayHello();
    return 0;
}
