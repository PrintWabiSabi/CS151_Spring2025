#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main ()
{
    double weight;
    double  miles;
    double shipping = 0;
    double rate = 0;

    cout <<  "Please input the package weight in Kg " << endl;
    cin >> weight;
    cout << "Plesase input distance in miles ";
    cin >> miles;
    shipping =  miles;
    
    if (weight >= 0 && weight <= 20 && miles >= 10 &&  miles <= 3000 ){

        if ( weight <= 2 && weight >= 0 )
    {  rate = 1.10;
        shipping = rate * (miles / 500);

        cout << " The cost of shipping is " << shipping << endl; }

    else if (weight > 2 && weight <=6 ){
        rate = 2.20;
        shipping = rate * (miles / 500);
        cout << " The cost of shipping is "<< shipping << endl; }

    else if (weight > 6 && weight <= 10 )
    {   
         rate = 3.70;
        shipping = rate * (miles / 500);
        cout << " The cost of shipping is "<< shipping << endl; }

    else if (weight > 10 && weight <= 20)
    {    rate = 4.80;
        shipping = rate * (miles / 500);
        cout << "The cost of shipping is " << shipping << endl; 
    }
    }
     else   {
        cout << "The weight and or milage is invalid ";
     }

    return 0;
}

