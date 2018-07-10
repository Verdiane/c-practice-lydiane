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
   	scanf("%d", &array[i]);
   }

     printf("Enter the other %d integers\n", size );
      for ( x = 0; x < size; x++){
      scanf("%d", &array1[x]);
      }

  printf("All the integers are :\n") ;
  for(i = 0; i < size; i++) {
    printf("%d", array[i]);
  }
    for ( x = 0; x < size; x++){
      printf("%d",array1[x] );
    }
      puts("");
      return 0;
}