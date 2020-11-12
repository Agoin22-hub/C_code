#include <stdio.h>

/*题目：实现一个对整形数组的冒泡排序
* 时间：2020_11_12
* 练习二
*/

/*思路：
* 利用双层循环进行依次比较
* 升级版：加入一个计数器，如果在一次循环中，没有出现一次交换，则说明已经排好了
*/


void BubbleSort(int arr[], int size)
{
	int count = 0;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				count++;
			}
		}
		if (count == 0) {
			break;
		}
	}
}

int main()
{
	int arr[] = { 23,56,65,43,34,45,13 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, size);
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}