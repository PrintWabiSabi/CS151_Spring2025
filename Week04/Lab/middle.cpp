#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
 int num1;
 int num2;
 cout << "input num1 and num 2 "<< endl;
 cin>> num1 >> num2;
 
 int middle = num1 + (num2 - num1) / 2;

 cout <<" the middle number between 72 and 2 is "<< middle << endl;
 
num1 = 2147483640;
num2 = 2147483646;
middle = num1+ (num2 - num1) / 2;
cout << middle << endl;
 return 0;
}
