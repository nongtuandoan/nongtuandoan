#include<stdio.h>
void nhap(int a[][3], int n, int m){
	for(int i=0; i<n;i++){
		for(int j=0; j<m; j++){
			printf("nhap vao so phan tu hang %d, cot %d: ", i,j);
			scanf("%d", &a[i][j]);
		}
	}
}
void xuat(int a[][3], int n, int m){
	for(int i=0; i<n;i++){
		for(int j=0; j<m; j++){
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int mang2chieu[3][3]={
	{1,  2,  3},
	{4,  5,  6},
	{7,  8,  8}
	};
   
	printf("th1 cac phan tu cua mang duoc khai bao sau khi in la:\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3;j++){
			printf("%3d", mang2chieu[i][j] );
	
		}
		printf("\n");
			}
	int n,m;
	printf("nhap vao so luong hang va cot cua mang:");
	scanf("%d%d", &n, &m);
	int a[3][3];
	nhap(a, n, m);
	xuat(a, n, m);
	return 0;
}
