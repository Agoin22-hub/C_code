#include <stdio.h>
#pragma warning(disable:4996)

/*��Ŀ���򵥰�ӷ�������
* ʱ�䣺2020_11_15
* ��ϰһ
*/

/*˼·��
* ��ӡһ���˵����û�����ѡ��
* �û�������Ҫ�������������
* ʵ�� + - * / �����ּ���
* ������scanf����������⣬Ŀǰ�޷����������
*/
int Menu()
{
	printf("#############################\n");
	printf("########## 1���ӷ� ##########\n");
	printf("########## 2������ ##########\n");
	printf("########## 3���˷� ##########\n");
	printf("########## 4������ ##########\n");
	printf("########## 0���˳� ##########\n");
	printf("#############################\n");

}

int Add(int num1, int num2) {
	return num1 + num2;
}

int Sub(int num1, int num2) {
	return num1 - num2;
}

int Mul(int num1, int num2) {
	return num1 * num2;
}

int Div(int num1, int num2) {
	if (num2 == 0) {
		return -1;
	}
	else {
		return num1 / num2;
	}

}

int main()
{
	int sel = 0;
	int num1 = 0,num2 = 0;
	int res = 0;
	do {
		Menu();
		printf("���������ѡ��#\n");
		
		scanf("%d", &sel);
		if (sel == 0) {
			printf("�˳�����\n");
			break;
		}
		printf("������Ҫ�������������#\n");
		scanf("%d %d ", &num1, &num2);
		switch (sel) {
		case 1:
			
			res = Add(num1, num2);
			printf("������Ϊ��%d\n", res);
			break;
		case 2:
			
			res = Sub(num1, num2);
			printf("������Ϊ��%d\n", res);
			break;
		case 3:
			
			res = Mul(num1, num2);
			printf("������Ϊ��%d\n", res);
			break;
		case 4:
			
			res = Div(num1, num2);
			if (res == -1) {
				printf("��������Ϊ0\n");
			}
			else {
				printf("������Ϊ��%d\n", res);
			}
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (sel);
	return 0;
}