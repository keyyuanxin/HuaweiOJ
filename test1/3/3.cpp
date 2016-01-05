/*
牛客： 求解立方根
题目描述
•计算一个数字的立方根，不使用库函数
详细描述：
•接口说明
原型：
public static double getCubeRoot(double input)
输入:double 待求解参数
返回值:double  输入参数的立方根

输入描述:
待求解参数 double类型

输出描述:
输入参数的立方根 也是double类型

输入例子:
216

输出例子:
6.0
*/

/*
//http://www.cnblogs.com/javathread/archive/2011/12/26/2634731.html
	已知利用牛顿迭代法求方程求f(x) = x^3 = a的解,即求解f(x) = x^3-a = 0【公式一】的解。根据牛顿迭代法的公式
	求解f(x0) + f'(x0)(x-x0) = 0【公式二】;  因此 (x0^3-a) + 3(x0^2)(x-x0) = 0,
	x[n]为第n次利用此公式求得值,	假如函数F(X) = X*X*X + a, 则根据牛顿迭代法第n+1次求方程F（x）=0的解为X[n+1]，
且由【公式一和公式二】得到：(X[n]*X[n]*X[n]-a) +　(3*X[n]*X[n])*(X[n+1]-X[n]) = 0， 化简得到： X[n+1] = X[n] - (X[n]*X[n]*X[n]-a) / (3*X[n]*X[n])。
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a;
	double precision = 0.00001;
	cin >> a;
	if(a==0 || a==1)
	{
		cout << a << endl;
		return 0;
	}
	double current = a;
	double next;
	while(current > 1)
	{
		next = (2*current + a/(current*current)) / 3;
		if((next*next*next - a < precision) && (next*next*next - a > -precision))
			break;
		else
			current = next;
	}
	cout << setprecision(2) << next << endl;

	return 0;
}

/*
typedef enum Boolean{FALSE, TRUE}Boolean;

int main()
{
	double stuff;
	cin >> stuff;
	const double  precision = 0.00001; // 精度 
    double nextX, currentX;
    double squareX;     // 当前值 的平方 
    double cubeX;       // 下个解 的立方 
    Boolean flag;
     
    currentX = stuff;  // 初始化当前的值为X
     
    if (stuff == 0)
    {
        return stuff;
    }
    else
    {
        do
        {
            squareX = currentX * currentX;
            nextX = (2*currentX + stuff/squareX) / 3;       // 牛顿迭代公式
            cubeX = nextX*nextX*nextX;
            if ( (cubeX - stuff < precision) && (cubeX - stuff > -precision))
            {
                flag = TRUE;
            }  
            else
            {
                flag = FALSE;
                currentX = nextX;
            }
        }while(flag == FALSE);
    }
	cout << setprecision(2) << nextX << endl;
     
    return nextX;
}
*/

/*
int main()
{
	double a;
	cin >> a;
	if(a == 1)
	{
		cout << a << endl;
		return 0;
	}
	double left = 1, right = (a+1)/2;
	double mid = (left + right) / 2;
	while(left <= right)
	{
		mid = (left + right) / 2;
		if(mid*mid*mid == a)
		{
			cout << mid << endl;
			return 0;
		}
		else if(mid*mid*mid > a)
			right = mid;
		//else if(mid*mid*mid < a)
		else 
			left = mid;
	}

	return 0;
}
*/