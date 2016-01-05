/*
牛客： 字符串最后一个单词的长度
题目描述
计算字符串最后一个单词的长度，单词以空格隔开。

输入描述:
一行字符串。

输出描述:
整数N，最后一个单词的长度。

输入例子:
hello world
hello worlds

输出例子:
5
6
*/



//方法一:去除前后空格的影响
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string s;
	while(getline(cin, s))  //如果直接用cin,只保留了第一个单词,空格问题
	{
		if(s.size() == 0)
		{
			cout << 0 << endl;
			return 0;
		}
		string::iterator end = s.end() - 1;  //去除后空格的影响
		while(*end == ' ')
		{
			if(end == s.begin())  //全是空格
			{
				cout << 0 << endl;
				return 0;
			}
			end--;
		}
		string::iterator begin = s.begin();  //去除前空格的影响
		while(*begin == ' ')
			begin++;
		string::iterator first = begin;
		for(string::iterator iter = begin; iter != end+1; iter++)
		{
			if((*iter) == ' ')
				first = iter+1;
		}
		cout << end-first+1 << endl;
	}
	
	return 0;
}


/*
//方法二：借助函数
#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
using namespace std;
int main()
{
    string line, cur, pre;
    while(getline(cin, line))  //必须用循环，应对多行
	{
        istringstream lines(line);  //绑定一行字符串，然后以空格为分隔符把该行分隔开来
        while (lines >> cur) 
		{
            pre = cur;  //只记录最后一个
        }
        cout << pre.length() << endl;
    }
    return 0;  
}
*/

//istringstream对象
/*
//istringstream对象可以绑定一行字符串，然后以空格为分隔符把该行分隔开来。
 #include<iostream>
#include<sstream>
using namespace std;
int main()
{
	string str, line;
	while(getline(cin, line))
	{
		istringstream stream(line);
		while(stream>>str)
			cout<<str.c_str()<<endl;
	}	
	return 0;
}
测试：
input：
abc   df   e              efgeg      ffg

ouput：
abc
df
e
efgeg
ffg
*/