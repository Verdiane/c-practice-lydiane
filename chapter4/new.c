#include<stdio.h>
int main(){
	int i, n, count;
	printf("Prime number from 1 to 100 are: \n");
	 for ( n =1; n<=100; n++){
	 	count=0;
	 	for (i = 2; i<=2; i++){
	 		if(n%i == 0)
	 		{
	 			count++;
	 			 break;
	 		}
	 	}
	 	  if(count == 0 && n !=1){
	 	  	printf("%d\n",n );
	 	  }
	 }
	  return 0;
}