/*
Write an input validation loop that asks the user to enter “Yes” or “No”.
*/

#include<iostream>


using namespace std;

int main() 
{
string input;

cout << "Please enter Yes or No " << endl;
cin >> input;
    
 while (input != "Yes" && input != "No") {
 cout << " Answer is not valid Please enter Yes or No << endl; 
 cin >> input;
    }
  cout<< "Your answer was valid and your answer is " << input <<endl;
  
return 0; }