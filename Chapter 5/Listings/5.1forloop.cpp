// Listing 5.1 forloop.cpp -- introducing for loops // представление цикла for
#include <iostream>

int main()
{
    using namespace std;
    int i;  // create a counter variable // создать переменную счетчика
    // initialize; test; update // инициализация; тест; обновление
    for (i = 0; i <5; i++)
        cout << "C++ knows loops\n";
    cout << "C++ knows when to stop\n";
    return 0;
}