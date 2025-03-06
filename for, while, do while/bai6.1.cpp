#include<stdio.h>
#include<math.h>
long long  ucln( long long a, long long b) {
	if(a==0 || b==0) return a+b;
	while(a!=b){
		if(a>b)
		a=a-b;
		else 
		b=b-a;
	
	}
}
	long long bcnn( long long a, long long b){
		return (a*b)/(ucln(a,b));
	}

int main(){
	int a,b;
	scanf("%d%d", &a,&b);
	printf(" uoc chung lon nhat la: %d \n ", ucln(a,b));
	printf("boi chung nho nhat la: %d \n", bcnn(a,b));
 return 0;	
}

