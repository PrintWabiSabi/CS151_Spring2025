/*
Write a for loop that displays every fifth number, 0 through 100.
*/

#include<iostream>


using namespace std;

int main()
{
    cout << " number will go from 0 - 100 " << endl;
    int x;
    for( x = 0; x <= 100; x = x +5)
    cout <<"The number now is " <<  x << endl;
}