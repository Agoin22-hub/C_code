#include <stdio.h>
#pragma warning(disable:4996)

/*题目：简单版加法计算器
* 时间：2020_11_15
* 练习一
*/

/*思路：
* 打印一个菜单让用户进行选择
* 用户输入需要计算的两个数字
* 实现 + - * / 这四种计算
* ！！！scanf输入存在问题，目前无法解决！！！
*/
int Menu()
{
	printf("#############################\n");
	printf("########## 1、加法 ##########\n");
	printf("########## 2、减法 ##########\n");
	printf("########## 3、乘法 ##########\n");
	printf("########## 4、除法 ##########\n");
	printf("########## 0、退出 ##########\n");
	printf("#############################\n");

}

int Add(int num1, int num2) {
	return num1 + num2;
}

int Sub(int num1, int num2) {
	return num1 - num2;
}

int Mul(int num1, int num2) {
	return num1 * num2;
}

int Div(int num1, int num2) {
	if (num2 == 0) {
		return -1;
	}
	else {
		return num1 / num2;
	}

}

int main()
{
	int sel = 0;
	int num1 = 0,num2 = 0;
	int res = 0;
	do {
		Menu();
		printf("请输入你的选择#\n");
		
		scanf("%d", &sel);
		if (sel == 0) {
			printf("退出程序\n");
			break;
		}
		printf("输入需要计算的两个数字#\n");
		scanf("%d %d ", &num1, &num2);
		switch (sel) {
		case 1:
			
			res = Add(num1, num2);
			printf("计算结果为：%d\n", res);
			break;
		case 2:
			
			res = Sub(num1, num2);
			printf("计算结果为：%d\n", res);
			break;
		case 3:
			
			res = Mul(num1, num2);
			printf("计算结果为：%d\n", res);
			break;
		case 4:
			
			res = Div(num1, num2);
			if (res == -1) {
				printf("除数不能为0\n");
			}
			else {
				printf("计算结果为：%d\n", res);
			}
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (sel);
	return 0;
}