/*
Write a for loop that repeats seven times, asking the user to enter a number. The
loop should also calculate the sum of the numbers entered.
*/

#include<iostream>


using namespace std;

int main()
{
   int sum = 0;
   int number;

   cout <<"Please enter seven number"  << endl;

    for( int x = 1 ; x <= 7; x++)
    {  
    cin >>  number;
    sum += number;      }
    cout << "The sum of the numbers is " << sum << endl;

    return 0;
}