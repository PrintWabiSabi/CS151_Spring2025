/*
Write an input validation loop that asks the user to enter a number in the range
of 10 through 25.
*/

#include<iostream>


using namespace std;

int main()
{

    int input;

    cout<< "Please enter a number in range of 10 through 25" << endl;
    cin >> input;

    while ( input < 10 ||  input > 25 ) {
        cout<< "your input is invalid. please enter a number in range 10-25 " << input << endl;
        cin >> input;}

        cout << "your input is valid " << input << endl;
    

    

return 0;
}