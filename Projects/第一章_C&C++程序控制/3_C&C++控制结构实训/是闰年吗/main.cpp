#include <iostream>
using namespace std;

int main() {
	int year = 0;
	cin >> year;

		if (year%400 == 0)
		{
			cout << "Yes";
		}
		 else
		{
			if (year%4 == 0)
			{
				if (year%100 == 0)
				{
					cout << "No";
				}
				 else
				{
					cout << "Yes";
				}
			}
			 else
			{
				cout << "No";
			}
		}
	return 0;
}
