#include <iostream>
using namespace std;

// ����funP��ʵ����ѧ����P����
// ����ֵ������P(n,x)��ֵ
double funP(int n, double x)
{
    // �������ﲹ����룬ʵ�ֵݹ麯��funP
    /********** Begin *********/
    if (n == 0)
    {
		return 1;
	}
	else
	{
		if (n == 1)
		{
			return x;
		}
		else
		{
			double a = ((2 * n - 1) * funP(n - 1, x) - (n - 1) * funP(n - 2, x)) / n;
			return a;	
		}
	}
    
    
    /********** End **********/
}

int main()
{
    int n;
    double x;
    cin >> n >> x;     // ����n��x
    cout << "P("<<n<<", "<<x<<")=" << funP(n,x) << endl;
    return 0;
}
