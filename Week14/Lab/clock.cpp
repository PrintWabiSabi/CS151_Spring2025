#include <iostream>
#include <string>
using namespace std;

void showTime(int hours, int minutes = 0);

int main()
{
    showTime(0, 0);
    showTime(12, 0);
    showTime(23, 59);
    showTime(12, 59);
    showTime(13, 30);
    showTime(14);
    showTime(15);
    return 0;
}

void showTime(int hours, int minutes)
{
    string ampm = "AM";
    if (hours >= 12)
        ampm = "PM";
    int displayHour = hours % 12;
    if (displayHour == 0)
        displayHour = 12;

    if (displayHour < 10)
        cout << "0";
    cout << displayHour << ":";

    if (minutes < 10)
        cout << "0";
    cout << minutes << " " << ampm << endl;
}
