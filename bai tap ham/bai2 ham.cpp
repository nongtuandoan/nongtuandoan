#include <stdio.h>

long long tuandoan(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    return (x * tuandoan(x - 1));
}

int main()
{
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    if (x < 0)
    {
        printf("x phai lon hon hoac bang khong");
    }
    else
    {
        printf("%d! = %lld", x, tuandoan(x));
    }
    return 0;
}
