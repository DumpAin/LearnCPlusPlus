// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int n, m = 0, a, b, c, d = 0, MaxVal = 0, MinVal = 0;
    cin >> n;
    
	while(1)
	{
	
	//求最大值
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
	
	MaxVal = m;
	
	//求最小值
    if (n < 10)
    {
    	m = n;
	}
	else
	{
		if (n < 100)
		{
			a = n / 10; //十位
			b = n % 10; //个位
			if (a < b)
			{
				m = a * 10 + b;
			}
			else
			{
				m = b * 10 + a;
			}
		}
		else
		{
			a = (n / 10) % 10; //十位
			b = n / 100; //百位
			c = n % 10; //个位
			if ((a <= b) && (b <= c))
			{
				m = a * 100 + b * 10 + c;
			}
			else
			{
				if ((a <= c) && (c <= b))
				{
					m = a * 100 + c * 10 + b;
				}
				else
				{
					if ((b <= a) && (a <= c))
					{
						m = b * 100 + a * 10 + c;
					}
					else
					{
						if ((b <= c) && (c <= a))
						{
							m = b * 100 + c * 10 + a;
						}
						else
						{
							if ((c <= a) && (a <= b))
							{
								m = c * 100 + a * 10 + b;
							}
							else
							{
								m = c * 100 + b * 10 + a;
							}
						}
					}
				}
			}
		}
	}
	
	MinVal = m;
	
	cout << ++d << ":" << MaxVal << "-" << MinVal << "=" << MaxVal - MinVal << endl;
	n = MaxVal - MinVal;
	
	if (n == 495)
	{
		break;
	}
	
	}
    return 0;
}
