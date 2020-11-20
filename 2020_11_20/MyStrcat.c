#include <stdio.h>
#include <assert.h>
#include <string.h>

/*��Ŀ��ģ��ʵ�ֿ⺯����ϰ�� -- strcat
* ʱ�䣺2020_11_20
* ģ��ʵ�ֿ⺯��
*/

/*˼·��
* strcat�������� #include <string.h>
* ʵ������������ƴ��
* ������������ָ�룬����һ���ַ�����'\0'λ�ðѵڶ����ַ�����ʼ����
* �����������ڶ����ַ�����'\0'Ҳ������ȥ��
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
