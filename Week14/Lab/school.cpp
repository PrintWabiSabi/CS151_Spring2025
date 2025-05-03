/*Create a file in Week14/Lab called school.cpp

Write a fuction called lowestGrade100() that has an array parameter of doubles
called grades and an int parameter called size.
The function should find the lowest grade in the array and make it 100.0.
The function should not return any value.

Write a function called examCurve() that has an array of doubles
called grades and an int parameter called size.
The function should find the highest grade in the array and subtract it from 100.0.
The function should then add the difference to each grade in the array.
The function should not return any value.

Write a function called letterGrade() that has an int parameter called grade.
The function should return a char that represents the letter grade.
The function should use the following scale:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: 0-59
Use two parallel arrays to store the letter grades and their corresponding
minimum range values. (e,g. A: 90, B: 80, C: 70, D: 60, F: 0)
if the grade is less than 0 or greater than 100, the function should return 'X'.

Write a main function that will test the above functions.
The main function should create an array of doubles called grades with 10 elements.*/


#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include<cstdlib>
#include<cctype>

using namespace std;

void lowestGrade100(double grades[], int size ){

    int min = 0;
    for ( int i = 0; i < size; i++ ){

       if  ( grades[min]> grades[i] ) {  

        min = i ;

       }
      
    }
     grades[min] = 100;
    }

    
    void examCurve(double grades[], int size){

        int max = size - 1;
      for (int i = 0; i < size; i++){
        
        if (grades[max] < grades[i] ){

            max = i;

        }
      } grades[max] = 100;
       
      double desire = 100 - grades[max];

      for (int i = 0; i < size; i++){

        grades[i] = grades[i] + desire;
      }


    }

    