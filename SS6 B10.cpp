#include <stdio.h>
//2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97
int main(){
	int n;
	printf("moi ban nhap  1 so nguyen to bat ki tu 1 den 99!!\n");
	scanf("%d",&n);
	switch(n){
		case 2: case 3: case 5: case 7: case 11: case 13: case 17: case 19: case 23: case 29: case 31: case 37: case 41: case 43: case 47: case 53: case 59: case 61: case 67: case 71: case 73: case 79: case 83: case 89: case 97: 
			printf("Day la so nguyen to!!");
			break;
		
		default:
			printf("Day khong phai la so nguyen to ");
			 
	}
	return 0; 
} 
