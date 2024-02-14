#include <iostream>
using namespace std;

void sayHello(string& name, int& n) {
    cout << "Enter, How many times should I say hello: ";
    cin >> n;
    cout << "Enter your name: ";
    cin >> name;
    for (int i = 0; i < n; i++) {
        cout << "Hello, " << name << "!" << endl;
    }
}

int main() {
    string name;
    int n;
    sayHello(name, n);
    return 0;
}
