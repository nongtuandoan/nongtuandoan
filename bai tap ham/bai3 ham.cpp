#include <stdio.h>

int tuandoan(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (tuandoan(n - 1) + tuandoan(n - 2));
    }
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("n phai lon hon 0");
    }
    else
    {
        printf("Phan tu thu %d trong day Fibonacci la: %d", n, tuandoan(n));
    }
    return 0;
}
