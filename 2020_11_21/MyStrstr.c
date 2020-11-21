#include <stdio.h>
#include <assert.h>

/*题目：模拟实现库函数练习四 -- strstr
* 时间：2020_11_21
* 模拟实现库函数
*/

/*思路：
* 库函数strstr 在库函数中，包含于头文件<string.h>中
* 是字串查找函数
* 找到字串并打印后续的内容,若没有找到则返回空
*/

const char* MyStrstr(const char* str, const char* sub_str)
{
	assert(str);
	assert(sub_str);

	while (*str) {
		const char* p = str;
		const char* q = sub_str;
		while (*p && *q && *p == *q) {
			p++;
			q++;
		}
		if (*q == '\0') {
			return str;
		}
		str++;
	}

	return NULL;
}

int main()
{
	char* str = "abcd 1234 acd 234 abcde 123";
	char* str_sub = "acd";
	printf("%s", MyStrstr(str, str_sub));
	return 0;
}

