#include <stdio.h>
#pragma warning(disable:4996)

/*题目：求两个数的最大公约数
* 2020_11_13
* 练习一
*/

/*思路：
* 求两个数的最大公约数指两个或多个整数共有约数中最大的一个
* 1、也就是找到共同能被同一个数整除的最大的数
* 2、辗转相除法
*/

int main()
{
	int num1 = 0, num2 = 0;
	printf("请输入你想要计算的两个数:");
	scanf("%d %d", &num1, &num2);
	
	//方法一（穷举法）
	//先要看看谁更小，从这个数开始向下进行依次比较
	int i = 0;
	if (num1 > num2) {          //将较小的一个数放在num1之中
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	for (i = num1; i > 0; i--) {
		if ((num1 % i == 0) && (num2 % i == 0)) {
			break;
		}
	}
	printf("这两个数的最大公约数为%d\n", i);


	//方法二（辗转相除法）
	//假设两数为 x，y
	//先令 z = x % y;
	//之后 y 赋给 x 即令  x = y;
	//再将 z 赋给 y 即令  y = z；
	//辗转相减，其终止条件为：y 等于0时
	int m = num1, n = num2;
	while (n != 0)
	{
		int temp = m % n;
		m = n;
		n = temp;
	}

	printf("这两个数的最大公约数为%d\n", m);
	return 0;
}