#include<stdio.h>
int main(){
	float radius;
	float diameter, circumference, area;
	printf("Enter the radius of the circle\n");
	 scanf("%f", &radius);

	   diameter = radius/2.0;
	   printf("diameter is %f\n",diameter);

        circumference=2*3.14159*radius;
        printf("circumference is %f\n", circumference);

          area=3.14159*radius*radius;
           printf("area of the circle is %f\n", area);

              return 0;
}