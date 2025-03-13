#include<stdio.h>
#include<math.h>
int main(){
	int  x,a,b,c;
	printf("nhap vao ban phim so bat ki:");
	scanf("%d",&x);
	printf("gia tri cua x binh phuong bang:%d\n", a=x*x);
	printf("gia tri cua x mu 3 la: %d\n", b=x*x*x);
	printf("gia tri cua x mu 4 la:%d\n", c=pow(x,4));
	return 0;
}
