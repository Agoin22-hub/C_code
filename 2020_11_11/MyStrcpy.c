#include <stdio.h>

/*��Ŀ��ģ��ʵ��strcpy����
* ʱ��;2020_11_11
* ��ϰ
*/

/*˼·��ģ��ʵ��strcpy����
* ���ַ���a��һ���п�����ֱ������NULLʱ���ַ���bֹͣ������
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