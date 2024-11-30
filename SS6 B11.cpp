#include <stdio.h>

int main(){
	int n;
	printf("moi ban nhap so n: ");
	scanf("%d",&n);
	for(int i=n;i<=99;i++){
		if(i==2||i==3 || n>1 && i%2!=0){
			printf("%d la so nguyen to dau tien cua %d",i,n);
			return 0;
		} 
	}
	return 0; 
} 
