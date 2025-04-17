#include <stdio.h>
#include <math.h>

void tuandoan(float dathuc[], int bacmax)
{
    for (int i = bacmax; i >= 0; i--)
    {
        scanf("%f", &dathuc[i]);
    }    
}

double tinhdt(float x, float dathuc[], int bacmax)
{
    double dt = 0;
    for (int i = 0; i <= bacmax; i++)
    {
        dt += dathuc[i] * pow(x, i);
    }
    return dt;
}

void inhs(float dathuc[], int bacmax)
{
    for (int i = bacmax; i >= 0; i--)
    {
        printf("%g  ", dathuc[i]);
    }
    printf("\n");
}

int main()
{
    int n, m;
    float x;
    printf("Nhap bac cua da thuc P (n): ");
    scanf("%d", &n);
    printf("Nhap bac cua da thuc Q (m): ");
    scanf("%d", &m);
    if (n < 0 || m < 0)
    {
        printf("Bac cua 2 ma tran phai >= 0");
    }
    else
    {
        float p[n + 1];
        float q[m + 1];
        printf("Luu y: Cac he so duoc nhap theo thu tu bac giam dan\n");
        printf("Nhap cac he so cua da thuc P: ");
        tuandoan(p, n);
        printf("Nhap cac he so cua da thuc Q: ");
        tuandoan(q, m);
        printf("Nhap x: ");
        scanf("%f", &x);
        float t[(m <= n) ? n + 1 : m + 1];
        for (int i = 0; i <= ((m <= n) ? n : m); i++)
        {
            t[i] = 0;    
        }
        for (int i = 0; i <= m; i++)
        {
            t[i] += q[i];
        }
        for (int i = 0; i <= n; i++)
        {
            t[i] += p[i];
        }
        printf("He so cua da thuc P la: ");
        inhs(p, n);
        printf("He so cua da thuc Q la: ");
        inhs(q, m);
        printf("He so cua da thuc T = P + Q la: ");
        inhs(t, ((n <= m) ? m : n));
        printf("Gia tri cua x la: %g\n", x);
        printf("Gia tri cua da thuc P la: %g\n", tinhdt(x, p, n));
        printf("Gia tri cua da thuc Q la: %g\n", tinhdt(x, q, m));
        printf("Gia tri cua da thuc T la: %g", tinhdt(x, t, ((m <= n) ? n : m)));
    }
    return 0;
}
