/*************** COPY BELOW ***************/
// This program will convert a temperature in Fahrenheit to Celsius.
#include <iostream>
using namespace std;

const double FAHRENHEIT = 98.6;	        // normal body temperature in Fahrenheit

int main()
{
	double celsius;		                    // definition of celsius temperature
	celsius = (FAHRENHEIT - 32) * 5 / 9;	// computes celsius temperature: 37 degrees

	// Fill in the code for the cout statement that will output (with description)
	// the celsius temperature. 
cout <<"The temperature in celsius is "<< celsius << endl;
	return 0;
}