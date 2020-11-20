#include <stdio.h>
#include <assert.h>
#include <string.h>

/*题目：模拟实现库函数练习四 -- strcat
* 时间：2020_11_20
* 模拟实现库函数
*/

/*思路：
* strcat函数是在 #include <string.h>
* 实现两个函数的拼接
* 首先设置两个指针，到第一个字符串的'\0'位置把第二个字符串开始拷贝
* （拷贝包括第二个字符串的'\0'也拷贝进去）
*/

int MyStrcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* res = dest;
	while (*dest) {
		dest++;
	}
	while ((*dest++ = *src++)) {
		;
	}
	return res;
}

int main()
{
	char dest[20] = "abcdefg";
	char* src = "123456";
	puts(MyStrcat(dest, src));
	
	return 0;
}
