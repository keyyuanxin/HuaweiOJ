/*
word:����-�����⣺�ӿ��Գɼ��л��������� 
10��ѧ��������ĩ����������ɺ�A��ʦ��Ҫ���������ߣ�Ҫ�����£�
(1) ��������10�ı�����
(2) ��֤������60%��ѧ������
(3) ������е�ѧ��������60�֣��򼰸���Ϊ60��
*/

#include <iostream>

using namespace std;

int main()
{
	int temp[11] ={0};
	int a;
	int count = 0;
	for(int i = 0; i < 10; i++)
	{
		cin >> a;
		if(a >= 60)
			count++;
		if(count == 10)
		{
			cout << 60 << endl;
			return 0;
		}
		temp[a/10]++;
	}
	int sum = 0;
	for(int j = 10; j >= 0; j--)
	{
		sum += temp[j];
		if(sum >= 6)
		{
			cout << j*10 << endl;
			return 0;
		}
	}
	return 0;
}