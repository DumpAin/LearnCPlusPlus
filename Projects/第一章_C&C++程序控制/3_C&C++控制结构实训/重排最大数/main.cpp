// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    // n-输入的数，m-重排后的数
    int n, m, a, b, c;
    // 请在此添加代码，输入一个小于1000的正整数，重排出最大的数存入m中
    /********** Begin *********/
    cin >> n;
    
    if (n < 10)
    {
    	m = n * 100;
	}
	else
	{
		if (n < 100)
		{
			a = n / 10; //十位
			b = n % 10; //个位
			if (a < b)
			{
				m = b * 100 + a * 10;
			}
			else
			{
				m = a * 100 + b * 10;
			}
		}
		else
		{
			a = (n / 10) % 10; //十位
			b = n / 100; //百位
			c = n % 10; //个位
			if ((a <= b) && (b <= c))
			{
				m = c * 100 + b * 10 + a;
			}
			else
			{
				if ((a <= c) && (c <= b))
				{
					m = b * 100 + c * 10 + a;
				}
				else
				{
					if ((b <= a) && (a <= c))
					{
						m = c * 100 + a * 10 + b;
					}
					else
					{
						if ((b <= c) && (c <= a))
						{
							m = a * 100 + c * 10 + b;
						}
						else
						{
							if ((c <= a) && (a <= b))
							{
								m = b * 100 + a * 10 + c;
							}
							else
							{
								m = a * 100 + b * 10 + c;
							}
						}
					}
				}
			}
		}
	}
    /********** End **********/
    // 输出重排后的数
	cout << setfill('0') << setw(3) << m;
    return 0;
}
