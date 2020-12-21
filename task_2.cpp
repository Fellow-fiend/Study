#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    if(N<=11) N = 12;
    cout << "for N = " << N << endl;
    for (int x = 1; x <= N/5; x++)
        for(int y = 1; y <= N/7; y++)
            if(5*x+7*y == N) cout << "\nx = " << x << endl 
                                << "y = " << y << endl;  
}
