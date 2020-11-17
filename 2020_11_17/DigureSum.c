#include <stdio.h>

/*题目：递归求各个数字之和
* 时间：2020_11_17
* 练习
*/

/*写一个递归函数DigitSum(n)
* 输入一个非负整数，返回组成它的数字之和
* 例如，调用DigitSum(1729)，
* 则应该返回1 + 7 + 2 + 9，它的和是19
* 输入：1729，输出：19
*/

int DigureSum(int num)
{
	if (num / 10 < 1) {
		return num;
	}
	else {
		return (num % 10) + DigureSum(num / 10);
	}
}

int main()
{
	int num = 172;
	int res = DigureSum(num);
	printf("输出：%d", res);
	return 0;
}
