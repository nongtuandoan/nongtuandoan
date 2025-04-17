#include <stdio.h>

void tuandoan(int num, int cs)
{
    if (cs != 16)
    {
        if (num != 0)
        {
            tuandoan(num / cs, cs);
            printf("%d", num % cs);
        }
    }
    else
    {
        if (num != 0)
        {
            tuandoan(num / 16, 16);
            if (num % 16 < 10)
            {
                printf("%d", num % 16);
            }
            else
            {
                int du = num % 16;
                switch (du)
                {
                case 10:
                    printf("A");
                    break;
                case 11:
                    printf("B");
                    break;
                case 12:
                    printf("C");
                    break;
                case 13:
                    printf("D");
                    break;
                case 14:
                    printf("E");
                    break;
                default:
                    printf("F");
                    break;
                }
            }
        }
    }
}

int main()
{
    int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("n khong phai la so nguyen duong");
    }
    else
    {
        printf("%d trong he nhi phan la: ", n);
        tuandoan(n, 2);
        printf("\n");
        printf("%d trong he 8 la: ", n);
        tuandoan(n, 8);
        printf("\n");
        printf("%d trong he 16 la: ", n);
        tuandoan(n, 16);
    }
    return 0;
}
