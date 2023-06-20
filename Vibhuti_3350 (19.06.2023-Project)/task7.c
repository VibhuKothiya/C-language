#include<stdio.h>
// Write C program print out Fibonacci series. (0,1,1,2,3,5,8…)

	int main(){
		
		int n, t1=0, t2=1, t3, i;
		
		printf("enter the number: ");
		scanf("%d", &n);		//6
		
		printf("%d\t", t1);    	//0
		printf("%d\t", t2);		//1
		
		for(i=3; i<=n; i++){		
			
			t3=t1+t2;			//t3=1
			
			printf("%d\t", t3);
			
			t1=t2;				//t1=0	
			t2=t3;				//t2=1					
		}
		
		return 0;
	}
