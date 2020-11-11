#include <stdio.h>

/*��Ŀ����������ż��˳��
* ʱ�䣺2020_11_11
* ��ϰ��
*/

/*˼·��
* ����һ���������飬ʵ��һ������
* ͨ�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿��
* ��������ָ�룬���������ֽ���
*/

//1 2 3 4 5 6 7 8 
//  |         |  
//1 7 3 4 5 6 2 8
//      | |
//1 7 3 5 4 6 2 8(��ɽ���)


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