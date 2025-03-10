#include<stdio.h>
#include<math.h>
int main(){
 int thang, nam, songay;
 printf("nhap vao so thang, so nam:\n");
 scanf("%d %d", &thang, &nam);
 if(1<=thang && thang<=12){
 
 
 switch(thang){
 
 case 1:
 case 3:
 case 5:
 case 7:
 case 8:
 case 10:
 case 12:
 songay=31;
 break;
 case 4:
 case 6:
 	case 9:
 		case 11:
 		songay=30;
 		break;
 		case 2:
 		if((nam%4==0) || (nam%4==0 && nam%100!=0))	
		 
 		songay=29;
 		else
 		songay=28;
 		break;}
 		printf("thang%d nam%d co%dngay \n", thang,nam,songay);}
 		else
 		printf("thang khong hop le");
 
  return 0;
}
 
