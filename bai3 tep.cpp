#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void ghiMaTran(int m, int n, float mt[MAX][MAX], FILE *f)
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

void nhanMaTran(int a, int b, int c, int d, float mt1[MAX][MAX], float mt2[MAX][MAX], float ketqua[MAX][MAX])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            float tong = 0;
            for (int k = 0; k < b; k++) // b == c
            {
                tong += mt1[i][k] * mt2[k][j];
            }
            ketqua[i][j] = tong;
        }
    }
}

void docMaTran(int m, int n, float mt[MAX][MAX], FILE *f)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fscanf(f, "%f", &mt[i][j]);
        }
    }
}

int main()
{
    FILE *f = fopen("TICH_MT.txt", "r+");
    if (f == NULL)
    {
        printf("Loi mo file!\n");
        exit(1);
    }

    int n, p, m;
    if (fscanf(f, "%d %d %d", &n, &p, &m) != 3)
    {
        printf("Loi doc kich thuoc ma tran. Vui long kiem tra file.\n");
        fclose(f);
        return 1;
    }

    float mt1[MAX][MAX];
    float mt2[MAX][MAX];
    float ketqua[MAX][MAX];

    docMaTran(n, p, mt1, f);
    docMaTran(p, m, mt2, f);

    nhanMaTran(n, p, p, m, mt1, mt2, ketqua);

    fseek(f, 0, SEEK_END);
    fprintf(f, "\nTich hai ma tran:\n");
    ghiMaTran(n, m, ketqua, f);

    fclose(f);
    printf("? Da ghi ket qua tich ma tran vao file TICH_MT.txt\n");
    return 0;
}
