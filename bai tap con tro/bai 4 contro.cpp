#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("so phan tu cua mang la: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Khong hoc toan a =))");
    }
    else if (n == 0)
    {
        printf("Mang rong");
    }
    else
    {
        float *a = (float*)malloc(n * sizeof(float));
        printf("Nhap cac phan tu cua mang: ");
        for (int i = 0; i < n; i++)
        {
            scanf("%f", a + i);
        }
        float min = a[0];
        float max = a[0];
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[i])
                {
                    float temp = *(a + i);
                    *(a + i) = *(a + j);
                    *(a + j) = temp;
                }
            }
        }
        printf("Mang sau khi sap xep : ");
        for (int i = 0; i < n; i++)
        {
            printf("%g ", *(a + i));
        }
        free(a);
    }
    return 0;
}
