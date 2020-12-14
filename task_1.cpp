#include <iostream>

int main(int argc, char *argv[])
{
	using namespace std;
	
	int a, b, c, e;
	for (int i = 100; i < 1000; i++) 
	{
	    e = i;
	    c = 0;
	    b = i % 10;
	    a = i / 10 % 10;
	    while(e > 0)
	    {
	        c += e % 10;
	        e /= 10;
	    }
	    if(c == a*10+b || c == b*10+a)
	        cout << i << endl;
	}
	return 0;
}
