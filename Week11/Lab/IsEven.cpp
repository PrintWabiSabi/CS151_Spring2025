#include <iostream>
#include <string>
using namespace std;

bool isEven(int num) {
    if (num % 2 == 0) {
        return true;
    }
    return false;
}

bool isOdd(int num) {
    if (num % 2 != 0) {
        return true;
    }
    return false;
}

void allUpper(string text) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - 32;
        }
    }
    cout << text << endl;
}

void allLower(string text) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = text[i] + 32;
        }
    }
    cout << text << endl;
}

void vowelCount(string text) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = text[i] + 32;
        }
    }

    int count = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') {
            count = count + 1;
        }
    }
    cout << count << endl;
}

void consonantCount(string text) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - 32;
        }
    }

    int count = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            if (text[i] != 'A' && text[i] != 'E' && text[i] != 'I' && text[i] != 'O' && text[i] != 'U') {
                count = count + 1;
            }
        }
    }
    cout << count << endl;
}

void encode(string text) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] < 'z') {
            text[i] = text[i] + 1;
        } else if (text[i] == 'z') {
            text[i] = 'a';
        } else if (text[i] >= 'A' && text[i] < 'Z') {
            text[i] = text[i] + 1;
        } else if (text[i] == 'Z') {
            text[i] = 'A';
        }
    }
    cout << text << endl;
}

int main() {
    cout << isEven(4) << endl;
    cout << isOdd(5) << endl;
    allUpper("hello");
    allLower("WORLD");
    vowelCount("Hello");
    consonantCount("World");
    encode("Zoo");
    return 0;
}
