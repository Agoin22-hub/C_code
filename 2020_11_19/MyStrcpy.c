#include <stdio.h>
#include <assert.h>

/*模拟实现库函数练习二 -- strcpy
* 时间：2020_11_19
* 模拟库函数
*/

/*思路：
* strcpy
* strcpy函数是在头文件<string.h>
* 就是 string copy,将目标字符串拷贝
* （包括'\0'）一起全部拷贝
*/

char* MyStrcpy(char* des, const char* src) 
{
	char* res = des;
	assert(des != NULL);
	assert(src != NULL);
	while (*src != '\0') {
		*des = *src;
		des++;
		src++;
	}
	des = '\0';
	return res;
}

int main()
{
	char *str = "abcdefgh";
	char arr[10] = { 0 };
	printf("%s\n", MyStrcpy(arr, str));
	return 0;
}