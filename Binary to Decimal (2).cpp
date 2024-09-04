#include<stdio.h>
int main(){
	long long binaryNumber;
	int decimalNumber =0, base =1, remainder;
	printf("Enter a binary number: ");
	scanf("%lld", &binaryNumber);
	while(binaryNumber>0){
		remainder= binaryNumber%10;
		decimalNumber = decimalNumber+remainder*base;
		base = base*2;
		binaryNumber = binaryNumber/10;
	}
	printf("Decimal equivalent: %d\n", decimalNumber);
	return 0;
}
