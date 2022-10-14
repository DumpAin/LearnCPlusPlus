// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n = 0, k = 0, x = -1, a = 0, b = 0, c = 0;
    cin >> n >> k;
    
    // 请在此添加代码，输入n和k，并输出n以内k个素数以及它们的和
    /********** Begin *********/
    
	for (a = n; a >= 2; a--)
			// 判断a是否为素数
			for (int i = 2; i < a; i++)
				if (a % i == 0)
				{
					break;
				}
				else
				{
					if ((a % i != 0) && ((i + 1) == a))
					{
						x = x + 1; // 用于判断是否到达k
						if (a == 3)
						{
							cout << "3 2 " << b+5;
							return 0;
						}
						else
						{
							if (x >= k)
							{
								cout << b;
								return 0;
							}
						}
						
						cout << a << " ";
						// 计算输出的所有素数之和
						c = b + a;
						b = c;
							
						//cout << "此时的b为" << b << " x为" << x << " k为" << k << "   ";
					}
				}
    /********** End **********/

    return 0;
}


		// 判断是否为素数
		/*
		for (int i = 2; i < a; i++)
			if (((a%i != 0) && ((i+1) == a)) && (a%i != 0))
			{
				cout << a << "是素数 ";
				x = x + 1;
				
				// 计算输出的所有素数之和
				c = b + a;
				b = c;
				
				// 判断是否到达指定k
				if (x == k)
				{
					break;
					cout << b;
				}
			}
		*/
		
		
		
/*
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
*/
