#include <stdio.h>
#include <windows.h>

/*��Ŀ��ģ��ʵ�ֿ⺯�� -- strlen
* ʱ�䣺2020_11_18
* ��ϰ
*/

/*˼·��
* srelen������ͷ�ļ�<string.h>�У��������ַ����ĳ��ȣ�������'\0'��
* int MyStrlen(const char *str)
* 3�ַ���
* 1������ָ��
* 2��������
* 3���ݹ�ʵ��
*/


//����һ:����һ��ָ�룬�������Ѱ�ң�ֱ������'\0'ֹͣ
//��Ҫ����ָ��Ѱ�ң����Ϊ��Ԫ�ص�ַ-��Ԫ�ص�ַ
//��char���ʹ�СΪ1��

//int MyStrlen(char *str)
//{
//	char* p = str;
//	while (*p != '\0') {
//		p++;
//	}
//	return p - str;
//}
//
//int main()
//{
//	char* str = "abcdefg";
//	printf("���ַ����ĳ���Ϊ��%d\n", MyStrlen(str));
//	return 0;
//}



//������������һ����������ָ������һ�μ�һ
int MyStrlen(const char* str)
{
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}

int main()
{
	char *str = "abcdefg";
	printf("�����鳤��Ϊ��%d", MyStrlen(str);
}



//�����������õݹ�ʵ��
//int MyStrlen(const char* str)
//{
//	if (*str == '\0') {
//		return 0;
//	}
//	else {
//		return 1 + MyStrlen(str + 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = MyStrlen(arr);
//	printf("����ĳ���Ϊ��%d", len);
//	return 0;
//}



