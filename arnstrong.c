//Basic prograqm to check if a number is arnstorng or not .//
//Arnstrong is a number whose sum of cubes of digits will be equal to the initial number.// 
#include<stdio.h>
void main(){
int a,b=0,n,rem;
printf("Please enter number to be checked");
scanf("%d",&a);
//Input is assigned to another variable to check if its arnstrong//  
n = a;
while(a>0)
	{
	rem=a%10;
	b=b+(rem*rem*rem);
	a=a/10;
 	}

if (b==n) 
	printf("number %d is an arnstrong number",n);
	
else 
	printf("Given Number %d is not an arnstrong number",n);

}
