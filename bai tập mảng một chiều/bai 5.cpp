#include<stdio.h>
 void mang(int a[], int n ){
	for(int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	}
void  kiemtra(int a[], int n){
     int max=a[0], min=a[0], vitrimin=0, vitrimax=0;
   
	 for(int i=1; i<n; i++){
     	if(a[i]>max){
     		max=a[i];
     		vitrimax=i+1;
		 }
		 if(a[i]<min){
		 	min=a[i];
		 	vitrimin=i+1;
		 }
	 
	 }
	 printf("gia tri lon nhat la: %d, o vi tri thu: %d\n", max,vitrimax);
	 printf("gia tri nho nhat la: %d, o vi tri thu:%d\n", min, vitrimin);
}
int main(){
	int n;
	printf(" nhap vao so luong phan tu cua mang:", n);
	scanf("%d", &n);
	int a[n];
	mang(a,n);
	kiemtra(a,n);
	return 0; 
}
