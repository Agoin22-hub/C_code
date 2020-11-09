#include <stdio.h>

/*题目：在屏幕上打印杨辉三角
* 时间：2020_11_8
* 练习一
*/

/*思路：
* 1                   第0行   
* 1 1                 第1行
* 1 2 1               第2行
* 1 3 3 1             第3行
* 1 4 6 4 1           第4行
* ……
* 设置一个二维数组 arr[i][j] 
* 每一行第一个和最后一个为1
* 其他的为上一行前一个和正上一个相加 
* 即arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j]；
*/

#define N 7
int main()
{
    int arr[N][N];
    //完成第一步，将每一行第一个和最后一个设置为1
    for (int i = 0; i < N; i++) {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }
    //第二步，计算中间空余的数字
    for (int i = 2; i < N; i++) {   //2~N-1
        for (int j = 1; j < i; j++) {    //1~i-1
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    //打印
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}