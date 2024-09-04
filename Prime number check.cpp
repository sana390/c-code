#include<stdio.h>
int main(){
	int num, temp=0;
	printf("Enter any number:");
	scanf("%d", &num);
	for(int i=2; i<=num/2; i++){
		if(num % i == 0){
			temp++;
			break;
		}
	}
	if(temp == 0 && num != 1)
	printf("%d is prime number",num);
	else
	printf("%d is not a prime number",num);
	return 0;
}
