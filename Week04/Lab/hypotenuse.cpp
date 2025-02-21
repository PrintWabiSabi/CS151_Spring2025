#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int side_a; 
    int side_b;

    cout << "insert side A and side B" << endl;
    cin >> side_a >> side_b;
    
    int side_c = pow(side_a,2) + pow(side_b,2);
     side_c = sqrt(side_c);
    cout << "side c = " << side_c << endl;

    return 0;
}