#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double tong=0.0;
	printf("nhap n:");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		tong +=(1.0)/i;
	}
	printf("gia tri cua tong la: %.3lf", tong);
	return 0;
}
