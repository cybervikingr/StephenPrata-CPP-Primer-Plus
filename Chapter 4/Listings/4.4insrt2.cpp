//Listing 4.4 insrt2.cpp -- reading more than one word with getline
#include <iostream>

int main() 
{
    using namespace std;
    const int ArSize(20);
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name, ArSize);  // reads through newline // читать до символа новой строки
    cout << "Enter your favourite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}