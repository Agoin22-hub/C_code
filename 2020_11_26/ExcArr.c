#include <stdio.h>

/*题目：数组交换
* 时间：2020_11_26
* 练习
*/

/*思路：
* 将数组A中的内容和数组B中的内容进行交换。
* （数组一样大）
*/


int main()
{
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {6,7,8,9,10 };
	for (int i = 0; i < 5; i++) {
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	printf("arr1:");
	for (int i = 0; i < 5; i++) {
		printf("\t%d", arr1[i]);
	}
	printf("\n");/
	printf("arr2:");
	for (int i = 0; i < 5; i++) {
		printf("\t%d", arr2[i]);
	}
	printf("\n");

	return 0;
}
