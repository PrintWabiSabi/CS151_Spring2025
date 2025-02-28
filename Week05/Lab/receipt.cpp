/*
Write a program that hold the prices of 10 items in 10 variables.
The program should display each item's price, the subtotal of the sale,
the amount of sales tax, and the total.

Include iomanip and use the setprecision manipulator to format the output
to two decimal places. Allign the output in columns using the setw manipulator.

Items        Prices
item1        $X.XX
item2        $X.XX
item3        $X.XX
item4        $X.XX
item5        $X.XX
item6        $X.XX
item7        $X.XX
item8        $X.XX
item9        $X.XX
item10       $X.XX

Subtotal     $XX.XX
Sales Tax    8.25%
Total        $XX.XX

*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
/*Items        Prices*/
 double item1  = 1.00;
 double item2  = 2.00;
 double item3  = 3.00;
 double item4  = 4.00;
 double item5  = 5.00;
 double item6  = 6.00;
 double item7  = 7.00;
 double item8  = 8.00;
 double item9  = 9.00;
 double item10 = 10.00;
 double subtotal = item1 + item2 + item3 + item4 + item5 + item6 + item7 + item8 + item9 + item10;
 double Sales_tax = 8.25;
 double total = subtotal * 1.0825;


 string name1  = "food";
 string name2  = "sleep";
 string name3  = "merch";
 string name4  = "weather";
 string name5  = "leroy_jenkins";
 string name6  = "invader_zim";
 string name7  = "Todo";
 string name8  = "Sakura";
 string name9  = "Tenchi";
 string name10 = "Washu";






 cout << setprecision(2) << fixed << total<< endl;

 return 0;
}
