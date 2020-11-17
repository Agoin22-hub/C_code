#include <stdio.h>

#define SIZE 6

/*��Ŀ������һ���������飬��ɶ�����Ĳ���
* ʱ�䣺2020_11_17
* ��ϰ
*/


/*˼·��
* Ҫ���Լ�������Ϻ����Ĳ���������ֵ
* 1.ʵ�ֺ���init() ��ʼ������Ϊȫ0
* 2.ʵ��print()  ��ӡ�����ÿ��Ԫ��
* 3.ʵ��reverse()  �����������Ԫ�ص�����
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