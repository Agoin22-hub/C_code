#include <stdio.h>

/*题目：调整奇数偶数顺序
* 时间：2020_11_11
* 练习题
*/

/*思路：
* 输入一个整数数组，实现一个函数
* 通过调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分
* 设置两个指针，来进行数字交换
*/

//1 2 3 4 5 6 7 8 
//  |         |  
//1 7 3 4 5 6 2 8
//      | |
//1 7 3 5 4 6 2 8(完成交换)


void Adjest(int arr[], int len)
{
	int* p = arr;
	int* q = arr + len - 1;
	while (p < q) {
		if ((*p) % 2 != 0) {
			p++;
		}
		if ((*q) % 2 == 0) {
			q--;
		}
		if (p < q) {
			int temp = *p;
			*p = *q;
			*q = temp;
		}
		p++;
		q--;
	}

}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Adjest(arr,len);
	for (int i = 0; i < len; i++) {
		printf("%d", arr[i]);
	}
	return 0;
}