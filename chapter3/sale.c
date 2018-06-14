#include<stdio.h>
 int main(){

 	float sales, commission, salary;

 	commission=200;
 	printf("%s", "Enter sales in dollars (-1 to end):" );
 	scanf("%f", &sales);
 	    if (sales !=-1){

 	    	 salary= commission+(sales*9.0/100.0);
 	    	 printf("salary(in $) is %.1f\n", salary);
 	    }
 	      return 0;
 }