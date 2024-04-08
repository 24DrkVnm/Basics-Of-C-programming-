#include<stdio.h>
void main(){
	float t,f;
	printf("Enter the temperature in celsius");
	scanf("%f",&t);
	f = (t*1.8)+32;
	printf("Temperature is %f in Farenheit",f);
}

