#include <stdio.h>

/*��Ŀ��n^k���
* ʱ�䣺2020_11_26
* ��ϰ
*/

/*˼·��
* ��дһ������ʵ��n��k�η�
* ���õݹ�ķ���
*/

int Index(int n, int k)
{
	if (k == 1) {
		return n;
	}
	else {
		return n * Index(n, k - 1);
	}
}

int main()
{
	int n = 2;
	int k = 4;
	int res = Index(n, k);
	printf("���Ϊ��%d", res);
	return 0;
}
