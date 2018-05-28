#include<stdio.h>
int main(){
	int integer1, integer2, remainder;
	printf("Enter integer1\n");
	scanf("%d",&integer1);
	printf("Enter integer2\n");
	scanf("%d",&integer2);
	remainder=integer1%integer2;
	if (remainder==0)
		{printf("integer1 is a multiple of integer2\n");
}else{printf("integer1 is not a multiple of integer2\n");
}
return 0;
}