#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void Sayhello(string name)
    {
         if ( name == ""){
            name = "World";
        }
        cout << "Hello " << name << endl;
    }
    //for( int x = 1 ; x <= 7; x++)
  /*  {  
        cin >>  number;
        sum += number;      }
        cout << "The sum of the numbers is " << sum << endl;
*/    


void countdown(int n){
    if( n < 0){
        cout << "invalid Input" << endl;
        return;
    }
    for(int x = n; x >= 0; x--){
        cout << x << endl;
    }
}

void printBlock(int n){
    for(int x = 0; x < n; x++){
        for(int x = 0; x < n; x++)
        cout<< '*';
    
    }

}


int main(){

    Sayhello("");
    countdown(10);
    printBlock(10);
}