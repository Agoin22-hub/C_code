#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

/*��Ŀ�����һ��ͨѶ¼
* ʱ�䣺2020_11_25
* С��Ŀ
*/

/*���һ��ͨѶ¼��
* �����洢1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
* ���ܣ���ӡ�ɾ�������ҡ��޸ġ���ʾ����ա�����
* ��Ҫһ���˵�
*/

typedef struct information   //����һ�������ϵ����Ϣ�Ľṹ������
{
	char name[16];
	char sex;
	int age;
	char tel[11];
	char add[32];
}preson;

typedef struct list
{
	struct information preson[1024];//����һ��information���͵������������ϵ�˵���Ϣ
	int count;//��ʾ��ϵ�˵ĸ���
}list;

void Menus()
{
	printf("**************************************\n");
	printf("************ 1������ *****************\n");
	printf("************ 2����� *****************\n");
	printf("************ 3��ɾ�� *****************\n");
	printf("************ 4���޸� *****************\n");
	printf("************ 5����ʾ *****************\n");
	printf("************ 6����� *****************\n");
	printf("************ 7������ *****************\n");
	printf("************ 0���˳� *****************\n");
	printf("**************************************\n");
	printf("���������ѡ��#");
}

int Find(list* p)//����ָ����ϵ�˵���Ϣ
{
	int i = 0;
	char name[1024];
	printf("������Ҫ���ҵ���ϵ�˵�������>");
	scanf("%s", name);
	for (i = 0; i < p->count; i++)
	{
		if (strcmp(name, p->preson[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void Found(list* p)//��ӡ���ҵ��Ľ��
{
	int ret = Find(p);
	if (ret != -1)
	{
		printf("������%s\n", p->preson[ret].name);
		printf("���䣺%d\n", p->preson[ret].age);
		printf("�Ա�%s\n", p->preson[ret].sex);
		printf("�绰��%s\n", p->preson[ret].tel);
		printf("��ַ��%s\n", p->preson[ret].add);
	}
	else
	{
		printf("�Բ���������ѯ����ϵ�˲�����\n");
	}
}

int main()
{
	int select = 0;
	Menus();
	do {
		scanf("%d", &select);
		switch (select) {
		case 1:
			Found();
			break;
		case 2:
			Add();
			break;
		case 3:
			Del();
			break;
		case 4:
			Modify();
			break;
		case 5:
			Show();
			break;
		case 6:
			Empty();
			break;
		case 7:
			Sort();
			break;
		case 0:
			break;
		default:
			printf("������󣡣�����������");
			break;
		}
	} while (select);


	return 0;
}
