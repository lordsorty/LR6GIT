#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int A, B;
	cout << "������ A: ";
	cin >> A;
	cout << "������ B: ";
	cin >> B;
	(A >= 0) || (B <= -2) ? (cout << "True") : (cout << "False");
	cout << ("\n");
}
