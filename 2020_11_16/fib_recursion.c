#include <stdio.h>
#pragma warning(disable:4996)
/*��Ŀ��쳲��������е�ʵ�֣��ݹ����ʽ��
* 2020_11_16
* ��ϰһ
*/

/*˼·�����õݹ����ʽʵ�ֶ���쳲��������еļ���
* 1 1 2 3 5 8 13 21 34 ����
* ����˼�룺
* int fib_r( int n );
* ���ڣ�
* if( n<=2 )
* return 1;
* ���ƣ�
* fib_(n - 1) + fib_( n -  2);
*/

int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d\n", ret);
	return 0;
}