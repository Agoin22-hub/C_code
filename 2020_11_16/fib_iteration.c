#include <stdio.h>
#pragma warning(disable:4996)

/*题目：求解斐波那契数列（迭代实现）
* 时间：2020_11_16
* 练习
*/

/*思路：迭代实现斐波那契数列
* 1 1 2 3 5 8 13 21 34 ……
* 核心思想：
* f(1) = f(2) = 1;
* f(n) = f(n-1) + f(n-2);
*/

int fib(int n)
{
	int fn1 = 1;
	int fn2 = 1;
	int fn;
	while (n > 2)
	{
		n = n - 1;
		fn = fn1 + fn2;
		fn1 = fn2;
		fn2 = fn;
	}
	return fn2;
}
int main()
{
	int n = 0;
	int ret = 0;
	int count = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d\n", ret);
	return 0;
}