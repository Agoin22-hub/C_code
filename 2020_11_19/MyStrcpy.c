#include <stdio.h>
#include <assert.h>

/*ģ��ʵ�ֿ⺯����ϰ�� -- strcpy
* ʱ�䣺2020_11_19
* ģ��⺯��
*/

/*˼·��
* strcpy
* strcpy��������ͷ�ļ�<string.h>
* ���� string copy,��Ŀ���ַ�������
* ������'\0'��һ��ȫ������
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