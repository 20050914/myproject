#define _CRT_SECURE_NO_WARNINGS 1
//�������ʻ��ļ��ڣ�ˮ�ɻ��������������˵Ĵ�����ѧ���и�ˮ�ɻ�����������������ģ� ��ˮ�ɻ�������ָһ����λ�������ĸ�λ���ֵ������͵����䱾��
// ���磺153=1^3+5^3+3^3�� ����Ҫ�����������m��n��Χ�ڵ�ˮ�ɻ�����
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