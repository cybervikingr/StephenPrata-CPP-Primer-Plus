//Listing 4.3 insrt1.cpp -- reading more than one string -- чтение более одной строки
#include <iostream>

int main()
{
    using namespace std;
    const int ArSize(20);
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favourite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}