/*
word:样题-初级题：从考试成绩中划出及格线 
10个学生考完期末考试评卷完成后，A老师需要划出及格线，要求如下：
(1) 及格线是10的倍数；
(2) 保证至少有60%的学生及格；
(3) 如果所有的学生都高于60分，则及格线为60分
*/

#include <iostream>

using namespace std;

int main()
{
	int temp[11] ={0};
	int a;
	int count = 0;
	for(int i = 0; i < 10; i++)
	{
		cin >> a;
		if(a >= 60)
			count++;
		if(count == 10)
		{
			cout << 60 << endl;
			return 0;
		}
		temp[a/10]++;
	}
	int sum = 0;
	for(int j = 10; j >= 0; j--)
	{
		sum += temp[j];
		if(sum >= 6)
		{
			cout << j*10 << endl;
			return 0;
		}
	}
	return 0;
}