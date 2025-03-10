#include<stdio.h>

int main(){
	int DTB;
	
	printf("nhap gia tri vao ban phim:");
	scanf("%d",&DTB);
	if(DTB<5){
		printf("Yeu");
	}
	else if(7<=DTB && DTB<8){
		printf("kha");
	}
	else if(5<=DTB && DTB<7){
		printf("TB");
	}
	else if(8<=DTB && DTB<9){
		printf("gioi");
	}
	else{
		printf("xuat xax");
	}
	return 0;
}
