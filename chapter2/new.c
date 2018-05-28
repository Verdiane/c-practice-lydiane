#include<stdio.h>
int main()
{
	int number1;
	int  number2;
	int sum, product;
	float difference, quotient, remainder;
	printf("Enter number1:\n");
	scanf("%d",&number1);
	printf("Enter number2:\n");
    scanf("%d", &number2);
    sum = number1 + number2;
    printf("sum is %d\n",sum);
    product = number1 * number2;
    printf("product is %d\n", product);
   difference = number1 - number2;
    printf("difference is %f\n", difference);
    quotient = number1 / number2;
    printf("quotient is %f\n", quotient);
   remainder = number1 % number2;
    printf("remainder is %f\n", remainder);
    return 0;
}