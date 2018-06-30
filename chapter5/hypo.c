#include <stdio.h>
#include <math.h>

 double hypothenuse(double y);
 double base;
 double height;
  double y;
  int main(void){
  	 
  	 
  	 printf("Enter the base of triangle: \n");
  	  scanf ("%lf", &base);
  	  printf("Enter the height of triangle:\n");
  	  scanf("%lf", &height);

  	   
  	     printf("Hypothenuse is %.2f\n", hypothenuse(y));

  }

   double hypothenuse(double y){ 
  	y = (base*base + height*height);
      return sqrt(y);
  
   }  
