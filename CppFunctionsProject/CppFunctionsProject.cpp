#include <iostream>

int global{ 23 };

void PrintChars(char symbol = '*', int length = 20);
int modul(int);
int mysqr(int);
void Func(int);

double Power(double x, int n)
{
    double power{ 1 };
    for (int i = 0; i < n; i++)
        power *= x;
    return power;
}

int Counter()
{
    static int count{ 0 };
    return ++count;
}

int main()
{
    /*
    int n = -5;
    std::cout << n << "\n";
    Func(n);
    std::cout << n << "\n";

    int ln{ 50 };
    
    PrintChars();

    PrintChars('-');
    std::cout << "Modul = " << modul(n) << "\n";
    PrintChars('+', ln);
    */

    for (int i = 0; i < 5; i++)
        std::cout << Counter() << "\n";

    return 0;
    std::cout << "Wow!\n";
}


void PrintChars(char symbol, int length)
{
    for (int i{}; i < modul(length); i++)
        std::cout << symbol;
    std::cout << "\n";
}

int modul(int number)
{
    if (number < 0)
        number = -number;
    return number;
}

int mysqr(int number)
{
    return number * number;
}

void Func(int n)
{
    n = 100;
}

