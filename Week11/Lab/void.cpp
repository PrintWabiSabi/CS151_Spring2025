#include <iostream>
#include <string>
using namespace std;

void sayHello(string name);
void countdown(int n);
void printBlock(int n);
void printTriangle(int n);

int main() {
    sayHello("Alice");
    sayHello("");  
    
    countdown(5);
    countdown(-3);  

    printBlock(4);
    printBlock(0);  
    
    printTriangle(5);
    printTriangle(-2);  
    
    return 0;
}

void sayHello(string name) {
    if (name.empty()) {
        cout << "Hello, World!" << endl;
    } else {
        cout << "Hello, " << name << "!" << endl;
    }
}

void countdown(int n) {
    if (n < 0) {
        cout << "Invalid input" << endl;
    } else {
        for (int i = n; i >= 0; i--) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void printBlock(int n) {
    if (n < 1) {
        cout << "Invalid input" << endl;
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}

void printTriangle(int n) {
    if (n < 1) {
        cout << "Invalid input" << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}
