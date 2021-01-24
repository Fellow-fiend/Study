#include <iostream>

using namespace std;

int main()
{
    unsigned n;
    cin >> n;
    if(n < 2)
    {
        cout << "NO\n";
        return 0;
    }
    for(int i = 1; i <= n/2; ++i)
        for(int j = 1; j <= n/2; ++j)
        {
            if(n == i*i + j*j) 
            {
                cout << "YES\n";
                return 0;
            }
        }
    cout << "NO\n";
    return 0;
}