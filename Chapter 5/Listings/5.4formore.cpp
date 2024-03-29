// Listing 5.4 formore.cpp -- more looping with for -- дополнительные сведения о циклах for
#include <iostream>
const int ArSize = 16;      // example of external declaration // пример внешнего объявления

int main()
{
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
    return 0;
}