/*
ţ�ͣ���������
��Ŀ����
����:����һ�������������մ�С�����˳����������������������ӣ���180����������Ϊ2 2 3 3 5 ��

��ϸ������
�����ӿ�˵����
public String getResult(long ulDataInput)
���������
long ulDataInput�������������
����ֵ��
String

��������:
����һ��long������

�������:
���մ�С�����˳����������������������ӣ��Կո����

��������:
180

�������:
2 2 3 3 5
*/

//����һ�����
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
	cout << N << ' '<< endl;  //����ⲻ�Ǻܺ�������Ϊ����һ��" "����ʾ��ʽ����:���ĳ�������ĸ�ʽ������Ҫ�󣨱���ո�ͻ�����Ҫ��һ�£�
	return 0;
}


/*
//���������տ�ʼ����ʽ���ԣ���д��һ��string�Ľӿ�
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
		//if (N <= 3)  //�������while��Ҳ���Դ���
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
					str.append(GetStringAns(i)); //��������64577�����(char)('0' + i)�����q
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
			str.append(GetStringAns(N)); //��������64577�����(char)('0' + i)�����q
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
		s.insert(s.begin(), (char)('0' + i % 10));  //insert���÷�
		i /= 10;
	}
	s.insert(s.begin(), (char)('0' + i % 10));

	return s;
}
*/