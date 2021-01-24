#include <iostream>
using namespace std;

int main()
{
    unsigned n;
    cin >> n;
    int number[8] {0}, temp[4]{};
    temp[0] = n / 1 % 10;
    temp[1] = n / 10 % 10;
    temp[2] = n / 100 % 10;
    temp[3] = n / 1000 % 10;
    for(int i = 0; i < 4; ++i)
        number[i] = temp[i];
    for(int i = 4; i < 8; ++i)
        number[i] = temp[8-(i+1)];
    for(int i = 0; i < 8; ++i)
        cout << number[i];
    return 0;
}
