#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

/*项目：完成一个通讯录
* 时间：2020_11_25
* 小项目
*/

/*完成一个通讯录，
* 用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
* 功能：添加、删除、查找、修改、显示、清空、排序
* 需要一个菜单
*/

typedef struct information   //定义一个存放联系人信息的结构体类型
{
	char name[16];
	char sex;
	int age;
	char tel[11];
	char add[32];
}preson;

typedef struct list
{
	struct information preson[1024];//定义一个information类型的数组来存放联系人的信息
	int count;//表示联系人的个数
}list;

void Menus()
{
	printf("**************************************\n");
	printf("************ 1、查找 *****************\n");
	printf("************ 2、添加 *****************\n");
	printf("************ 3、删除 *****************\n");
	printf("************ 4、修改 *****************\n");
	printf("************ 5、显示 *****************\n");
	printf("************ 6、清空 *****************\n");
	printf("************ 7、排序 *****************\n");
	printf("************ 0、退出 *****************\n");
	printf("**************************************\n");
	printf("请输入你的选择#");
}

int Find(list* p)//查找指定联系人的信息
{
	int i = 0;
	char name[1024];
	printf("请输入要查找的联系人的姓名：>");
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

void Found(list* p)//打印查找到的结果
{
	int ret = Find(p);
	if (ret != -1)
	{
		printf("姓名：%s\n", p->preson[ret].name);
		printf("年龄：%d\n", p->preson[ret].age);
		printf("性别：%s\n", p->preson[ret].sex);
		printf("电话：%s\n", p->preson[ret].tel);
		printf("地址：%s\n", p->preson[ret].add);
	}
	else
	{
		printf("对不起，你所查询的联系人不存在\n");
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
			printf("输入错误！！请重新输入");
			break;
		}
	} while (select);


	return 0;
}
