#include <iostream>
using namespace std;

// �ݹ麯��splitNum��˳�����n�ĸ�λ���֣�ÿ������ռһ��
// ����ֵ����
int splitNum(unsigned int n)
{
    // �������ﲹ����룬ʵ�ֵݹ麯��splitNum
    /********** Begin *********/
    /*
	if (n == 0)
	{
		cout << "jieshu";
	}
	else
	{
		int shang = n / 10;
		int ys = n % 10;
		//cout << ys << endl;
		n = splitNum(n / 10);
		cout << n % 10 << endl;
	}
	*/

	
	int shang = n / 10;
	int ys = n % 10;
	//cout << ys << endl;
	if (n < 10)
	{
		//cout << "jieshu" << endl;
		//cout << n << endl;
		return 0;
	}
	n = splitNum(n / 10);
	
	cout << shang % 10 << endl;


    
    
    /********** End **********/
}

int main()
{
    unsigned n;
    cin >> n;     // ����������n
    n = (n * 10) + (n % 10);
    splitNum(n);     // ����splitNum������˳�����n�ĸ�λ����
    return 0;
}
