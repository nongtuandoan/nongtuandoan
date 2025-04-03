#include<stdio.h>
#include<math.h>
void nhap(int a[], int n){
	printf("nhap vao so luong cua mang:\n");
	for(int i=0 ;i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuat(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%d", a[i]);
	}
	printf("\n");
}
void xapxep(int a[],  int n){
	printf("thu tu mang sau khi sap xep la : ");
	for(int i=0 ; i< n-1 ; i++){
	for(int j=0; j<n-1-i; j++){
	if( a[j] > a[j+1]){
		int max=a[j];
		a[j]=a[j+1];
		a[j+1]=max;
	}
	}	
	}
		}
		int main(){
			int n=10,a[10];
			nhap(a,n);
			xapxep(a,n);
			xuat(a,n);
		
			return 0;
		}
