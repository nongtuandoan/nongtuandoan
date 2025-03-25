#include<stdio.h>
#include<math.h>
void nhap(int a[], int n){
	
		printf("nhap cac phan tu trong mang:\n");
		for(int i=0; i<n;i++){
			printf("a[%d] =", i);
			scanf("%d" , &a[i]);	
		}
	
}
void xuat(int a[], int n){
	printf("cac phan tu trong mang:");	
	for(int i=0;i<n;i++){
	printf("%d ", a[i]);

}
printf("\n");
} 
int main(){
	int n =10, a[10];
	nhap(a, n);
	xuat(a, n);
return 0;
}
