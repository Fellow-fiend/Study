#include <iostream>
#include <cmath>
int main(int argc, char *argv[])
{
	using namespace std;
	double a, b, c;
	cout << "Enter the a, b, c:\n";
	cin >> a >> b >> c;
	a == 0 ? throw("Error! a = 0.") : b*b - 4*a*c >= 0 ? 
	cout << "x1 = " << -b/(2*a) + sqrt(b*b - 4*a*c)/(2*a) 
	<< "\nx2 = " << -b/(2*a) - sqrt(b*b - 4*a*c)/(2*a) 
	<< endl : cout << "x is not real\n";
	return 0;
}
