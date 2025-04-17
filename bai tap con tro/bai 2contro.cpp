#include <stdio.h>

int main(){
    int d[10];
    printf("Nhap cac phan tu cua mang (so nguyen): ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", d + i);
    }
    printf("Cac phan tu cua mang la: ");
    for (int i = 0; i < 10; i++)
    {
       printf("%d ", *(d + i));
    }
    return 0 ; 
}
