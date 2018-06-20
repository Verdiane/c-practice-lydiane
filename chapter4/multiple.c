#include<stdio.h>
int main(){
	int multiple;
	 unsigned sum = 0;
	for (multiple=7; multiple<=100; multiple+=7){
		sum += multiple;
	}
	printf("sum is %u\n",sum);
	 return 0;

}