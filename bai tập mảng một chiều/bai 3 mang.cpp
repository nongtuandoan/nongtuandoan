#include<stdio.h>
void nhap(int a[], int n){
	for(int i=0; i<n; i++){
		printf(" a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
int tinh(int a[], int n){
	int tong=0, demduong=0, demam=0, tongduong=0, tongam=0;
	for(int i=0; i<n;i++){
		tong+=a[i];
		if(a[i]>0){
			tongduong+=a[i];
			demduong++;
		}
		
		else if(a[i]<0){
			tongam+=a[i];
			demam++;
		}
	}
	float tbc= (float)tong/n;
	float tbcduong= (float)tongduong/demduong;
	float tbcam=(float)tongam/demam;
	
	printf("tong cac phan tu trong mang la:%d\n", tong);
	printf("tong cac phan tu duong trong mang la:%d\n", tongduong);
	printf("tong cac phan tu am trong mang la:%d\n", tongam);
	printf("trung binh cong cac phan tu trong mang la: %.2f\n", tbc);
	printf("trung binh cong duong la: %.2f\n", tbcduong);
	printf("trung binh cong am trong mang la : %.2f\n ", tbcam);

}
int main(){
	int n;
	printf("nhap vao so phan tu mang:");
	scanf("%d", &n);
	int a[n];
	nhap(a,n);
	tinh(a,n);
	return 0;
}
