// ��������I/O�⣬����ʹ����һ�����������ʽ
#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    // n-���������m-���ź����
    int n, m, a, b, c;
    // ���ڴ���Ӵ��룬����һ��С��1000�������������ų�����������m��
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
    /********** End **********/
    // ������ź����
	cout << setfill('0') << setw(3) << m;
    return 0;
}
