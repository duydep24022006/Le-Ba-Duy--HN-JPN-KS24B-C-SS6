#include <stdio.h>

 int main(){
 	int i=0,n,j=0,k=0;
	 do{
	 	i++; 
	 	printf("moi ban nhap so thu %d\n ",i);
	 	scanf("%d",&n); 
			if(n % 2 != 0) {
				j++; 
			}else{
				k++;	
			} 
	 }while(i!=5);
	 printf("co %d chan va co %d so le",k,j);
	 
	 return 0; 
}

