#include <stdio.h>
#pragma warning(disable:4996)
/*题目：斐波那契数列的实现（递归的形式）
* 2020_11_16
* 练习一
*/

/*思路：采用递归的形式实现对于斐波那契数列的计算
* 1 1 2 3 5 8 13 21 34 ……
* 核心思想：
* int fib_r( int n );
* 出口：
* if( n<=2 )
* return 1;
* 递推：
* fib_(n - 1) + fib_( n -  2);
*/

int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d\n", ret);
	return 0;
}