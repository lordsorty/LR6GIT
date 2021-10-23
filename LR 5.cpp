#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
int main()
{
    int x;
    cout << "Input number of your month: ";
    cin >> x;
    switch (x)
    {
    case 1: case 2: case 12: cout << "\n" "Winter" "\n"; break;
    case 3: case 4: case 5: cout << "\n" "Spring" "\n"; break;
    case 6: case 7: case 8: cout << "\n" "Summer" "\n"; break;
    case 9: case 10: case 11: cout << "\n" "Autumn" "\n"; break;
    default: cout << "Error";
    }
}