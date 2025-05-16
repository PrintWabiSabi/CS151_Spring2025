#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string inputFile = "content.txt";
    string outputFile = "counts.txt";

    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    if (!inFile) {
        cout << "Error opening input file" << endl;
        return 1;
    }

    int counts[26] = {0};

    char ch;
    while (inFile.get(ch)) {
        if ((ch >= 'a' && ch <= 'z')) {
            ch = ch - ('a' - 'A');
        }
        if (ch >= 'A' && ch <= 'Z') {
            int index = ch - 'A';
            counts[index]++;
        }
    }

    for (int i = 0; i < 26; i++) {
        outFile << char('A' + i) << ": " << counts[i] << endl;
    }

    inFile.close();
    outFile.close();
    return 0;
}
