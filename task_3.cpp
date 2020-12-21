#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double result = 0;
    for(int i = 4; i <= 100; i+=4)
        result = sqrt(result + i);
    cout << result << endl;
    return 0;
}
