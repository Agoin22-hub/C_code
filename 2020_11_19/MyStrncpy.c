#include <stdio.h>
#include <assert.h>
#include <string.h>

/*题目：模拟实现库函数练习三 -- strncpy
* 时间：2020_11_19
* 模拟库函数
*/

/*思路：
* strncpy函数是在头文件<string.h>
* 是strcpy的扩展，它更加安全，添加了一个拷贝的长度
* 它是用来将一个数组的字符串以覆盖的方式复制到另一个数组
*/


char* MyStrncpy(char* dst, const char* src,size_t count)
{
	char* ret = dst;
	assert(dst != NULL);
	assert(src != NULL);
	while ((*src != '\0') && (count != 0))
	{
		*dst = *src;
		dst++;
		src++;
		count--;
	}
	*dst = '\0';
	return ret;
}

int main()
{
	char str1[10] = { 0 };
	char* str2 = "abcdefgh";
	printf("%s\n", MyStrncpy(str1, str2, strlen(str2)));
	return 0;
}