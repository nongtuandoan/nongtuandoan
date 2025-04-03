#include<stdio.h>
#include<math.h>
void nhap(int a[], int n ){
	printf("nhap cac phan tu cho mang:\n "); 
	for(int i=0; i<n; i++){
	printf("a[%d] = ", i);
	scanf("%d",&a[i]) ;
	}
	}
void xuat(int a[], int n){
 printf("mang dao nguoc: ");
for(int i=n - 1	; i>=0; i--){
  printf("%d ", a[i]);
} 
printf("\n");
}
int main(){
	int n=5, a[5];
	nhap(a, n);
	xuat(a, n);
    return 0;
}
