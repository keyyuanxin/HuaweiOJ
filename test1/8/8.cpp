/*
ţ�ͣ�����ת��
��Ŀ����
д��һ�����򣬽���һ��ʮ�����Ƶ���ֵ�ַ������������ֵ��ʮ�����ַ�����

��������:
����һ��ʮ�����Ƶ���ֵ�ַ�����

�������:
�������ֵ��ʮ�����ַ�����

��������:
0xA

�������:
10
*/

#include <iostream>
#include <string>
#include <stack>
#include <math.h>
using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		stack<char> temp;
		for (string::iterator iter = s.begin() + 2; iter != s.end(); iter++)
		{
			temp.push((*iter));
		}
		int ans = 0;
		char ch;
		int size = temp.size();
		for (int i = 0; i < size; i++)
		{
			ch = temp.top();
			if(!temp.empty())
				temp.pop();
			if (ch >= 'A' && ch <= 'F')
			{
				ans += (ch - 'A' + 10) * pow(16, i);  //�������ѧ��16 ^ i����Ц��
			}
			else
			{
				ans += (ch - '0') * pow(16, i);
			}
		}
		cout << ans << endl;
	}
	return 0;
}