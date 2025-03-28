#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main() 
{
srand(time(0));

const int N = rand()%16+5; // This gives us a random number from 5-20

cout<< N << endl;  // This prints out N which right now is a random number from 5-20

int nums[ N ];  // This is how you declare an array of size N and size N will be the random number generate on line  11
int sum = 0 ;
cout <<"[ ";
for(int count  = 0 ; count < N ; count++){
    nums[count] = rand()%101;
   sum = nums[count];
    if( count < N-1 )
    { 
        cout<< nums[count] <<',';
        } else{ 
            cout<<nums[count];
        }

 } cout<<']' << endl;
  cout << "Sum = "<< sum << " Average = " << setprecision(2) <<  sum/N << endl;
} // N-- = N-1 and also N-=1 and N=N-1