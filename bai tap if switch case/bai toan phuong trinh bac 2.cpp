#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,denta;
	float x1,x2,x;
	printf("nhap vao ban phim a,b,c \n");
	
	scanf("%d%d%d" ,&a,&b,&c);
	if(a==0){
	printf("gia tri cua x la: %f", (float)-c/b);
	}
	else {
	
	denta=b*b- 4*a*c;

 if( denta<0){
 
	printf("phuong trinh vo nghiem " );
	
}
else if(denta==0){
	printf("phuong trinh co nghiem kep la: x=%.2f ", (float)-b / 2*a);
	}else {
	
	x1= ((-b+sqrt(denta))/(2*a));
	x2= ((-b-sqrt(denta))/(2*a));
    printf("phuong trinh co nghiem la: x1= %.2f, x2=%.2f",	 x1,x2);
}
}
return 0;
}

