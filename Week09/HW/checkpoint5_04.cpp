/*
Write an input validation loop that asks the user to enter “Yes” or “No”.
*/

#include<iostream>
#include<string>


using namespace std;

int main() 
{
string input;

cout<< "Please enter Yes or No " << endl;
cin >> input;
    
while(input != "Yes" && input != "No"){
    cout << "Your answer is invalid please input Yes or No"<< endl;
    cin >> input;
}
cout << "Your answer is valid and you enterd " << input << endl;
return 0; }