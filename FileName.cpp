#define _CRT_SECURE_NO_WARNINGS 1
//春天是鲜花的季节，水仙花就是其中最迷人的代表，数学上有个水仙花数，他是这样定义的： “水仙花数”是指一个三位数，它的各位数字的立方和等于其本身
// 比如：153=1^3+5^3+3^3。 现在要求输出所有在m和n范围内的水仙花数。
#include <stdio.h>

int main()
{
    int m, n, i, g, s, b, c = 0;
    while (scanf("%d %d", &m, &n) != EOF)
    {
        for (i = m; i <= n; i++)
        {
            g = i % 10;
            s = (i / 10) % 10;
            b = i / 100;
            if (g * g * g + s * s * s + b * b * b == i)
            {
                printf("%d ", i);
                c = 1;
            }
        }
        if (c != 1)
        {
            printf("no");

        }
        c = 0;

        printf("\n");
    }
    return 0;
}