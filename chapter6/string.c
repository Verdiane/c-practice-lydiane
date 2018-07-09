#include <stdio.h>
#include <string.h>
#define SIZE 30	
 

   int main(void){  

   	char string[SIZE];
   	int j = 0;
   	 size_t i;
  
   	 printf("%s","Enter a string not more than 29 letters: \n");
   	 scanf("%29s", string);
   	 j = strlen(string)-1;

  printf("The string from back to end is : ");
  for ( i = j; i >= 0 && string[i] != '\0'; i--){
  	printf(" %c", string[i] );
  }
    puts(""); 
   }
   