#include <stdio.h>
#include <windows.h>
/*题目：模拟实现库函数strlen
* 时间：2020_11_10
* 练习四
*/

/*思路：
* srelen函数在头文件<string.h>中，它计算字符串的长度（不包括'\0'）
* 3种方法
* 1、设置指针
* 2、计数器
* 3、递归实现
*/


//方法一:设置一个指针，让它向后寻找，直到遇见'\0'停止
/*主要利用指针寻找，结果为该元素地址-首元素地址（char类型大小为1）*/
//int main()
//{
//	char arr[] = "abcdefg123";
//	int len = 0;
//	char* p = arr;
//	while (*p != '\0') {
//		p++;
//	}
//	len = p - &arr;
//	printf("该数组长度为：%d", len);
//
//}

//方法二：设置一个计数器，寻找一个加一一次
//int main()
//{
//	int count = 0;
//	char arr[] = "abcdefg123";
//	for (; arr[count] != '\0'; count++) {
//	}
//	printf("该数组长度为：%d", count);
//}

//方法三：采用递归实现
int MyStrlen(char* str)
{
	if (*str == '\0') {
		return 0;
	}
	else {
		return 1 + MyStrlen(str + 1);
	}
}
int main()
{
	char arr[] = "abcdefg123";
	int len = MyStrlen(arr);
	printf("数组的长度为：%d", len);
	return 0;
}



