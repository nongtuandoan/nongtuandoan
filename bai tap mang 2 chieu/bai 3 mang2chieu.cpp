#include<stdio.h>
void nhap(int a[][10], int m, int n, char ten){
	printf("nhap vao ma tran %c:\n", ten);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%c[%d][%d] = ", ten,i,j);
			scanf("%d", &a[i][j]);
		}
	}
}
void xuat(int a[][10], int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
}
void tinhtich(int a[][10], int b[][10], int c[][10], int m, int n, int p){
	for(int i=0; i<m; i++){
		for(int j=0; j<p;j++){
			c[i][j]=0;
		for(int k=0;k<n;k++){
			c[i][j]+= a[i][k] * b[k][j];
		}
	}
}
}
int main(){
int a[10][10], b[10][10], c[10][10];
int m,n,p;
 printf("nhap so hang va cot cua ma tran A(m*n):");
 scanf("%d%d", &m, &n);
 printf("nhap so cot cua ma tran B(p):	");
 scanf("%d", &p);
 nhap(a,m,n, 'A');
 nhap(b,n,p, 'B');
 tinhtich(a,b,c,m,n,p);
 printf("ma tran A:\n");
 xuat(a,m,n);
 printf("ma tran B:\n");
 xuat(b,m,p);
 printf(" phep nhan hai ma tran(A*B):\n");
 xuat(c,m,p);
 return 0;	
 
 
 
}
