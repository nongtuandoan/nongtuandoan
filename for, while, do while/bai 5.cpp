#include<stdio.h>
#include<math.h>
void uoc(int n){
	printf("cac uoc cua %d la:",n);

	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){	
	
	printf("%d ",i);
    if(i!=n/i){
    	printf("%d ",n/i);
	}
	}
	}
	printf("\n");



	

}

int main(){
	int n;
	printf("nhap vao ban phim so n:");
	scanf("%d", &n);
	uoc(n);

 return 0;
}
