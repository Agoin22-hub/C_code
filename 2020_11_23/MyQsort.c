#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/*��Ŀ��ģ��ʵ�ֿ⺯����ϰ�� -- qsort
* ʱ�䣺2020_11_23
* ģ��ʵ�ֿ⺯��
*/

/*˼·��
* qsort������������������
* ��Ҫ��Ϊ����
* �Ƚ� ���� ��ӡ
* �ֱ���ú����������ͣ�
*/

int CompInt(const void* _xp, const void* _yp)
{
	int* xp = (int*)_xp;
	int* yp = (int*)_yp;

	if (*xp > * yp) {
		return 1;
	}
	else if (*xp < *yp) {
		return -1;
	}
	else {
		return 0;
	}
}

void Print(int* arr, int num)
{
	for (int i = 0; i < num; i++) {
		printf("%s ", arr[i]);
	}
	printf("\n");
}

int CompStr(const void* _xp, const void* _yp)
{
	char* s1 = *(char**)_xp;
	char* s2 = *(char**)_yp;

	return strcmp(s1, s2); // 1 0 -1
}

void swap(char* src, char* dst, int size)
{
	while (size) {
		char temp = *src;
		*src = *dst;
		*dst = temp;
		size--;
		src++, dst++;
	}
}

void MyQsort(void* arr, int num, int size, int(*comp)(const void*, const void*))
{
	assert(arr != NULL);
	assert(comp != NULL);

	char* e = (char*)arr;

	for (int i = 0; i < num - 1; i++) {
		int flag = 0;
		for (int j = 0; j < num - 1 - i; j++) {
			if (comp(e + j * size, e + (j + 1) * size) > 0) {
				flag = 1;
				swap(e + j * size, e + (j + 1) * size, size);
			}
		}

		if (flag == 0) {
			break;
		}
	}
}

int main()
{
	char *arr[] = { "b1234", "A1234", "4321", "abcdef" };
	int num = sizeof(arr) / sizeof(arr[0]);
	/*int arr[] = { 24, 345, 13, 45, 5, 23, 35, 856, 234, 21, 3, 45, 34, 234, 1, 4, 6 };
	int num = sizeof(arr) / sizeof(arr[0]);*/

	Print(arr, num);
	MyQsort(arr, num, sizeof(int), CompInt);
	Print(arr, num);

	return 0;
}
