#include <stdio.h>
#pragma warning(disable:4996)

/*题目：求两个数的最小公倍数
* 时间：2020_11_13
* 练习二
*/

/*思路：
* 假设两个数字a和b
* 最小公倍数相当于a * b 多了一个最大公约数
* 1、求出最大公约数c(以辗转相除法为例)
* 2、 a * b / c
*/

int main()
{
	int num1 = 0, num2 = 0;
	printf("请输入你想要计算的两个数:");
	scanf("%d %d", &num1, &num2);
	int m = num1, n = num2;
	int res = 0;
	while (n != 0)
	{
		int temp = m % n;
		m = n;
		n = temp;
	}
	res = num1 * num2 / m;
	printf("这两个数的最小公倍数为%d\n", res);
	return 0;
}