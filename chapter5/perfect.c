#include<stdio.h>
int isPerfect(int num);
void printPerfect(int a, int b);
	
int main(){
	int a, b;
	printf("Enter least number to print:\n");
	 scanf("%d", &a);
	 printf("Enter highest number to print:\n");
	 scanf("%d", &b);


printf("All perfect numbers between %d to %d are:\n", a, b );
	isPerfect(a);
   return 0;	
}

  int isPerfect(int num){
  int  i;
  int  sum = 0;
   for (i=1; i<num; i++){
   	if (num % i==0){
   		sum +=1;
   	}
   }

     if (sum == num){
     	return 1;
     }  else
     return 0;
}

void printPerfect(int a, int b)

    { 
    	while (a<=b){

	if(isPerfect(a)){
	           
	           printf("%d, ", a);
}
    a++;
}
}