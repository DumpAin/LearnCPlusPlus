#include <iostream>
using namespace std;

int DayOfYear(int y, int m)
{
    int d = 1, n = 0;

	//cin >> y >> m >> d;
	if (((y%4 == 0) && (y%100 != 0)) || (y%400 == 0))
		{
			//�������㷨
			if (m == 1)
			{
				n = d;
				//printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);
			}
			else
			{
				if (m == 2)
				{
					n = 31 + d;
					//printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);	
				}
				else
				{
					if (m <= 7)
					{	
						n = m / 2 * 31 + (m - 1) / 2 * 30 + d - 1;
						//printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);
					}
					else
					{
						n = (m + 1) / 2	* 31 + (m - 1) / 2 * 30 + d - 1;
						//printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);
					}
				}
			}
		}
		else
		{
			//�������㷨
			if (m == 1)
			{
				n = d;
				//printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);
			}
			else
			{
				if (m == 2)
				{
					n = 31 + d;
					//printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);	
				}
				else
				{
					if (m <= 7)
					{	
						n = m / 2 * 31 + (m - 1) / 2 * 30 + d - 2;
						//printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);
					}
					else
					{
						n = (m + 1) / 2	* 31 + (m - 1) / 2 * 30 + d - 2;
						//printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);
					}
				}
			}
		}
	//cout << y << "��" << n << "��" << endl;
    return n;
}

// ����leapYear
int leapYear(int y)
{
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 1;
    return 0;
}

// ����whatDay������ĳ��ĳ��ĳ�������ڼ�
// ������year-�꣬month-��
// ����ֵ��--7�ֱ��ʾ����һ��������
int whatDay(int year, int month)
{
    // �������ﲹ����룬ʵ�ֺ���whatDay
    /********** Begin *********/
    int a1 = 0, b1 = 0, a2 = 0, b2 = 0, All = 0, i = 0, xingqi = 0;
	
	for (i = year; i >= 1; i--)
	    if (leapYear(i) == 1)
	        {
	        	//cout << i << "������" << endl;
	            a1 = 366;
	            b1 = b1 + a1;
	        }
	        else
	        {
				//cout << i << "��������" << endl;
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
	//cout << year << "��" << month << "��֮ǰ����" << DayOfYear(year, month) << "��" << endl;
	
	xingqi = All % 7;
	if(xingqi == 0) xingqi = 7;
	
	//cout << "xingqi=" << xingqi << endl;
	return xingqi;
    /********** End **********/
}

int main()
{
    int y, m, xq;     // �ꡢ�¡����ڼ�
    cin >> y >> m;     // ��������
    xq = whatDay(y,m);     // �������ڼ�
    cout << y << "��" << m << "��1��������";     // �������
    //cout << "xq=" << xq << endl;
    if(xq == 7)
        cout << "��" << endl;
    else
        cout << xq << endl;
    return 0;
}
