#include <stdio.h>
unsigned int lcm(int x, int y);
int num1;
	int num2;
int main(void){
	
	printf("Enter two integers:\n");
	scanf("%d%d",&num1, &num2);

	 printf("lcm is : %d\n", lcm(num1, num2) );
}
unsigned int lcm(int x, int y)
 { 
 	int i, lcm, gcd;
 	for (i =1, i<= num1 && i <= num2; ++i;){
 		if (num1 % i == 0 && num2 % i == 0)
 		gcd = i;
 }
  lcm = (num1 * num2)/gcd;
   return lcm;
  }