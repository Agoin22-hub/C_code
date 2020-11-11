#include <stdio.h>

/*题目：编写一个函数 reverse_string(char* string)（递归实现）
* 时间：2020_11_11
* 练习
*/

/*思路：
* 将参数字符串中的字符反向排列
* 不能使用C函数库中的字符串操作函数
*/


void StrReversed(char* string)
{
	int fid = 0;
	for (int i = 0; i < 100; i++) {
		if (string[i] == '\0') {
			break;
		}
		string += i;
	}
	for (; string >= 0; string--) {
		printf("%d\t", string);
	}
}

int main() 
{
	char* p = "abcdef";
	StrReversed(p);
	return 0;
}
