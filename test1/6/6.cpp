/*
ţ�ͣ� �����������
��Ŀ����

��������ѧУ����һЩͬѧһ����һ���ʾ���飬Ϊ��ʵ��Ŀ͹��ԣ������ü����������N��1��1000֮����������
��N��100�������������ظ������֣�ֻ����һ������������ͬ����ȥ������ͬ������Ӧ�Ų�ͬ��ѧ����ѧ�š�Ȼ���ٰ�
��Щ����С�������򣬰����źõ�˳��ȥ��ͬѧ�����顣����Э��������ɡ�ȥ�ء��롰���򡱵Ĺ�����

Input Param
n               ����������ĸ���
inputArray      n�����������ɵ�����

Return Value
OutputArray    ����������������

ע������������֤�����������ȷ�ԣ�������������֤��

��������:
������У���������������ĸ�������������Ӧ����������

�������:
���ض��У������Ľ��

��������:
11
10
20
40
32
67
40
20
89
300
400
15

�������:
10
15
20
32
40
67
89
300
400
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int in;
	while (cin >> N)
	{
		vector<int> num;
		for (int i = 0; i < N; i++)
		{
			cin >> in;
			num.push_back(in);
		}
		sort(num.begin(), num.end());
		vector<int>::iterator end = unique(num.begin(), num.end());
		for (vector<int>::iterator iter = num.begin(); iter != end; iter++)
		{
			cout << *iter << endl;
		}
	}
	return 0;
}