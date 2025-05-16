#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int row = 1; row <= 12; row++) {
        for (int col = 1; col <= 12; col++) {
            cout << setw(4) << row * col;
        }
        cout << endl;
    }
    return 0;
}
