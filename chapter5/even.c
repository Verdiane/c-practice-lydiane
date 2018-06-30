#include <stdio.h>

//int isEven(int num );
//int num;
 int main(){
printf("Enter a number:\n");;
   scanf("%d\n", &num);
   if (isEven(num)){
   	printf("The number is even\n");
   }
   else {
   	printf("The number is odd\n");
   }
 }
 
  int isEven(int num){
  	if (num % 2 == 0){
  		return 1;
  	} else
       return 0;
  }