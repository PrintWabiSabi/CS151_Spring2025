/*Create a file in Week09/Lab called guessing.cpp

Write a program that generates a random number from the first
100 natural numbers and asks the user to guess what the number is.
If the user’s guess is higher than the random number, the program should
display “Too high, try again.” If the user’s guess is lower than the random number, the
program should display “Too low, try again.” The program should use a loop that
repeats until the user correctly guesses the random number in which case the program will end
displaying “Congratulations! You guessed the number!”*/

#include<iostream>
#include<ctime>
#include<cstdlib> 
#include<cmath>

using namespace std;

int main()
{
    srand(time(0)); // gives a random number to srand
    int random_number = rand()%100+1;
    int user_number;
    cout<< "Please enter a postive number between 1 and 100 "<< endl; 
    cin >> user_number;

    while (user_number != random_number)
    {
       if( random_number > user_number ){
        cout<< "Two low, guess again." << endl;
       }
       else if ( random_number < user_number ){
        cout << "Too high, guess again" << endl;
       } cin >> user_number;
    }
    cout << "congratulation you guessed correctly!! " << endl;
return 0; 
}