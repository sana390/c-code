#include<stdio.h>
 void bubble_sort(int arr[],int n){
 	for(int i= n-1; i>=0; i--){
 		for(int j =0; j<=i-1; j++){
 			if(arr[j]>arr[j+1]){
 				int temp = arr[j];
 				arr[j] =arr[j+1];
 				arr[j+1] = temp;
			 }
		 }
	 } 
 }
 int main(){
 	int n;
 	printf("Enter n:");
 	scanf("%d",&n);
 	int arr[n];
 
 	for(int i=0; i<n; i++){
 		scanf("%d",&arr[i]);
	 }
	 bubble_sort(arr,n);
     printf("Array after sorting:\n");
	 for(int i= 0; i<n; i++){
	 	printf("%d\n",arr[i]);
	 }
	 return 0;
 }
