#include <stdio.h>

/*��Ŀ���ݹ����������֮��
* ʱ�䣺2020_11_17
* ��ϰ
*/

/*дһ���ݹ麯��DigitSum(n)
* ����һ���Ǹ����������������������֮��
* ���磬����DigitSum(1729)��
* ��Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
* ���룺1729�������19
*/

int DigureSum(int num)
{
	if (num / 10 < 1) {
		return num;
	}
	else {
		return (num % 10) + DigureSum(num / 10);
	}
}

int main()
{
	int num = 172;
	int res = DigureSum(num);
	printf("�����%d", res);
	return 0;
}
