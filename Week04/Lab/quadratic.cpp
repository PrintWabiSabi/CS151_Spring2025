#include <iostream>
#include<string>
#include<cmath>

using namespace std;


int main()
{

int a;
int b;
int c;
int x_1;
int x_2;

    cout<< "Please input A B C " << endl;
    cin >> a >> b >> c;

    x_1= (-b + sqrt(pow(b,2) - 4*a*c)) / 2*a;

    x_2= (-b - sqrt(pow(b,2) - 4*a*c)) / 2*a;

    cout << "X-1 is = "<< x_1 << " and x_2 = " << x_2 <<endl;

    return 0;

}
