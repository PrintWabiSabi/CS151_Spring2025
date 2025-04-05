/*
Write an input validation loop that asks the user to enter ‘Y’, ‘y’, ‘N’, or ‘n’.
*/

#include<iostream>



using namespace std; 

int main(){

    char input;
    
    cout << " Please enter ‘Y’, ‘y’, ‘N’, or ‘n’ " << endl;
    cin >> input;
    
    while (input !='Y' && input != 'y' && input != 'N' && input!='n' )
    {  cout<< "invlaid input. Please enter ‘Y’, ‘y’, ‘N’, or ‘n’ " << endl;
      cin>> input; 
    }
   cout << "your input is valid " << input << endl;
   
      return 0;
    }