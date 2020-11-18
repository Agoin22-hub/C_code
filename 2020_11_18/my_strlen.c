#include <stdio.h>
#include <windows.h>

/*题目：模拟实现库函数 -- strlen
* 时间：2020_11_18
* 练习
*/

/*思路：
* srelen函数在头文件<string.h>中，它计算字符串的长度（不包括'\0'）
* int MyStrlen(const char *str)
* 3种方法
* 1、设置指针
* 2、计数器
* 3、递归实现
*/


//方法一:设置一个指针，让它向后寻找，直到遇见'\0'停止
//主要利用指针寻找，结果为该元素地址-首元素地址
//（char类型大小为1）

//int MyStrlen(char *str)
//{
//	char* p = str;
//	while (*p != '\0') {
//		p++;
//	}
//	return p - str;
//}
//
//int main()
//{
//	char* str = "abcdefg";
//	printf("该字符串的长度为：%d\n", MyStrlen(str));
//	return 0;
//}



//方法二：设置一个计数器，指针向下一次加一
int MyStrlen(const char* str)
{
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}

int main()
{
	char *str = "abcdefg";
	printf("该数组长度为：%d", MyStrlen(str);
}



//方法三：采用递归实现
//int MyStrlen(const char* str)
//{
//	if (*str == '\0') {
//		return 0;
//	}
//	else {
//		return 1 + MyStrlen(str + 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = MyStrlen(arr);
//	printf("数组的长度为：%d", len);
//	return 0;
//}



