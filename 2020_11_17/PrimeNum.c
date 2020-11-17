#include <stdio.h>

/*题目：打印1~100 所有的素数
* 2020_11_17
* 练习
*/

int main()
{
    for (int j = 1; j <= 100; j++)
    {
        int i = 0;
        for (i = 2; i <= j - 1; i++)//用该数字去除于所有比1大比本身小的数字
        {
            if (j % i == 0)//当出现有余数为0的数字是就跳出循环直接打印输出
                break;
        }
        if (i >= j - 1)
        {
            printf("%d\t", j);
        }
    }
   
    return 0;
}