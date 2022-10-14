#include <iostream>
using namespace std;

// 递归函数splitNum：顺序输出n的各位数字，每个数字占一行
// 返回值：无
int splitNum(unsigned int n)
{
    // 请在这里补充代码，实现递归函数splitNum
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
    cin >> n;     // 输入正整数n
    n = (n * 10) + (n % 10);
    splitNum(n);     // 调用splitNum函数，顺序输出n的各位数字
    return 0;
}
