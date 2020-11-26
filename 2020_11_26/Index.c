#include <stdio.h>

/*题目：n^k求解
* 时间：2020_11_26
* 练习
*/

/*思路：
* 编写一个函数实现n的k次方
* 采用递归的方法
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
	printf("结果为：%d", res);
	return 0;
}
