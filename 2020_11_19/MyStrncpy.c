#include <stdio.h>
#include <assert.h>
#include <string.h>

/*��Ŀ��ģ��ʵ�ֿ⺯����ϰ�� -- strncpy
* ʱ�䣺2020_11_19
* ģ��⺯��
*/

/*˼·��
* strncpy��������ͷ�ļ�<string.h>
* ��strcpy����չ�������Ӱ�ȫ�������һ�������ĳ���
* ����������һ��������ַ����Ը��ǵķ�ʽ���Ƶ���һ������
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