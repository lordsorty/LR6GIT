#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
int main()
{
    int k;
    float x, Y, sum;
    cout << "Input x: ";
    cin >> x;
    sum = 0;
    for (k = 1; k < 11; k++)
    {
        sum = sum + k;
    }
    Y = (sum * sin(k * x) + 2 * x) / ((x * x) + 5);
    cout << "Y= " << setprecision(2) << Y << endl;
}
