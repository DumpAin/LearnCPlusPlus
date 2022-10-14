#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int year = 0, ys = 0;
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
            cout << "Yes" << endl;
    }
        else
    {
            cout << "No" << endl;
    }
    return 0;
}
