#include <iostream>
using namespace std;

void lowestGrade100(double grades[], int size);
void examCurve(double grades[], int size);
void letterGrade(int grade);

int main()
{
    const int SIZE = 10;
    double grades[SIZE] = {65.5, 72.0, 88.0, 91.0, 45.5, 79.5, 100.0, 82.0, 60.0, 55.0};

    cout << "Original grades:" << endl;
    for (int i = 0; i < SIZE; i++)
        cout << grades[i] << " ";
    cout << endl;

    lowestGrade100(grades, SIZE);
    examCurve(grades, SIZE);

    cout << "Curved grades:" << endl;
    for (int i = 0; i < SIZE; i++)
        cout << grades[i] << " ";
    cout << endl;

    cout << "Letter grades:" << endl;
    for (int i = 0; i < SIZE; i++) {
        int grade = (int)grades[i];
        letterGrade(grade);
    }

    return 0;
}

void lowestGrade100(double grades[], int size)
{
    int lowest = 0;
    for (int i = 1; i < size; i++)
        if (grades[i] < grades[lowest])
            lowest = i;
    grades[lowest] = 100.0;
}

void examCurve(double grades[], int size)
{
    double highest = grades[0];
    for (int i = 1; i < size; i++)
        if (grades[i] > highest)
            highest = grades[i];
    double curve = 100.0 - highest;
    for (int i = 0; i < size; i++)
        grades[i] += curve;
}

void letterGrade(int grade)
{
    if (grade >= 90 && grade <= 100)
        cout << "A" << endl;
    else if (grade >= 80 && grade < 90)
        cout << "B" << endl;
    else if (grade >= 70 && grade < 80)
        cout << "C" << endl;
    else if (grade >= 60 && grade < 70)
        cout << "D" << endl;
    else if (grade >= 0 && grade < 60)
        cout << "F" << endl;
    else
        cout << "no results found" << endl;
}
