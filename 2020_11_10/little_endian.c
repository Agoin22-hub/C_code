#include <stdio.h>
/*题目：设计一个小程序来判断当前机器的字节序（大小端）
*时间：2020_11_10
*练习五
*/

/*小端是指数据的低权值位放在低地址中，叫做小端存储模式（小小小）
* 产生原因：由于没有统一的规范，所以出现了大端存储模式和小端存储模式
* 判断本编译器属于什么存储模式（小端）
*/

int CheckSys1()
{
	int i = 1;
	return (*(char*)&i);//利用指针将i的地址强转为字符指针
	//即只看最低地址中存放的是 00 还是 01，便能够判断存储的方式
}

int CheckSys2()
{
	//采用联合体
	union {
		int i;
		char c;//所占地址值最小
	}un;
	un.i = 1;
	return un.c;
}
int main()
{
	int res = CheckSys2();
	if (res == 1) {
		printf("是小端！\n");
	}
	else {
		printf("是大端！\n");
	}
	return 0;
}