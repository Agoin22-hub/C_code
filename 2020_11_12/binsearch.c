#include <stdio.h>

/*题目：采用折半查找法找一个数组中的某一个元素
* 时间：2020_11_12
* 练习
*/

/*思路：采用折半的方法
* 利用数组下标进行访问元素
*  0   1   2   3   4   5   6   7     （数组下标）
*  1,  3,  5,  7,  9, 11, 13, 15
*  |           |              |
* start       mid            end
*  |       |
* start   end
*/

int BinSearch(int arr[], int start, int end, int tag)
{

	while (start <= end) {
		int mid = (start + end) / 2;
		if (arr[mid] > tag) {
			end = mid - 1;
		}
		else if (arr[mid] < tag) {
			start = mid + 1;
		}
		else {
			return mid;
		}
	}
	if (start > end) {
		return -1;
	}
}

int main()
{
	int arr[] = {1, 3, 5, 7, 9, 11, 13, 15 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int tag = 5;
	int start = 0;
	int end = len - 1;
	int mid = 0;
	while (start <= end) {
		mid = (start + end) / 2;
		if (arr[mid] > tag) {
			end = mid - 1;
		}
		else if (arr[mid] < tag) {
			start = mid + 1;
		}
		else{
			break;
		}
	}
	if (start <= end) {
		printf("该数字在数组下标为%d的位置\n", mid);
		
	}
	else {
		printf("该元素不在数组内\n");
	}

	int res = BinSearch(arr, start, end, tag);
	if (res == -1) {
		printf("该元素不在数组内\n");
	}
	else {
		printf("该数字在数组下标为%d的位置\n", res);
	}

	return 0;
}