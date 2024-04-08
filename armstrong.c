#include<stdio.h>
void main(){
int a,b=0,n,rem;
printf("Please enter number to be checked");
scanf("%d",&a);
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
