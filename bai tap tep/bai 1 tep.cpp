#include <stdio.h>
#include <stdlib.h>

#define MAX 100 


void nhapMaTran(int m, int n, float mt[MAX][MAX])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("mt[%d][%d] = ", i, j);
            scanf("%f", &mt[i][j]);
        }
    }
}


void ghiMaTran(FILE *f, int m, int n, float mt[MAX][MAX])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fprintf(f, "%.2f ", mt[i][j]);
        }
        fprintf(f, "\n");
    }
}

void congMaTran(int m, int n, float a[MAX][MAX], float b[MAX][MAX], float ketqua[MAX][MAX])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ketqua[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main()
{
    int m1, n1, m2, n2;
    float mt1[MAX][MAX], mt2[MAX][MAX], tong[MAX][MAX];

    printf("Nhap kich thuoc ma tran 1 (dong cot): ");
    scanf("%d%d", &m1, &n1);
    printf("Nhap kich thuoc ma tran 2 (dong cot): ");
    scanf("%d%d", &m2, &n2);

   
    if (m1 != m2 || n1 != n2)
    {
        printf("Hai ma tran khong cung kich thuoc => Khong the cong!\n");
        return 1;
    }


    printf("Nhap ma tran 1:\n");
    nhapMaTran(m1, n1, mt1);
    printf("Nhap ma tran 2:\n");
    nhapMaTran(m2, n2, mt2);


    congMaTran(m1, n1, mt1, mt2, tong);

 
    FILE *f = fopen("CONG_MT.txt", "w");
    if (!f)
    {
        printf("Khong the mo file de ghi!\n");
        return 1;
    }

    fprintf(f, "Ma tran 1:\n");
    ghiMaTran(f, m1, n1, mt1);
    fprintf(f, "\nMa tran 2:\n");
    ghiMaTran(f, m2, n2, mt2);
    fprintf(f, "\nTong hai ma tran:\n");
    ghiMaTran(f, m1, n1, tong);

    fclose(f);
    printf("Da ghi ket qua vao file CONG_MT.txt\n");

    return 0;
}
