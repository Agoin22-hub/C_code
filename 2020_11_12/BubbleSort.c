#include <stdio.h>

/*��Ŀ��ʵ��һ�������������ð������
* ʱ�䣺2020_11_12
* ��ϰ��
*/

/*˼·��
* ����˫��ѭ���������αȽ�
* �����棺����һ���������������һ��ѭ���У�û�г���һ�ν�������˵���Ѿ��ź���
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