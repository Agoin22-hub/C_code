#include <stdio.h>
#include <assert.h>

/*��Ŀ��ģ��ʵ�ֿ⺯����ϰ�� -- strstr
* ʱ�䣺2020_11_21
* ģ��ʵ�ֿ⺯��
*/

/*˼·��
* �⺯��strstr �ڿ⺯���У�������ͷ�ļ�<string.h>��
* ���ִ����Һ���
* �ҵ��ִ�����ӡ����������,��û���ҵ��򷵻ؿ�
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

