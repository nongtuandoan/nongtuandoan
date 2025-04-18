#include <stdio.h>
#include <stdlib.h>

void inmt(int m, int n, float mt[m][n], FILE *f)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fprintf(f, "%g ", mt[i][j]);
        }
        fprintf(f, "\n");
    }
}

void nhan_mt (int a, int b, int c, int d, float mt1[a][b], float mt2[c][d], float mt[a][d])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            float tong = 0;
            for (int k = 0; k < c; k++)
            {
                tong += mt1[i][k] * mt2[k][j];
            }
            mt[i][j] = tong;
        }
    }    
}       

void docmt(int a, int b, float mt[a][b], FILE *f)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            fscanf(f, "%f", &mt[i][j]);
        }
    }
}

int main()
{
    FILE *f;
    f = fopen("TICH_MT.C", "r+");
    if (f == NULL)
    {
        printf("Loi tao / mo file");
        exit(1);
    }
    int n, p, m;
    fscanf(f, "%d %d %d", &n, &p, &m);
    float mt1[n][p];
    float mt2[p][m];
    docmt(n, p, mt1, f);
    docmt(p, m, mt2, f);
    float mt[n][m];
    nhan_mt(n, p, p, m, mt1, mt2, mt);
    fseek(f, 0, SEEK_END);
    inmt(n, m, mt, f);
    fclose(f);
    return 0;
}
