#include <iostream>

int main()
{
    double n, m, x, y;
    std::cin >> n >> m >> x >> y;
    double x_min = n - x > n/2 ? x : n - x;
    double y_min = m - y > m/2 ? y : m - y;
    std::cout << (x_min > y_min ? y_min : x_min);
    return 0;
}
