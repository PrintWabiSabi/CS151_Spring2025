/*The program should prompt the user for a non-negative integer and then calculate the Fibonacci number using a loop and only a loop.
The program should print the Fibonacci number for the user-defined integer.

1. Declare a variable to hold the user-defined integer.
2. Declare a variable to hold the Fibonacci number.
3. Declare a variable to hold the previous Fibonacci number.
4. Declare a variable to hold the current Fibonacci number.
5. Initialize the previous Fibonacci number to 0.
6. Initialize the current Fibonacci number to 1.
7. Loop from 2 to the user-defined integer.
8. In each iteration, calculate the Fibonacci number by adding the previous and current Fibonacci numbers.
9. Update the current Fibonacci number to the new Fibonacci number.
10. Update the previous Fibonacci number to the current Fibonacci number.
11. After the loop, print the Fibonacci number for the user-defined integer.
12. Return 0 to indicate successful completion of the program.
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{

int usernum;
int fibonochi; 
int last_fibonochi;
int current_fibonochi;

last_fibonochi = 0;
current_fibonochi = 1;
usernum = -1;
while (usernum < 0)
{
    cout << "Please enter a positive number " << endl;
    cin >> usernum; 
}
if (usernum <= 1 )
{
    cout << usernum << endl;

    return 0;
}



for ( int i = 2; i <= usernum; i++ )
{
       fibonochi = current_fibonochi + last_fibonochi;
       last_fibonochi = current_fibonochi;
       current_fibonochi = fibonochi;


}
   cout << fibonochi << endl;




return 0;
}