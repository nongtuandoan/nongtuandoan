#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Mang co bao nhieu phan tu: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Khong hoc toan a =))");
    }
    else if (n == 0)
    {
        printf("Mang khong co gi");
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
        for (int i = 1; i < n; i++)
        {
            if (*(a + i) > max)
            {
                max = *(a + i);
            }
            if (*(a + i) < min)
            {
                min = *(a + i);
            }
        }
        printf("Gia tri lon nhat trong mang la: %g\n", max);
        printf("Gia tri nho nhat trong mang la: %g", min);
        free(a);
    }
    return 0;
}
