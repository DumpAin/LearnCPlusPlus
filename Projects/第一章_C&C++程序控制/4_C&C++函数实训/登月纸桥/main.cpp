#include <iostream>
using namespace std;

// foldTimes-���㽨ֽ�ŵ��۵�����
// ������dis-�Ǽʾ��루ǧ�ף���thick-ֽ�ĺ�ȣ����ף�
// ����ֵ��������Ҫ�۵��Ĵ���
int foldTimes(double dis, double thick);

int main()
{
    double dis, thick;
    cin >> dis >> thick;
    cout << "��Ҫ�۵�" << foldTimes(dis,thick) << "��" << endl;
    return 0;
}

int foldTimes(double dis, double thick)
{
    // �������ﲹ����룬ʵ�ֺ���foldTimes
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
