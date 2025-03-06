	#include<stdio.h>
	int giatri(int n){
		int giaithua=1;
		for(int i=1; i<=n;i++){
		 giaithua=giaithua *i;
		}
		return giaithua;
		
	}
	int main(){
		int n,giaithua;
			printf("nhap gia tri :");
		scanf("%d", &n);
		if(n<0){
		printf("khong the tinh giai thua so am");}
		else{
		printf("gia tri giai thua cua %d la: %d\n", n,giatri(n));s}
	
	return 0;
	}
