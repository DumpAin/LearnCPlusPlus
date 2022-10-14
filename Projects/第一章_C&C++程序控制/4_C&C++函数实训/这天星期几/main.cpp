#include <iostream>
using namespace std;

int DayOfYear(int y, int m)
{
    int d = 1, n = 0;

	//cin >> y >> m >> d;
	if (((y%4 == 0) && (y%100 != 0)) || (y%400 == 0))
		{
			//是闰年算法
			if (m == 1)
			{
				n = d;
				//printf("%d-%d-%d是第%d天\n",y,m,d,n);
			}
			else
			{
				if (m == 2)
				{
					n = 31 + d;
					//printf("%d-%d-%d是第%d天\n",y,m,d,n);	
				}
				else
				{
					if (m <= 7)
					{	
						n = m / 2 * 31 + (m - 1) / 2 * 30 + d - 1;
						//printf("%d-%d-%d是第%d天\n",y,m,d,n);
					}
					else
					{
						n = (m + 1) / 2	* 31 + (m - 1) / 2 * 30 + d - 1;
						//printf("%d-%d-%d是第%d天\n",y,m,d,n);
					}
				}
			}
		}
		else
		{
			//非闰年算法
			if (m == 1)
			{
				n = d;
				//printf("%d-%d-%d是第%d天\n",y,m,d,n);
			}
			else
			{
				if (m == 2)
				{
					n = 31 + d;
					//printf("%d-%d-%d是第%d天\n",y,m,d,n);	
				}
				else
				{
					if (m <= 7)
					{	
						n = m / 2 * 31 + (m - 1) / 2 * 30 + d - 2;
						//printf("%d-%d-%d是第%d天\n",y,m,d,n);
					}
					else
					{
						n = (m + 1) / 2	* 31 + (m - 1) / 2 * 30 + d - 2;
						//printf("%d-%d-%d是第%d天\n",y,m,d,n);
					}
				}
			}
		}
	//cout << y << "有" << n << "天" << endl;
    return n;
}

// 函数leapYear
int leapYear(int y)
{
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 1;
    return 0;
}

// 函数whatDay：计算某年某月某日是星期几
// 参数：year-年，month-月
// 返回值：--7分别表示星期一到星期日
int whatDay(int year, int month)
{
    // 请在这里补充代码，实现函数whatDay
    /********** Begin *********/
    int a1 = 0, b1 = 0, a2 = 0, b2 = 0, All = 0, i = 0, xingqi = 0;
	
	for (i = year; i >= 1; i--)
	    if (leapYear(i) == 1)
	        {
	        	//cout << i << "是闰年" << endl;
	            a1 = 366;
	            b1 = b1 + a1;
	        }
	        else
	        {
				//cout << i << "不是闰年" << endl;
				a2 = 365;
				b2 = b2 + a2;
			}
	
	//cout << "b1+b2=" << b1 + b2 << endl;
	
	if (leapYear(year) == 1)
	{
		All = DayOfYear(year, month) + b1 + b2 - 2;
	}
	else
	{
		All = DayOfYear(year, month) + b1 + b2 - 1;
	}

	//cout << "All=" << All << endl;
	//cout << year << "年" << month << "月之前共有" << DayOfYear(year, month) << "天" << endl;
	
	xingqi = All % 7;
	if(xingqi == 0) xingqi = 7;
	
	//cout << "xingqi=" << xingqi << endl;
	return xingqi;
    /********** End **********/
}

int main()
{
    int y, m, xq;     // 年、月、星期几
    cin >> y >> m;     // 输入年月
    xq = whatDay(y,m);     // 计算星期几
    cout << y << "年" << m << "月1日是星期";     // 输出星期
    //cout << "xq=" << xq << endl;
    if(xq == 7)
        cout << "日" << endl;
    else
        cout << xq << endl;
    return 0;
}
