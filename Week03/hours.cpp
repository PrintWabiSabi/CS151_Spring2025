/*
write a program that asks the user for the duration in minutes.
Display hours and minutes of the duration.
3 integer variable for hours, minutes, and duration
*/
#include <iostream>
 
using namespace std;

int main()
{
    int duration;
    int hours;
    int minutes;
     cout << "Please enter the duration in minutes: ";
     cin >> duration;
     hours = duration / 60;
     minutes = duration % 60;
     cout << "The duration is: "<< hours << " hours and " << minutes << " minutes.\n";
     return 0;
}