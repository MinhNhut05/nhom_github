#include<stdio.h>

void bangcuuchuong(int n)
{
    printf("Nhap bang cuu chuong: ");
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}