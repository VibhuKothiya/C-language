// 3. Write C program to right rotate an array.

 #include<stdio.h>

 int main(){
 	int arr[5]={11,22,33,44,55};
 	int i;
	int temp= arr[4];  	
 	
 	for(i=4; i>=1; i--){ 		
 		
 		arr[i]=arr[i-1];		
 		
	 }	
	 	arr[i]=temp;
	 	
	 for(i=0; i<=4; i++){ 		
 		
 		printf("%d\t", arr[i]);		
 		
	 }			
	 
 	
 	return 0;
 }
