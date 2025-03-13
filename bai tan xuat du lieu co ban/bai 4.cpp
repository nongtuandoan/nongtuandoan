#include<stdio.h>
#include<math.h>
int main(){
	float x;
	printf("nhap vao ban kinh hinh cau:");
	scanf("%fl",&x);
	printf("dien tich hinh cau la:%.2lf\n",4*M_PI*x*x );
	printf("the tich hinh cau la:%2.lf\n", (4/3)*M_PI*pow(x,3));
	return 0;
}
