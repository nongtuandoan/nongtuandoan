#include<stdio.h>
#include<math.h>
int shh(long long n){
	long long sum= 1;
	for( int i=2; i<=sqrt(n);i++){
	
	if(n%i==0){
		if(i!=n/i)
		sum+=i+n/i;
		else
		sum+=i;	
	}
}
if (sum==n)
return 1;

return 0;
}
int main(){
	int t;
	scanf("%d", &t);
while(t--){
long long n;
scanf("%lld", &n);
    if(shh(n))
    	printf("yes \n");
    	else
    	printf("no\n");
	
}
	

return 0;}
