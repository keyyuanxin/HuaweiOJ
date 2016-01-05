/*
牛客：进制转换
题目描述
写出一个程序，接受一个十六进制的数值字符串，输出该数值的十进制字符串。

输入描述:
输入一个十六进制的数值字符串。

输出描述:
输出该数值的十进制字符串。

输入例子:
0xA

输出例子:
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
				ans += (ch - 'A' + 10) * pow(16, i);  //这个是数学表达：16 ^ i，搞笑了
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