#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct SLBH
{
    char tenhang[20];
    int dongia;
    int soluong;
    int thanhtien;   
};

typedef struct SLBH slbh;

void dulieu(slbh mang[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int y = i + 1; y < n; y++)
        {
            if (strcmp(mang[i].tenhang, mang[y].tenhang) > 0)
            {
                slbh temp = mang[i];
                mang[i] = mang[y];
                mang[y] = temp;
            }
        }
    }
}


void nhapinf(slbh mang[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap ten mat hang %d: ", i + 1);
        getchar();
        gets(mang[i].tenhang);
        printf("Nhap don gia cua mat hang %d: ", i + 1);
        scanf("%d", &mang[i].dongia);
        printf("Nhap so luong cua mat hang %d: ", i + 1);
        scanf("%d", &mang[i].soluong);
        mang[i].thanhtien = mang[i].dongia * mang[i].soluong;
    }
}

int main()
{
    int n;
    printf("Co bao nhieu mat hang: ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Khong co mat hang nao");
    }
    else
    {
        slbh *mang = (struct SLBH*)malloc(n * sizeof(slbh)); 
        nhapinf(mang, n);
        dulieu(mang, n);
        printf("                  SO LIEU BAN HANG\n");
        printf("STT     Ten hang       Don gia     So luong    Thanh tien\n");
        int tongtien = 0;
        for (int i = 0; i < n; i++)
        {
            printf("%-3d", i + 1);
            printf("     %-12s", mang[i].tenhang);
            printf("%10d", mang[i].dongia);
            printf("   %10d", mang[i].soluong);
            printf("    %10d", mang[i].thanhtien);
            tongtien += mang[i].thanhtien;
            printf("\n");
        }
        printf("                                  Tong tien   %11d", tongtien);
        free(mang);
    } 
    return 0;
}
