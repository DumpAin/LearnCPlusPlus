#include <iostream>
using namespace std;

void whatTime(int secs, int &h, int &m, int &s)
{
    // �������ﲹ����룬��Ʋ�ʵ�ֺ���whatTime,ʹmain�����еĺ���������ȷ
    /********** Begin *********/
    s = secs % 60;
    m = ((secs - s) % 3600) / 60;
    h = (secs - s - m * 60) / 3600;
    /********** End **********/
}

int main()
{
    int secs;     // secs����ϵ�����   
    int h, m, s;     // ��ǰʱ��:h-Сʱ��m-�֣�s-��
    cin >> secs;     // ��������ϵ�����
    whatTime(secs,h,m,s);     // ���㵱ǰʱ��
    cout << h << ":" << m << ":" << s << endl;     // �����ǰʱ��
    return 0;
}
