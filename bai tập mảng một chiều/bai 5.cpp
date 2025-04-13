#include<stdio.h>
void nhap(int a[], int n){
	for(int i=0; i<n;i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
int xuat(int a[], int n, int m){
	int dem=0;
	for(int i=0; i<n; i++){
		if( a[i]==m){
			dem++;
			
		}
	}
return dem;
}
int main(){
	int n,m;
	printf("nhap vao so luong phan tu mang:");
	scanf("%d", &n);
	int a[n];
	nhap(a,n);
	printf("nhap vao gia tri can tim:");
	scanf("%d", &m);
	printf("phan tu %d  xuat hien %d lan trong mang ", m, xuat(a,n,m));
	return 0;
	
	
}

