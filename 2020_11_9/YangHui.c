#include <stdio.h>

/*��Ŀ������Ļ�ϴ�ӡ�������
* ʱ�䣺2020_11_8
* ��ϰһ
*/

/*˼·��
* 1                   ��0��   
* 1 1                 ��1��
* 1 2 1               ��2��
* 1 3 3 1             ��3��
* 1 4 6 4 1           ��4��
* ����
* ����һ����ά���� arr[i][j] 
* ÿһ�е�һ�������һ��Ϊ1
* ������Ϊ��һ��ǰһ��������һ����� 
* ��arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j]��
*/

#define N 7
int main()
{
    int arr[N][N];
    //��ɵ�һ������ÿһ�е�һ�������һ������Ϊ1
    for (int i = 0; i < N; i++) {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }
    //�ڶ����������м���������
    for (int i = 2; i < N; i++) {   //2~N-1
        for (int j = 1; j < i; j++) {    //1~i-1
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    //��ӡ
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}