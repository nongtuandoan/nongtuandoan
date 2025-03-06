 #include<stdio.h>
 double tong(int n){
 	double  sum =0.0;
 	int giaithua=1;
 	for(int i=1; i<=n;i ++){
 		giaithua*=i;
		 sum+=1.0/(giaithua);
 		
	 }
 return sum;
 }
 int main(){
 	int n;
 	printf("nhap gia tri:");
 	scanf("%d", &n);
 	if(n<0){
 		printf("loi");
	 }
	 else {
	 	printf("gia tri cua tong la: %.6f\n",tong(n));
	 }
	 return 0;
 }
