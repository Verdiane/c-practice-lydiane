#include<stdio.h>
int main(){
	float fahrenheit, celcius;
	printf("%4s%21s\n","celcius", "fahrenheit");
	 for (celcius =30; celcius<=75; ++celcius ){
	 	fahrenheit = celcius*(9.0f/5.0f) + 32.0f;
	 	printf("%4.1f%21.2f\n", celcius, fahrenheit);
	 }
	 return 0;
}