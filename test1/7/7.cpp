/*
牛客：字符串分隔
题目描述
•连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。

输入描述:
连续输入字符串(输入2次,每个字符串长度小于100)

输出描述:
输出到长度为8的新字符串数组

输入例子:
abc
123456789

输出例子:
abc00000
12345678
90000000
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		if (s.size() == 0)
			continue;
		//向上取整函数ceil(10.5) == 11, floor(10.5) == 10
		for (unsigned int i = 0; i < (s.size() + 7) / 8; i++)  //这里必须向上取整，不能s.size()/8+1，当输入12345678时会多出一行00000000
		{
			for (unsigned int j = 0; j < 8; j++)
			{
				if (i * 8 + j < s.size())
					cout << s[i * 8 + j];
				else
					cout << '0';
			}
			cout << endl;
		}
	}
	return 0;
}