#include <stdio.h>

int main(void)
{

  int size;
  int array[10];
   int  array1[10];
  printf("Enter the number of elements in the array:\n");
   scanf("%d",  &size);

   size_t i;
   size_t x;

   printf("Enter  the %d integers\n",size );
   for (i = 0; i < size; i++){
   	scanf("%d",&array[i]);
   }
     printf("Enter the other %d integers\n", size );
      for ( x = 0; x < size; x){
      	scanf("%d", &array1[x]);
      }
     
       for (i = 0; i < size; i++){
       	for (x = 0; x < size; x++){

       if (array[i] == array1[x]){
        printf("The Common elements are :\n");
       	printf(" %d\n", array[i]);
       }
   } 
  }
        	return 0;

}