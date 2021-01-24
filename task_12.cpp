#include <iostream>
#include <tools.h>
using namespace std;


int main()
{
    int n, counter = 0;
    double sum = 0;
    int *numbers = new int[0];

    while(cin >> n)
        if(n != 0) { push_back(numbers, counter, n); sum += n;}
        else break;

    if(numbers[counter/2] > sum/counter) cout << "YES\n";
    else cout << "NO\n";

    delete[] numbers;
    return 0;
}
