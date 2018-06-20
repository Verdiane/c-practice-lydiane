#include<stdio.h>
int main(){
	int  i, n , factorial = 1;
	printf("Enter a number :\n");
	 scanf("%d", &n);
	 for (i=1; i<=n; i++)
	 {
	 	factorial= factorial*i;
	 	printf("factorial of %d is %d\n", i, factorial );
	 }
	 return 0;
}