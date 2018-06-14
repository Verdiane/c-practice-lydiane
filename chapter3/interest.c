#include<stdio.h>
 int main(){
 	float principal, rate, interest;
 	int days;

 	printf("Emter loan principal(-1 to end):\n");
 	 scanf("%f",&principal);
 	 printf("Enter interest rate:\n");
 	  scanf("%f", &rate);

 	  printf("Enter term of loan in days:\n");
 	  scanf("%d", &days);

 	     if (principal!=-1){

 	     	  interest=principal*rate*days/365;

 	     	  printf("The interest charge is %.1f\n",interest );
 	     }
 	       return 0;
 	   }