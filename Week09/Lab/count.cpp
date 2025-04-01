#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;

/*Count Positive and Negative Numbers

Create a file in Week09/Lab called count.cpp

Write a program that asks the user for a positive integer n within 10 to 20. The program
should loop till the user inputs a valid number. After receiving a valid input, it should
prompt the user to enter n numbers within a loop and count the total number of positive
and negative numbers separately. Display the counts*/



int main() 
{
 int n; // askes user to enter n when you make the cin line

 int positiveCount = 0;  //count to start and stop loop
 int negativeCount = 0; //count to start and stop loop

 while (10 < n || 20 > n )
 {
    cout << "Please enter a number between 10 and 20 exclusive" << endl;
    cin >> n; 
 }

 for (int i = 0; i < n; i++){
 int num;
 cin >> num; 

 if (num > 0) {
   positiveCount++; }
  else if (num < 0) {
   negativeCount++;
 }
 }
 
 cout << "Total positive numbers: " << positiveCount << endl;
 cout << "Total negative numbers: " << negativeCount << endl;

 cout << " You enterd " << n << endl;

 return 0;
}
