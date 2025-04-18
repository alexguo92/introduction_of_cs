#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void decimal2binary(int num, int num_digits);

int main()
{
    int num, num_digits;
    printf("请输入一个十进制数：");
    scanf("%d", &num);
    printf("请输入二进制整数的最大位数");
    scanf("%d", &num_digits);
    printf("该十进制数的二进制表示为：");
    decimal2binary(num, num_digits);
    return 0;
}
void decimal2binary(int num, int num_digits)
{
    int binary_num[100] = {0};
    int i = 0;
    int n = num;
    if(num<0){
        num = -num;
        binary_num[num_digits-1] = 1;
    }
    if(num > pow(2.0, num_digits-1))
    {
        printf("数字转化为二进制数时，超过了最大位数限制\n");
        return;
    }
    if(num==0){
        for (int j = num_digits-1; j >= 0; j--)
        {
            printf("0");
        }
        printf("\n");
        return;
    }
    while (num>0)
    {
        n = num % 2;
        binary_num[i] = n;
        num = num / 2;
        i++;
    }
    for (int j = num_digits-1; j >= 0; j--)
    {
        printf("%d", binary_num[j]);
    }
    printf("\n");
}
