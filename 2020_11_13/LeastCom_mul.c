#include <stdio.h>
#pragma warning(disable:4996)

/*��Ŀ��������������С������
* ʱ�䣺2020_11_13
* ��ϰ��
*/

/*˼·��
* ������������a��b
* ��С�������൱��a * b ����һ�����Լ��
* 1��������Լ��c(��շת�����Ϊ��)
* 2�� a * b / c
*/

int main()
{
	int num1 = 0, num2 = 0;
	printf("����������Ҫ�����������:");
	scanf("%d %d", &num1, &num2);
	int m = num1, n = num2;
	int res = 0;
	while (n != 0)
	{
		int temp = m % n;
		m = n;
		n = temp;
	}
	res = num1 * num2 / m;
	printf("������������С������Ϊ%d\n", res);
	return 0;
}