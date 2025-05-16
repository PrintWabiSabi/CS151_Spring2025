#include <iostream>
#include <string>
using namespace std;

void add(char c1, char c2);
void add(char c, int n);
void area(double radius);
void area(double length, double width);

int main() {
    add('A', 'B');
    add('X', 5);
    area(5.0);
    area(4.0, 6.0);
    return 0;
}

void add(char c1, char c2) {
    cout << c1 << c2 << endl;
}

void add(char c, int n) {
    for (int i = 0; i < n; i++) {
        cout << c;
    }
    cout << endl;
}

void area(double radius) {
    cout << "Area of circle: " << 3.14159 * radius * radius << endl;
}

void area(double length, double width) {
    cout << "Area of rectangle: " << length * width << endl;
}
