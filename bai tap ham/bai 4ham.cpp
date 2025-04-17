#include <stdio.h>

#define MAX 100

void tao_mt(int m, int n, float mt[MAX][MAX]){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%f", &mt[i][j]);
        }
    }
}

void in_mt(int m, int n, float mt[MAX][MAX]){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%g ", mt[i][j]);
        }
        printf("\n");
    }
}

void cong_mt(int a, int b, float mt1[MAX][MAX], float mt2[MAX][MAX], float mt[MAX][MAX]){
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            mt[i][j] = mt1[i][j] + mt2[i][j];
        }
    }
}

void nhan_mt(int a, int b, int c, int d, float mt1[MAX][MAX], float mt2[MAX][MAX], float mt[MAX][MAX]){
    for (int i = 0; i < a; i++){
        for (int j = 0; j < d; j++){
            float tong = 0;
            for (int k = 0; k < b; k++){ // S?a ch? này
                tong += mt1[i][k] * mt2[k][j];
            }
            mt[i][j] = tong;
        }
    }
}

int main(){
    int a, b, c, d;
    float mt1[MAX][MAX], mt2[MAX][MAX], mt[MAX][MAX];

    printf("Nhap kich thuoc ma tran A (m1 n1): ");
    scanf("%d %d", &a, &b);
    printf("Nhap kich thuoc ma tran B (m2 n2): ");
    scanf("%d %d", &c, &d);

    printf("Nhap ma tran A: \n");
    tao_mt(a, b, mt1);
    printf("Nhap ma tran B: \n");
    tao_mt(c, d, mt2);

    printf("\nMa tran A:\n");
    in_mt(a, b, mt1);
    printf("\nMa tran B:\n");
    in_mt(c, d, mt2);

    if (a == c && b == d){
        cong_mt(a, b, mt1, mt2, mt);
        printf("\nTong cua 2 ma tran la:\n");
        in_mt(a, b, mt);
    } else {
        printf("\nKhong cong duoc 2 ma tran khong cung kich thuoc\n");
    }

    printf("\nLuu y: Khi nhan 2 ma tran, A x B != B x A\n");

    if (b == c){
        nhan_mt(a, b, c, d, mt1, mt2, mt);
        printf("\nNhan A voi B:\n");
        in_mt(a, d, mt);
    } else {
        printf("\nKhong nhan duoc A voi B\n");
    }

    if (d == a){
        nhan_mt(c, d, a, b, mt2, mt1, mt);
        printf("\nNhan B voi A:\n");
        in_mt(c, b, mt);
    } else {
        printf("\nKhong nhan duoc B voi A\n");
    }
    return 0;
}
