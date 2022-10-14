// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n, a;
	cin >> n;
	
	if (n == 1)
	{
		cout << "No";
	}
	else
	{
		if (n == 2)
		{
			cout << "Yes";
		}
		else
		{
			for (int i = 2; i < n; i++)
			if (n%i == 0)
			{
				cout << "No";
				break;
			}
			else
			{
				if ((n%i != 0) && ((i+1) == n))
				{
				cout << "Yes";
				}
			}	
		}
	}
    return 0;
}
