// тестирование компиляции и отладки непосредственно в VS Code
#include<iostream>

long double fact(unsigned);
int main(int argc, char const *argv[])
{
	std::cout << (fact(234)) << '\n';
	return 0;
}

long double fact(unsigned n)
{
	long double temp = 1;
	while(n)
		temp *= n--;
	return temp;
}