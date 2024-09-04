#include<stdio.h>
int main(){
	int n, rev=0, rem, org;
	printf("Enter an integer:");
	scanf("%d",&n);
	org = n;
	while(n!=0){
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
		if(org == rev)
		printf("palindrome number");
		else
		printf("Not palindrome");

return 0;
}
