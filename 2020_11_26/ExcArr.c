#include <stdio.h>

/*��Ŀ�����齻��
* ʱ�䣺2020_11_26
* ��ϰ
*/

/*˼·��
* ������A�е����ݺ�����B�е����ݽ��н�����
* ������һ����
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
