#include <stdio.h>

int main(){
	int n[3], sum,op=0;
	for(int i=0;i<3;i++){
		printf("moi ban nhap so thu %d ",i+1);
		scanf("%d",&n[i]); 
	}
	for(int i=0;i<3;i++){
		sum=1; 
		for(int j=0;j<3;j++){
			sum*=n[i];
		}
		op += sum;
	}
	printf("%d",op);
	return 0; 
}
