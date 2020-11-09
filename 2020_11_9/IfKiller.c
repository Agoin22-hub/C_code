#include <stdio.h>

/*题目：判断谁是凶手
* 时间：2020_11_8
* 练习二
*/

/*题目详细描述
* 日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
* 以下为4个嫌疑犯的供词:
* A说：不是我。
* B说：是C。
* C说：是D。
* D说：C在胡说
* 已知3个人说了真话，1个人说的是假话。
* 现在请根据这些信息，写一个程序来确定到底谁是凶手。
*/

/*思路：
* 假设每个人是凶手
* 判断哪个人是凶手是满足ABCD四个人只有三个人说了真话
* A: killer ！= ‘A’
* B: killer = ‘C’
* C: killer = ‘D’
* D: killer ！= ‘D’
*/

int main()
{
	int slayer = 0;
	for (slayer = 'A'; slayer <= 'D'; slayer++)
	{
		if (3 == (slayer != 'A') + (slayer == 'C') + (slayer == 'D') + (slayer != 'D'))
		{
			printf("凶手是%c\n", slayer);
		}
	}
	return 0;
}