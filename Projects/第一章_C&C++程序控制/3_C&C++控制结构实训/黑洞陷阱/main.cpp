// ��������I/O�⣬����ʹ����һ�����������ʽ
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
	
	//�����ֵ
    if (n < 10)
    {
    	m = n * 100;
	}
	else
	{
		if (n < 100)
		{
			a = n / 10; //ʮλ
			b = n % 10; //��λ
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
			a = (n / 10) % 10; //ʮλ
			b = n / 100; //��λ
			c = n % 10; //��λ
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
	
	//����Сֵ
    if (n < 10)
    {
    	m = n;
	}
	else
	{
		if (n < 100)
		{
			a = n / 10; //ʮλ
			b = n % 10; //��λ
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
			a = (n / 10) % 10; //ʮλ
			b = n / 100; //��λ
			c = n % 10; //��λ
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
