/*
牛客：求最小公倍数
题目描述
正整数A和正整数B 的最小公倍数是指 能被A和B整除的最小的正整数值，设计一个算法，求输入A和B的最小公倍数。

输入描述:
输入两个正整数A和B。

输出描述:
输出A和B的最小公倍数。

输入例子:
5
7

输出例子:
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
