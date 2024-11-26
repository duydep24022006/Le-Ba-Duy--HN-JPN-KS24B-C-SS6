#include <stdio.h>

int main(){
	int n;
	
	for(n=1;n<=100;n++){
	
	if(n%5==0 && n%3==0){
		printf("FizzBuzz\n",n);
	} else if(n%5==0){
		printf("Buzz\n",n);
	} else if(n%3==0){
			printf("Fizz\n",n);
	}else {
		printf("%d\n",n); 
	} 
	} 

	return 0;
}
