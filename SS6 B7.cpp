#include <stdio.h>

int main(){
	int num;
	printf("noi ban nhap so can tim uoc ");
	scanf("%d",&num);
	for(int i = 1;i<=num;i++){
		if(num%i==0){
			printf(" %d ",i);
			
		}
	}
	
	return 0;

}
