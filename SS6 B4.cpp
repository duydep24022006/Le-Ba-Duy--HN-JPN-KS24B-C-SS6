#include <stdio.h>
#include <math.h> 

int main(){
	int a, b, c;
	float delta, x1, x2;
 	printf("moi ban nhap a ");
	scanf("%d",&a);
	printf("moi ban nhap b ");
	scanf("%d",&b);
	printf("moi ban nhap c ");
	scanf("%d",&c);
	
	
	if(a==0){
		printf("day khong phai phuong trinh bac 2"); 
	}else{
		delta = b * b - 4 * a * c;
		if(delta < 0){
			printf("phuong trinh vo nghiem"); 
		}else if(delta > 0){
			x1=(-b + sqrt(delta)) / (2 * a);
			x2=(-b - sqrt(delta)) / (2 * a);
			printf("Nghiem 1: %.2f, Nghiem 2: %.2f\n",x1,x2);
		} else{
			float x1 = -b / (2.0 * a);
			printf("Nghiem kep: %.2f\n",x1);
			}
	}
	return 0; 	
		
} 


