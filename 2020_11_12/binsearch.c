#include <stdio.h>

/*��Ŀ�������۰���ҷ���һ�������е�ĳһ��Ԫ��
* ʱ�䣺2020_11_12
* ��ϰ
*/

/*˼·�������۰�ķ���
* ���������±���з���Ԫ��
*  0   1   2   3   4   5   6   7     �������±꣩
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
		printf("�������������±�Ϊ%d��λ��\n", mid);
		
	}
	else {
		printf("��Ԫ�ز���������\n");
	}

	int res = BinSearch(arr, start, end, tag);
	if (res == -1) {
		printf("��Ԫ�ز���������\n");
	}
	else {
		printf("�������������±�Ϊ%d��λ��\n", res);
	}

	return 0;
}