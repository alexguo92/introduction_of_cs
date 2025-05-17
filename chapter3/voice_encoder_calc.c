#include<stdio.h>

int main()
{
    int bit_depth, num_of_samples;
    printf("请输入位深度：");
    scanf("%d", &bit_depth);
    printf("请输入每秒样本数：");
    scanf("%d", &num_of_samples);
    printf("位率为：%d b/s\n", bit_depth*num_of_samples);
    return 0;
}
