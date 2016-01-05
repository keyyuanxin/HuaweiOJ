/*
牛客：质数因子
题目描述
功能:输入一个正整数，按照从小到大的顺序输出它的所有质数的因子（如180的质数因子为2 2 3 3 5 ）

详细描述：
函数接口说明：
public String getResult(long ulDataInput)
输入参数：
long ulDataInput：输入的正整数
返回值：
String

输入描述:
输入一个long型整数

输出描述:
按照从小到大的顺序输出它的所有质数的因子，以空格隔开

输入例子:
180

输出例子:
2 2 3 3 5
*/

//方法一：简洁
#include <iostream>
#include <string>
using namespace std;

int main()
{
	long N;
	cin >> N;
	long i = 2;
	while (i <= N / 2)
	{
		if (N % i == 0)
		{
			cout << i << ' ';
			N /= i;
			i = 2;
		}
		else
			i++;
	}
	cout << N << ' '<< endl;  //这道题不是很合理，就因为少了一个" "，提示格式错误:您的程序输出的格式不符合要求（比如空格和换行与要求不一致）
	return 0;
}


/*
//方法二：刚开始被格式不对，误导写了一个string的接口
#include <iostream>
#include <string>
using namespace std;

string GetStringAns(long i);

int main()
{
	long N;	
	//while (cin >> N)
	//{
	cin >> N;
		//if (N <= 3)  //在下面的while中也可以处理
		//	cout << (char)N << endl;

		long i = 2;
		string str;
		while (i <= N / 2)
		{
			if (N % i == 0)
			{
				if (i < 10)
				{
					str.insert(str.end(), (char)('0' + i));
					str.insert(str.end(), ' ');
				}
				else
				{
					str.append(GetStringAns(i)); //特殊例子64577，如果(char)('0' + i)则输出q
					str.insert(str.end(), ' ');
				}					  
				N /= i;				
				i = 2;
			}
			else
				i++;
		}
		if (i < 10)
		{
			str.insert(str.end(), (char)('0' + N));
		}
		else
		{
			str.append(GetStringAns(N)); //特殊例子64577，如果(char)('0' + i)则输出q
		}
		cout << str << ' ' << endl;
	//}
	return 0;
}

string GetStringAns(long i)
{
	string s;
	while (i / 10 > 0)
	{
		s.insert(s.begin(), (char)('0' + i % 10));  //insert的用法
		i /= 10;
	}
	s.insert(s.begin(), (char)('0' + i % 10));

	return s;
}
*/