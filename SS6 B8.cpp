#include<stdio.h> 

int main(){
	int a[5];
	int size=sizeof(a) / sizeof(a[0]); 
	for(int i=0;i<size;i++){
		printf("nhap vao 1 so nguyen bat ki");
		scanf("%d",&a[i]);
	} 
	for(int i=0;i<size;i++){
		printf("%d ",a[i]);
	} 
	return 0; 
} 
