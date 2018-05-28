#include<stdio.h>
int main(){
	int WeightInPounds, heightInInches;
	float BMI_VALUE;
	int Underweight, Normal, Overweight, Obese;
	printf("Enter your WeightInPounds:\n");
	scanf("%d",&WeightInPounds);
	printf("Enter your heightInInches\n");
	scanf("%d",&heightInInches);
	BMI_VALUE=WeightInPounds*703/(heightInInches*heightInInches);
	printf("Your BMI_VALUE is %f\n",BMI_VALUE);
	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");
	return 0;
}