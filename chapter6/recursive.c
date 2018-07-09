#include <stdio.h>

  int findMinimum(int[], int);
  int main(){
  	int i, array[100], size, location, minimum;

  	printf("Enter number of elements in array\n");
  	scanf("%d", &size);

  	  printf("Enter %d integers\n", size);

  	   for (i=0; i < size; i++){
  	   	scanf("%d", &array[i]);
  	   }
  	   	 location = findMinimum(array, size);
  	   	 minimum = array[location];

  	   	 printf("Minimum element location = %d and value = %d\n",location + 1, minimum );
  	   	 return 0;
  	   
  }
    int findMinimum(int a[], int n){
    	int i, min, index;
    	min  = a[0];
    	index = 0;
    	 for (i = 1; i < n; i++){
    	 	if (a[i] < min){
    	 		index = i;
    	 		min = a[i];
    	 	}
    	 }
    	   return index;
    }