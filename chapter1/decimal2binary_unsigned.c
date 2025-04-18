#include<stdio.h>
#include<stdlib.h>

void decimal2binary_unsigned(int num);

int main()
{
    int num;
    printf("请输入一个十进制数：");
    scanf("%d", &num);
    printf("该十进制数的二进制表示为：");
    decimal2binary_unsigned(num);
    return 0;
}
void decimal2binary_unsigned(int num)
{
    int binary_num[32];
    int i = 0;
    int n = num;
    if (num<0)
    {
        printf("你输入的数不符合要求，请重新运行");
        return;
    }
    if(num==0){
        printf("0");
        return;
    }
    while (num>0)
    {
        n = num % 2;
        binary_num[i] = n;
        num = num / 2;
        i++;
    }
    for (int j = i-1; j >= 0; j--)
    {
        printf("%d", binary_num[j]);
    }
    printf("\n");
}
