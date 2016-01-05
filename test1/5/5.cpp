/*
牛客： 计算字符个数
题目描述:
写出一个程序，接受一个有字母和数字以及空格组成的字符串，和一个字符，然后输出输入字符串中含有该字符的
个数。不区分大小写。

输入描述:
输入一个有字母和数字以及空格组成的字符串，和一个字符。


输出描述:
输出输入字符串中含有该字符的个数。

输入例子:
ABCDEF
A

输出例子:
1
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	char c;
	getline(cin, s);  //这里又不用while循环
    int count = 0;
    cin >> c;
    if(c >= 'A' && c <= 'Z')
        c += 32;
    for(string::iterator iter = s.begin(); iter != s.end(); iter++)
    {
        if(*iter >= 'A' && *iter <= 'Z')
            *iter += 32;
        if(*iter == c)
            count++;
    }
    cout << count << endl;
	
	return 0;
}