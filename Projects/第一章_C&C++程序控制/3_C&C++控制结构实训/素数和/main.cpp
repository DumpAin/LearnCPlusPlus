// ��������I/O�⣬����ʹ����һ�����������ʽ
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n = 0, k = 0, x = -1, a = 0, b = 0, c = 0;
    cin >> n >> k;
    
    // ���ڴ���Ӵ��룬����n��k�������n����k�������Լ����ǵĺ�
    /********** Begin *********/
    
	for (a = n; a >= 2; a--)
			// �ж�a�Ƿ�Ϊ����
			for (int i = 2; i < a; i++)
				if (a % i == 0)
				{
					break;
				}
				else
				{
					if ((a % i != 0) && ((i + 1) == a))
					{
						x = x + 1; // �����ж��Ƿ񵽴�k
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
						// �����������������֮��
						c = b + a;
						b = c;
							
						//cout << "��ʱ��bΪ" << b << " xΪ" << x << " kΪ" << k << "   ";
					}
				}
    /********** End **********/

    return 0;
}


		// �ж��Ƿ�Ϊ����
		/*
		for (int i = 2; i < a; i++)
			if (((a%i != 0) && ((i+1) == a)) && (a%i != 0))
			{
				cout << a << "������ ";
				x = x + 1;
				
				// �����������������֮��
				c = b + a;
				b = c;
				
				// �ж��Ƿ񵽴�ָ��k
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
