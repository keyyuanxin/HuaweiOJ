/*
ţ�ͣ�����С������
��Ŀ����
������A��������B ����С��������ָ �ܱ�A��B��������С��������ֵ�����һ���㷨��������A��B����С��������

��������:
��������������A��B��

�������:
���A��B����С��������

��������:
5
7

�������:
35
*/


#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;
	cin >> a >> b;
	if (a % b == 0)
	{
		cout << a << endl;
		return 0;
	}
	if (b % a == 0)
	{
		cout << b << endl;
		return 0;
	}
	int i = (a < b) ? a : b;
	for (; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << a*b / i << endl;
			return 0;
		}
	}
	return 0;
}
