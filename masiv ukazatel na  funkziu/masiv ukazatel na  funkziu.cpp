#include <cmath>
#include <iostream>
#include <functional>

double a(double x)
{
    return sqrt(x);
}

double b(double x)
{
    return x * x * x;
}

double c(double x)
{
    return sin(x);
}

int main()
{
    std::function<double(double)> funcs[] = { a, b, c };

    double x;
    std::cout << "Enter x: ";
    std::cin >> x;
    unsigned int ch, len = sizeof(funcs) / sizeof(*funcs);
    do
    {
        std::cout << "Choose function: ";
        std::cin >> ch;
    } while (ch < 1 || ch > len);

    std::cout << "Result: " << funcs[ch - 1](x) << std::endl;
}