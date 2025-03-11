#include<stdio.h>
#include<math.h>
int tong(){
	int sum=0, n;
	for(int i=1;i<=10;i++){
		printf("nhap vao so thu %d:",i);
		scanf("%d", &n);
	
     sum+=n;
	}
return sum;
}
int main(){;
	printf("tong cua 10 chu so la:%d\n", tong());
	return 0;
}

