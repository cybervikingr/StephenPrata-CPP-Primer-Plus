// Listing 5.17 textin2.cpp -- using cin.get(char) -- использование cin.get(char)
#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;

    cout << "Enter characters; enter # to quit.\n";
    cin.get(ch);        // use the cin.get(ch) function // использование функции cin.get(ch)
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);    // use it again // использование её снова
    }
    cout << endl << count << " characters read.\n";
    return 0;
}