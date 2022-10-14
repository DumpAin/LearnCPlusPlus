// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    // y-年，m-月,d-日，n-第几天
    int y, m, d, n;
    // 请在此添加代码，计算并输出指定日期是第几天
    /********** Begin *********/
	cin >> y >> m >> d;
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		{
			//是闰年算法
			cout << "是闰年" << endl;
			if (m == 1)
			{
				n = d;
				printf("%d-%d-%d是第%d天\n",y,m,d,n);
			}
			else
			{
				if (m == 2)
				{
					n = 31 + d;
					printf("%d-%d-%d是第%d天\n",y,m,d,n);	
				}
				else
				{
					if (m <= 7)
					{	
						n = m / 2 * 31 + (m - 1) / 2 * 30 + d - 1;
						printf("%d-%d-%d是第%d天\n",y,m,d,n);
					}
					else
					{
						n = (m + 1) / 2	* 31 + (m - 1) / 2 * 30 + d - 1;
						printf("%d-%d-%d是第%d天\n",y,m,d,n);
					}
				}
			}
		}
		else
		{
			//非闰年算法
			cout << "非闰年" << endl;
			if (m == 1)
			{
				n = d;
				printf("%d-%d-%d是第%d天\n",y,m,d,n);
			}
			else
			{
				if (m == 2)
				{
					n = 31 + d;
					printf("%d-%d-%d是第%d天\n",y,m,d,n);	
				}
				else
				{
					if (m <= 7)
					{	
						n = m / 2 * 31 + (m - 1) / 2 * 30 + d - 2;
						printf("%d-%d-%d是第%d天\n",y,m,d,n);
					}
					else
					{
						n = (m + 1) / 2	* 31 + (m - 1) / 2 * 30 + d - 2;
						printf("%d-%d-%d是第%d天\n",y,m,d,n);
					}
				}
			}
		}
    
    /********** End **********/

    return 0;
}
