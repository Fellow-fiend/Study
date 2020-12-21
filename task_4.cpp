#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b;
    c = 180 - (a + b);
    bool isVersatile = a == b && a == c && b == c;
    bool isEquilateral = a == b || a == c || b == c;
    if(isVersatile)
        cout << "Triangle is equilateral\n";
    else if(isEquilateral)
        cout << "Triangle is isosceles\n";
    else cout << "Triangle is versatile\n";
    if(a == 90 || b == 90 || c == 90)
        cout << "Triangle is rectangular\n";
    else if(a > 90 || b > 90 || c > 90)
        cout << "Triangle is obtuse angle\n";
    else cout << "Triangle is sharp-angled\n";
    return 0;
}
