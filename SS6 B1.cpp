#include <stdio.h>

 int main(){
 	int i=0, n,sum=0;
	 do{
	 	i++; 
	 	printf("moi ban nhap so thu %d\n ",i);
	 	scanf("%d",&n); 
			if(n % 2 != 0) {
				sum += n; 
			} 
	 }while(i!=5);
	 printf("tong so le cua ban la %d",sum);
	 
	 return 0; 
}

