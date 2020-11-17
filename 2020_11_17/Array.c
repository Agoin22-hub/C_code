#include <stdio.h>

#define SIZE 6

/*题目：创建一个整形数组，完成对数组的操作
* 时间：2020_11_17
* 练习
*/


/*思路：
* 要求：自己设计以上函数的参数，返回值
* 1.实现函数init() 初始化数组为全0
* 2.实现print()  打印数组的每个元素
* 3.实现reverse()  函数完成数组元素的逆置
*/


void Init(int arr[])
{
	for (int i = 0; i < SIZE; i++) {
		arr[i] = 0;
	}
}

void Print(int arr[])
{
	for (int i = 0; i < SIZE; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

void Reverse(int arr[])
{
	for (int i = 0; i < SIZE / 2; i++) {
		int temp = arr[i];
		arr[i] = arr[SIZE - 1 - i];
		arr[SIZE - 1 - i] = temp;
	}
}

int main()
{
	int arr[SIZE];
	Init(arr);
	Print(arr);
	Reverse(arr);
	Print(arr);
	return 0;

}