/*
ţ�ͣ� �����ַ�����
��Ŀ����:
д��һ�����򣬽���һ������ĸ�������Լ��ո���ɵ��ַ�������һ���ַ���Ȼ����������ַ����к��и��ַ���
�����������ִ�Сд��

��������:
����һ������ĸ�������Լ��ո���ɵ��ַ�������һ���ַ���


�������:
��������ַ����к��и��ַ��ĸ�����

��������:
ABCDEF
A

�������:
1
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	char c;
	getline(cin, s);  //�����ֲ���whileѭ��
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