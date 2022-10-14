#include <iostream>
using namespace std;

// foldTimes-计算建纸桥的折叠次数
// 参数：dis-星际距离（千米），thick-纸的厚度（毫米）
// 返回值：建桥需要折叠的次数
int foldTimes(double dis, double thick);

int main()
{
    double dis, thick;
    cin >> dis >> thick;
    cout << "需要折叠" << foldTimes(dis,thick) << "次" << endl;
    return 0;
}

int foldTimes(double dis, double thick)
{
    // 请在这里补充代码，实现函数foldTimes
    /********** Begin *********/
    
    double dismm = 0, a = 0;
	int x = 0;
	dismm = dis * 1000000;
    do {
		thick = thick * 2;
		x = x + 1;
	} while(thick <= dismm);
	
	return x;

    /********** End **********/
}
