#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    const int n = 5;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Input massive " << i + 1 << ": ";
        cin >> A[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << A[i];
    }
    cout << endl;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ((A[i] % 6) == 0)
        {
            count++;
        }
    }
    if (count != 0)
    {
        cout << "\nQuantity = " << count << endl;
    }
    else
        cout << "Here is no numbers that multiples of 6" << endl;
    int min = A[0];
    for (int i = 0; i < n; i++)
        if (A[i] < min) min = A[i];
    cout << endl;
    cout << "min = " << min;
    cout << endl;
}