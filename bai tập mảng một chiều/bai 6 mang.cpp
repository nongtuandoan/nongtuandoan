#include<stdio.h>
void nhap(int a[], int n){
	for(int i=0; i<n;i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void  xuat(int a[], int n){
	for(int i=0; i<n;i++){
    	if(a[i]<0){
    		a[i]=0;
		}
		}
	printf("mang sau khi thay the cac phan tu am bang 0 la:" );
	for(int i=0; i<n;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	}
int main(){
	int n;
	printf("nhap vao so luong phan tu mang:");
	scanf("%d", &n);
	int a[n];
	nhap(a,n);
	xuat(a,n);
	return 0;
	
}

