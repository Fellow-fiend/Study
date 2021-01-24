#include <iostream>
#include "tools.h"
using namespace std;

int main()
{
    int number, count = 0;
    int *arr = new int[0];
    while(cin >> number)
        if(number)
            if(!(number % 5) && !search(arr, count, number)) push_back(arr, count, number);
            else;
        else break;    
    cout << count;
    delete[] arr;
    return 0;
}