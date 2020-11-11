#include <stdio.h>

/*题目：模拟实现strcpy函数
* 时间;2020_11_11
* 练习
*/

/*思路：模拟实现strcpy函数
* 对字符串a逐一进行拷贝，直到遇到NULL时，字符串b停止拷贝。
*/

void MyStrcpy(char* str, char* pos)
{
    while (*str != '\0')
    {
        *pos = *str;
        pos++;
        str++;
    }
    *pos = *str;
    return pos;
}
int  main()
{
    char str[] = "hello,world" ;
    char pos[] = { 0 };
    MyStrcpy(str, pos);
    printf("%s\n", pos);
    return 0;
}