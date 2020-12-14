#include <iostream>
#include <cmath>

int main(int argc, char *argv[])
{
	using namespace std;
	double a, b, c;
	cout << "Enter the a, b, c:\n";
	if(!(cin >> a >> b >> c)) throw;
	if(a == 0)
	    cout << "Error! a = 0. Programm is terminated.";
	else if(b*b - 4*a*c >= 0)
	    cout << "x1 = " << -b/(2*a) + sqrt(b*b - 4*a*c)/(2*a) 
	<< "\nx2 = " << -b/(2*a) - sqrt(b*b - 4*a*c)/(2*a) << endl;
	    else cout << "x is not real\n";
	
	return 0;
}
