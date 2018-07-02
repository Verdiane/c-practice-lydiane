#include <stdio.h>
#include <math.h>
   double disc;
  double r1(double a, double b, double c);
  double r2(double a, double b, double c);
    double discriminant( double a, double b, double c);
     double a, b , c;
  
  int main(void){
 	printf("Enter  three  coefficients of the equation:");
 	scanf("%lf %lf %lf", &a, &b, &c);
 	 
 	 discriminant(a, b,c);
 	
 	if ( discriminant <= 0){
 		printf("The equation has imaginary or complex roots\n");
 	} 
 	else if ( discriminant > 0) {
 		printf("The roots of the equation are real\n");
 	} 
 	r1(a,b,c);
      r2(a,b ,c);
 	   printf(" roots are: %lf and %lf\n", r1(a,b,c), r2(a,b,c));
return 0;
}

   double discriminant(double a, double b, double c ){
   	 disc = ((b*b) - (4.0 * a * c));
   	   return disc;
}
  double r1(double a, double b, double c){
  	double y;
  	y = (-b + (sqrt(disc)))/(2.0*a);
  	return y;
  }
    double r2(double a, double b, double c) {
    	double z;
    	z = (-b - (sqrt(disc)))/(2.0*a);
    	return z;
    } 