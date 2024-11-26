#include <stdio.h> 
 
int main(){
	int year,month,day;
	printf("moi ban nhap nam ");
	scanf("%d",&year);
	printf("moi ban nhap thang ");
	scanf("%d",&month);
	switch(month){
		case 1 : case 3 : case 5 : case 7 :  case 8 : case 10 : case 12 :
			if(year%4 == 0 && year%100 != 0 || year%400 == 0){
				printf("thang %d co 31 ngay va nam %d co 366 ngay(vi la nam nhuan)",month,year);   
			} else{
				printf("thang %d co 31 ngay va nam %d co 365 ngay",month,year); 	
			} 
			break; 
		 case 4 : case 6 : case 9 : case 11 :
		 	if(year%4 == 0 && year%100 != 0 || year%400 == 0){
				printf("thang %d co 30 ngay va nam %d co 366 ngay(vi la nam nhuan)",month,year);   
			} else{
				printf("thang %d co 30 ngay va nam %d co 365 ngay",month,year); 	
			} 
			break; 
		case 2 :
			if(year%4 == 0 && year%100 != 0 || year%400 == 0){
				printf("thang %d co 29 ngay va nam %d co 366 ngay(vi la nam nhuan)",month,year);   
			} else{
				printf("thang %d co 28 ngay va nam %d co 365 ngay",month,year); 	
			} 
			break; 
		default:
			printf("so thang ban nhap khong hop le");
	} 
	return 0; 
}
