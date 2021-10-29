#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
int main()
{
    int y;
    cout << "Input number of your month: ";
    cin >> y; //ввести номер місяця
    switch (y)
    {
    case 1: case 2: case 12: cout << "\n" "Winter" "\n"; break; //якщо 1,2,12 вивести Winter
    case 3: case 4: case 5: cout << "\n" "Spring" "\n"; break; //якщо 3,4,5 вивести Spring
    case 6: case 7: case 8: cout << "\n" "Summer" "\n"; break; //якщо 6,7,8 вивести Summer
    case 9: case 10: case 11: cout << "\n" "Autumn" "\n"; break; //якщо 9,10,11 вивести Autumn
    default: cout << "Error";
    }
}