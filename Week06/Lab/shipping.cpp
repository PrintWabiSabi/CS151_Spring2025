#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main ()
{
    int weight;

    cout <<  "Please input the package weight in Kg " << endl;
    cin >> weight;

    if ( weight <= 2 )
    {cout << " The cost of shipping is 1.50" << endl; }

    else if (weight <= 3 )
    {cout << " The cost of shipping is 2.20" << endl; }

    else if (weight <= 6)
    {cout << " The cost of shipping is 3.70 " << endl; }

    else if (weight <= 10 || weight >= 20)
    {cout << "The cost of shipping is 4.80 "<< endl; }

    return 0;
}

