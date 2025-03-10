	#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c, dientich,chuvi,s;

	printf("nhap vao ban phim 3 canh:");
	scanf("%f%f%f", &a,&b,&c);
	s=(a+b+c)/2;
	if ((a+b)>c && (a+c)>b && (b+c)>a){
		printf("3 canh cua mot tam giac \n");
	
	 if ((a==b)&&(b==c)){
		printf("tam giac deu \n");
	}
	else if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b)){
		printf("tam giac vuong \n");
		 if ((a==b)||(b==c)||(a==c)){
		printf("tam giac vuong can\n");
	}
}	
	else if((a==b)||(b==c)||(a==c)||(b==c)){
		printf("tam giac can \n");
	}
	dientich= sqrt(s*(s-a)*(s-b)*(s-c));
	chuvi = a+b+c;
	printf ("dien tich tam giac la:  %.2f \n" ,dientich);

	printf("chu vi tam giac la: %.2f \n", chuvi);
	
}

	return 0;
	}

