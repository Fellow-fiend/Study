#include <iostream>
#include "tools.h"
using namespace std;

int main()
{
    int number, count = 0, mul;
    int *numbers = new int[0];
    while(cin >> number)
        if(number)
            push_back(numbers, count, number);
        else break;

    sort(numbers, count);

    mul = numbers[count-1] * numbers[count - 2] * numbers[count - 3];

    cout << mul << endl;

    delete[] numbers;
    return 0;
}