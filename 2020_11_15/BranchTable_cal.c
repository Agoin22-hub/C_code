#include <stdio.h>
#pragma warning(disable:4996)

/*题目：转移表（使用函数指针数组实现运算器）
* 时间：2020_11_15
* 练习二
*/

/*思路：
* 使用函数指针数组完成计算器
* 简单的加减乘除等的基本运算
* 使用转移表使代码简洁
*/

#define NUM 5

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	if (0 == y) {
		printf("div zero!\n");
		return -1;
	}
	return x / y;
}


void Menu()
{
	printf("#############################\n");
	printf("########## 1、加法 ##########\n");
	printf("########## 2、减法 ##########\n");
	printf("########## 3、乘法 ##########\n");
	printf("########## 4、除法 ##########\n");
	printf("########## 0、退出 ##########\n");
	printf("#############################\n");
	printf("请选择# ");
}

int main()
{
	int(*f[NUM])(int, int) = { NULL, Add, Sub, Mul, Div };

	int select = 0;
	int quit = 0;

	while (!quit) {
		Menu();
		scanf("%d", &select);
		if (select == 0) {
			printf("退出计算器！\n");
			break;
		}
		if (select < 1 || select > 4) {
			printf("输入错误，请重新尝试！\n");
			continue;
		}
		int x = 0;
		int  y = 0;
		printf("请输入两个数据: ");
		scanf("%d %d", &x, &y);
		int res = f[select](x, y);
		printf("result: %d\n", res);

	}
	return 0;
}
