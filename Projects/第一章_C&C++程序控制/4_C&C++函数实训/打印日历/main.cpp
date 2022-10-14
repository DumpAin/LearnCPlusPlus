// ��������I/O�⣬����ʹ����һ�����������ʽ
#include <stdio.h>
#include <iostream>
using namespace std;

// ����printMonth����Ҫ��ĸ�ʽ��ӡĳ��ĳ�µ�����
// ������year-�꣬month-��
// ����ֵ����
//void printMonth(int year, int month);

// leapYear���ж�����
// ������y-��
// ����ֵ��1-�����꣬0-��������
int leapYear(int y)
{
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 1;
    return 0;
}

// ����whatDay:����ĳ��ĳ�µ�1�������ڼ�
// ������year-�꣬month-��
// ����ֵ��1��7--����1��������
int whatDay(int year, int month)
{
    // 1������������һ
    int w = 1;
    int i;

    // 1��year-1����ȫ��
    for(i = 1; i < year; i++)
    {
        if(leapYear(i))
            w += 366;
        else
            w += 365;
    }
    switch(month)
    {
    case 12: // ���µ�
        w += 30;
    case 11: // ���µ�
        w += 31;
    case 10: // ���µ�
        w += 30;
    case 9:  // ���µ�
        w += 31;
    case 8:  // ���µ�
        w += 31;
    case 7:  // ���µ�
        w += 30;
    case 6:  // ���µ�
        w += 31;
    case 5:  // ���µ�
        w += 30;
    case 4:  // ���µ�
        w += 31;
    case 3:  // ���µ�
        if(leapYear(year))
            w += 29;
        else
            w += 28;
    case 2:  // ���µ���
        w += 31;
    case 1:  // 1�²�����
        ;
    }

    // �õ�-6������Ϊ������
    w = w % 7;

    // ����������
    if(w == 0)
        w = 7;
    return w;
}

int DayOfMonth(int year, int month)
{
	int Val_DayOfMonth = 0;
    switch(month)
    {
    case 12:
        Val_DayOfMonth = 31;
        break;
    case 11:
        Val_DayOfMonth = 30;
        break;
    case 10:
        Val_DayOfMonth = 31;
        break;
    case 9:
        Val_DayOfMonth = 30;
        break;
    case 8:
        Val_DayOfMonth = 31;
        break;
    case 7:
        Val_DayOfMonth = 31;
        break;
    case 6:
        Val_DayOfMonth = 30;
        break;
    case 5:
        Val_DayOfMonth = 31;
        break;
    case 4:
        Val_DayOfMonth = 30;
        break;
    case 3:
		Val_DayOfMonth = 31;
		break;
    case 2:
    	if(leapYear(year))
		    Val_DayOfMonth = 29;
		else
			Val_DayOfMonth = 28;
			
			break;
    case 1:
        Val_DayOfMonth = 31;
        break;
    }
	//cout << "Val_DayOfMonth" << Val_DayOfMonth << endl;
    return Val_DayOfMonth;
}

// �������油����룬ʵ�ֺ���printMonth
/*************** Begin **************/
int printMonth(int year, int month)
{
	//cout << "1��������" << whatDay(year, month) << endl;

	int KongBefore1 = 0, RealKongBefore1 = 0;
	KongBefore1 = (whatDay(year, month) - 1) * 4 + 3;
	RealKongBefore1 = (whatDay(year, month) - 1) * 4 + 3 - 4;
	
	//cout << "��������" << KongBefore1 << "���ո�" << endl;
	
	cout << "  һ  ��  ��  ��  ��  ��  ��\n";
	for (int kongGe = 0; kongGe <= RealKongBefore1; kongGe++)
		cout << " ";
	/*
	do
	{
		cout << " ";
	    kongGe += 1;
	    //cout << "�ո�" << kongGe;
	}while(kongGe <= KongBefore1);
	*/
	
	for (int Day = 1; Day <= DayOfMonth(year, month); Day++)
		if (Day <= 9)
		{
	    	cout << "   " << Day;
	        if ((Day + whatDay(year, month) - 1) % 7 == 0)
	        {
	            cout << '\n';
	        }
	    }
		else
		{
		    cout << "  " << Day;
		    if ((Day + whatDay(year, month) - 1) % 7 == 0)
		    {
		        cout << '\n';
		    }
		}
	//cout << "����" << DayOfMonth(year, month) << endl;
	return 0;
}

/*************** End **************/

int main()
{
    // �ꡢ��
    int y, m;

    // ��������
    cin >> y >> m;

    // ��������µ�����
    printMonth(y,m);

    return 0;
}
