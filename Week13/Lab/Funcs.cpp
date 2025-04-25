#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include<cstdlib>
#include<cctype>
using namespace std;

void sayHello(string A =  "World"){ 
    cout << "Hello, "<< A << "!" << endl;
}

void allUpper(string &str){
     for (int i = 0; i < str.length(); i++ ){
        str[i] = toupper(str[i]);
     }
}

void allLower(string &str){
    for (int i = 0; i < str.length(); i++ ){
       str[i] = tolower(str[i]);
    }
}

int getRandom(int max, int min = 0){
    static bool seeded = false;
    if (seeded == false){
        srand(time(0));
     
        seeded = true;    
    }
    if ( max < min){
        int maximum = min;          //max = 5   min =10 
       
        min = max;  
        max = maximum;
    }
     int random_numb = rand() % (max + 1 - min) + min;
    return random_numb;
}





int main(){
      
    sayHello("Eve");

    sayHello();

    string word = "elephant";

    allUpper(word);
    cout << word << endl;

    allLower(word);
    cout << word << endl;

    cout << getRandom(100, 10) << endl;
    return 0;


}








