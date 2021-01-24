#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    double sum = 0;
    for(int i = 101; i > 0; i -= 2)
        sum += 1/(i + sum);
    cout << sum << endl;
    return 0;
}