#include <stdio.h>
#pragma warning(disable:4996)

/*��Ŀ��ת�Ʊ�ʹ�ú���ָ������ʵ����������
* ʱ�䣺2020_11_15
* ��ϰ��
*/

/*˼·��
* ʹ�ú���ָ��������ɼ�����
* �򵥵ļӼ��˳��ȵĻ�������
* ʹ��ת�Ʊ�ʹ������
*/

#define NUM 5

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	if (0 == y) {
		printf("div zero!\n");
		return -1;
	}
	return x / y;
}


void Menu()
{
	printf("#############################\n");
	printf("########## 1���ӷ� ##########\n");
	printf("########## 2������ ##########\n");
	printf("########## 3���˷� ##########\n");
	printf("########## 4������ ##########\n");
	printf("########## 0���˳� ##########\n");
	printf("#############################\n");
	printf("��ѡ��# ");
}

int main()
{
	int(*f[NUM])(int, int) = { NULL, Add, Sub, Mul, Div };

	int select = 0;
	int quit = 0;

	while (!quit) {
		Menu();
		scanf("%d", &select);
		if (select == 0) {
			printf("�˳���������\n");
			break;
		}
		if (select < 1 || select > 4) {
			printf("������������³��ԣ�\n");
			continue;
		}
		int x = 0;
		int  y = 0;
		printf("��������������: ");
		scanf("%d %d", &x, &y);
		int res = f[select](x, y);
		printf("result: %d\n", res);

	}
	return 0;
}
