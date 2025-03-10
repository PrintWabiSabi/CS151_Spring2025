#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() 
{

    int grade;

    cout << "Please insert your grade ";
    cin >> grade;

    if (grade < 0 || grade > 100) {
    cout << "Not a valid grade please enter a grade between 0-100" << endl;
    }

    string letterGrade;

    if (grade >= 90) {
    letterGrade = 'A';
    } 
    else if (grade >= 80) {
   letterGrade = 'B';
    }
    else if (grade >= 70) {
   letterGrade = 'C';
    } 
    else if (grade >= 60) {
    letterGrade = 'D';
    } else
     {
   letterGrade = 'F';
    }

    cout << "Your grade: " << grade << " is a letter grade: " << letterGrade << endl;

    return 0;
}
