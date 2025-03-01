/*The following program will run, but the user will have difficulty understanding
what to do. How would you improve the program?*/

// This program multiplies two numbers and displays the result.
#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter two numbers to multiply" << endl;
    double first, second, product;
    
    cin>> first >>second;
    product = first * second;
    cout << "The product of " << first << " and " << second << " is equal to " << product << endl;
    
    cout << product;
    return 0;
}