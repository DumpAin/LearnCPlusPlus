// ��������I/O�⣬����ʹ����һ�����������ʽ
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    // y-�꣬m-��,d-�գ�n-�ڼ���
    int y, m, d, n;
    // ���ڴ���Ӵ��룬���㲢���ָ�������ǵڼ���
    /********** Begin *********/
	cin >> y >> m >> d;
	if (((y%4 == 0) && (y%100 != 0)) || (y%400 == 0))
		{
			//�������㷨
			cout << "������" << endl;
			if (m == 1)
			{
				n = d;
				printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);
			}
			else
			{
				if (m == 2)
				{
					n = 31 + d;
					printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);	
				}
				else
				{
					if (m <= 7)
					{	
						n = m / 2 * 31 + (m - 1) / 2 * 30 + d - 1;
						printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);
					}
					else
					{
						n = (m + 1) / 2	* 31 + (m - 1) / 2 * 30 + d - 1;
						printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);
					}
				}
			}
		}
		else
		{
			//�������㷨
			cout << "������" << endl;
			if (m == 1)
			{
				n = d;
				printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);
			}
			else
			{
				if (m == 2)
				{
					n = 31 + d;
					printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);	
				}
				else
				{
					if (m <= 7)
					{	
						n = m / 2 * 31 + (m - 1) / 2 * 30 + d - 2;
						printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);
					}
					else
					{
						n = (m + 1) / 2	* 31 + (m - 1) / 2 * 30 + d - 2;
						printf("%d-%d-%d�ǵ�%d��\n",y,m,d,n);
					}
				}
			}
		}
    
    /********** End **********/

    return 0;
}
