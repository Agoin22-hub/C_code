#include <stdio.h>
#include <windows.h>
/*��Ŀ��ģ��ʵ�ֿ⺯��strlen
* ʱ�䣺2020_11_10
* ��ϰ��
*/

/*˼·��
* srelen������ͷ�ļ�<string.h>�У��������ַ����ĳ��ȣ�������'\0'��
* 3�ַ���
* 1������ָ��
* 2��������
* 3���ݹ�ʵ��
*/


//����һ:����һ��ָ�룬�������Ѱ�ң�ֱ������'\0'ֹͣ
/*��Ҫ����ָ��Ѱ�ң����Ϊ��Ԫ�ص�ַ-��Ԫ�ص�ַ��char���ʹ�СΪ1��*/
//int main()
//{
//	char arr[] = "abcdefg123";
//	int len = 0;
//	char* p = arr;
//	while (*p != '\0') {
//		p++;
//	}
//	len = p - &arr;
//	printf("�����鳤��Ϊ��%d", len);
//
//}

//������������һ����������Ѱ��һ����һһ��
//int main()
//{
//	int count = 0;
//	char arr[] = "abcdefg123";
//	for (; arr[count] != '\0'; count++) {
//	}
//	printf("�����鳤��Ϊ��%d", count);
//}

//�����������õݹ�ʵ��
int MyStrlen(char* str)
{
	if (*str == '\0') {
		return 0;
	}
	else {
		return 1 + MyStrlen(str + 1);
	}
}
int main()
{
	char arr[] = "abcdefg123";
	int len = MyStrlen(arr);
	printf("����ĳ���Ϊ��%d", len);
	return 0;
}



