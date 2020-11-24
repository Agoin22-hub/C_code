#include <stdio.h>
#include <assert.h>

/*题目：模拟实现库函数练习七 -- strcmp
* 时间：2020_11_24
* 模拟实现库函数
*/

/*思路：
* 标准形式 int strcmp (const char * str1, const char * str2 );
* 他是字符串比较函数,三种返回值
* 所在头文件：string.h
* 第一个字符串大于第二个字符串，则返回大于0的数字
* 第一个字符串等于第二个字符串，则返回0
* 第一个字符串小于第二个字符串，则返回小于0的数字
*/

int MyStrcmp(const char* src, const char* dst)
{
	int ret = 0;
	assert(src != NULL);
	assert(dst != NULL);
	while (!(ret = *(unsigned char*)src - *(unsigned char*)dst) && *dst)
		++src, ++dst;
	if (ret < 0)
		ret = -1;
	else if (ret > 0)
		ret = 1;
	return(ret);
}

int main()
{
	char str1[] = "I love yangyang";
	char str2[] = "I love YangYang";

	//比较 strings str1 and str2
	int result = MyStrcmp(str1, str2);
	printf("MyStrcmp(str1, str2) = %d\n", result);

	return 0;

}

