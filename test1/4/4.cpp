/*
ţ�ͣ� �ַ������һ�����ʵĳ���
��Ŀ����
�����ַ������һ�����ʵĳ��ȣ������Կո������

��������:
һ���ַ�����

�������:
����N�����һ�����ʵĳ��ȡ�

��������:
hello world
hello worlds

�������:
5
6
*/



//����һ:ȥ��ǰ��ո��Ӱ��
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string s;
	while(getline(cin, s))  //���ֱ����cin,ֻ�����˵�һ������,�ո�����
	{
		if(s.size() == 0)
		{
			cout << 0 << endl;
			return 0;
		}
		string::iterator end = s.end() - 1;  //ȥ����ո��Ӱ��
		while(*end == ' ')
		{
			if(end == s.begin())  //ȫ�ǿո�
			{
				cout << 0 << endl;
				return 0;
			}
			end--;
		}
		string::iterator begin = s.begin();  //ȥ��ǰ�ո��Ӱ��
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
//����������������
#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
using namespace std;
int main()
{
    string line, cur, pre;
    while(getline(cin, line))  //������ѭ����Ӧ�Զ���
	{
        istringstream lines(line);  //��һ���ַ�����Ȼ���Կո�Ϊ�ָ����Ѹ��зָ�����
        while (lines >> cur) 
		{
            pre = cur;  //ֻ��¼���һ��
        }
        cout << pre.length() << endl;
    }
    return 0;  
}
*/

//istringstream����
/*
//istringstream������԰�һ���ַ�����Ȼ���Կո�Ϊ�ָ����Ѹ��зָ�������
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
���ԣ�
input��
abc   df   e              efgeg      ffg

ouput��
abc
df
e
efgeg
ffg
*/