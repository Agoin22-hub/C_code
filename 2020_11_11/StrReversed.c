#include <stdio.h>

/*��Ŀ����дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
* ʱ�䣺2020_11_11
* ��ϰ
*/

/*˼·��
* �������ַ����е��ַ���������
* ����ʹ��C�������е��ַ�����������
*/


void StrReversed(char* string)
{
	int fid = 0;
	for (int i = 0; i < 100; i++) {
		if (string[i] == '\0') {
			break;
		}
		string += i;
	}
	for (; string >= 0; string--) {
		printf("%d\t", string);
	}
}

int main() 
{
	char* p = "abcdef";
	StrReversed(p);
	return 0;
}
