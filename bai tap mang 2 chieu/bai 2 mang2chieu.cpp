	#include<stdio.h>
	void nhap(int a[][4], int ghethoc, int ghetbaitap, char ten ){
		printf("nhap vao ma tran %c:\n", ten);
		for(int i=0; i<ghethoc; i++){
			for(int j=0; j<ghetbaitap; j++){
				printf("%c[%d][%d]= ", ten,i,j);
				scanf("%d", &a[i][j]);
			}
		}
	}
	int  xuat(int a[][4], int ghethoc, int ghetbaitap){
		for(int i=0; i<ghethoc;i++){
			for(int j=0; j<ghetbaitap; j++){
				printf("%3d", a[i][j]);
			}
			printf("\n");
		}
	}
	void tinhtong(int a[][4], int b[][4], int c[][4] ,int ghethoc, int ghetbaitap){
		for(int i=0; i<ghethoc; i++){
			for(int j=0; j<ghetbaitap; j++){
			c[i][j]=a[i][j] +b[i][j];	
			}
		}
		
	}
	int main(){
		int ghethoc, ghetbaitap;
		printf("nhap vao so luong cac phan tu:");
		scanf("%d%d", &ghethoc, &ghetbaitap);
		int a[3][4], c[3][4], b[3][4];
		nhap(a,ghethoc, ghetbaitap, 'A');
		nhap(b,ghethoc, ghetbaitap, 'B');
		printf("ma tran A la:\n");
		xuat(a,ghethoc,ghetbaitap);
		printf("ma tran B la:\n");
		xuat(b,ghethoc,ghetbaitap);
		tinhtong(a,b, c,ghethoc,ghetbaitap);
		printf("tong A+B la:\n");
		xuat(c,ghethoc, ghetbaitap);
	
		return 0;
	}
