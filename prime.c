#include<stdio.h>
void main(){
int b=0,n,i;
printf("Please enter number to be checked");
scanf("%d",&n);
if (n==1)
	printf("Number 1 is neither prime nor composite");
else if (n==2)
	printf("Number 2 is first prime number");
else if (n>2)
{
	for(i=3;i<=n/2;i++)
	{
		if (n%i==0)
			{b=1;
			break;}
	}
	if(b==0) 
		printf("Number is prime");
	else 
		printf("Number is Composite");
		}
else
	{printf("Number is invalid");}
}
