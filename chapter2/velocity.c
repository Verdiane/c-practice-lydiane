#include<stdio.h>
int main(){
	int v, u ,a ,t, s;
	printf("Enter the initial velocity :\n");
	scanf("%d",&u);
	printf("Enter the acceleration:\n");
	scanf("%d",&a);
	printf("Enter the time elapsed; \n");
	scanf("%d",&t);
	v=u+a*t;
	printf("final velocity is %d\n",v );
	s=u*t+((a*t*t)/2);
	printf("distance travelled is %d\n", s);
	return 0;
}

