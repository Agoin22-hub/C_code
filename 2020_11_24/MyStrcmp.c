#include <stdio.h>
#include <assert.h>

/*��Ŀ��ģ��ʵ�ֿ⺯����ϰ�� -- strcmp
* ʱ�䣺2020_11_24
* ģ��ʵ�ֿ⺯��
*/

/*˼·��
* ��׼��ʽ int strcmp (const char * str1, const char * str2 );
* �����ַ����ȽϺ���,���ַ���ֵ
* ����ͷ�ļ���string.h
* ��һ���ַ������ڵڶ����ַ������򷵻ش���0������
* ��һ���ַ������ڵڶ����ַ������򷵻�0
* ��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
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

	//�Ƚ� strings str1 and str2
	int result = MyStrcmp(str1, str2);
	printf("MyStrcmp(str1, str2) = %d\n", result);

	return 0;

}

