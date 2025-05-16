#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void commas(string amount);
void load(string nums[], int size);
void randomNumber(string& num);

int main()
{
    const int SIZE = 5;
    string nums[SIZE];

    load(nums, SIZE);

    cout << "Formatted numbers with commas" << endl;
    for (int i = 0; i < SIZE; i++)
        cout << nums[i] << endl;

    return 0;
}

void commas(string amount)
{
    string result = "";
    int count = 0;

    bool isNegative = (amount[0] == '-');
    if (isNegative)
        result += "-";

    int start = isNegative ? 1 : 0;
    for (int i = amount.length() - 1; i >= start; i--)
    {
        if (count > 0 && count % 3 == 0)
            result = "," + result;

        result = amount[i] + result;
        count++;
    }

    cout << result << endl;
}

void load(string nums[], int size)
{
    srand(time(0));

    for (int i = 0; i < size; i++)
    {
        string num;
        randomNumber(num);
        nums[i] = num;
    }
}

void randomNumber(string& num)
{
    int randomNum = rand() % 9000 + 1000;
    num = to_string(randomNum);
    commas(num);
}
