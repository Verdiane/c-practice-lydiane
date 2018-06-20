#include<stdio.h>
int main(){
	int  i, n;
	int sum =0;
  int square=0;
	int cube = 0;

  printf("Enter a positive number :");
  scanf("%d", &n);
   i=1;
    while (i <= n)
  	{
      sum +=i;
      square +=(i*i);
      cube +=(i*i*i);
        ++i;
    }
  
  printf("sum = %d\n, square = %d\n, cube = %d\n", sum, square, cube);
 

    return 0;

}