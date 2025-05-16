#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void rollDie(int rolls[], int size) {
    for (int i = 0; i < size; i++) {
        rolls[i] = (rand() % 6) + 1;
    }
}

void calculateAverage(int rolls[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total = total + rolls[i];
    }
    double average = total / (double)size;
    cout << fixed << setprecision(2);
    cout << "Average roll: " << average << endl;

    double theoretical = 3.5;
    double top = theoretical - average;
    if (top < 0) {
        top = -top;
    }
    double bottom = theoretical + average;
    double error = 2 * (top / bottom) * 100;

    cout << "Percent error: " << error << "%" << endl;
}

int main() {
    srand(time(0));
    const int SIZE = 10;
    int rolls[SIZE];

    rollDie(rolls, SIZE);
    calculateAverage(rolls, SIZE);

    return 0;
}
