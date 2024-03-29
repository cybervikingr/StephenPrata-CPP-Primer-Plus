// Listing 4.21 newstrct.cpp -- using new with a structure -- использование new со структурой
#include <iostream>
struct inflatable   // structure definition // определение структуры
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable * ps = new inflatable;   // allot memory for structure // выделить память для структуры
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);              // method 1 for member access // первый метод для доступа к членам структуры
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;                // method 2 for member access // второй метод для доступа к членам структуры
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;                 // method 2
    cout << "Volume: " << ps->volume << " cubic feet\n";    // method 1
    cout << "Price: $" << ps->price << endl;                // method 1
    delete ps;                         // free memory used by structure // освободить память, используемую структурой

    return 0;
}