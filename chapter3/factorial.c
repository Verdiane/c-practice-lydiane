#include<stdio.h>
int main(){
	int n, i;
	unsigned long long factorial=1;
	  printf("Enter an integer:\n");
	  scanf("%d", &n);
	  if ( n < 0)
	  	printf("Error! factorial of a negative number does not exist.\n");
	 else
	 	 { 
	 	 	for(i=1; i<=n; ++i)
	 	 	{
                factorial *=i;
	 	 	}
	 	 	 printf("factorial of %d= %llu\n", n,factorial);
	 	 }
            return 0;
}