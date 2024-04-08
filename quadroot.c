#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float r1,r2,d;
	printf("please enter a number");
	scanf("%d",&a);
	printf("please enter a number");
	scanf("%d",&b);
	printf("please enter a number");
	scanf("%d",&c);
	d=(b*b)-(4*a*c);
	if(d>0)
	{
	r1=(-b-sqrt(d))/(2*a);
	r2=(-b+(sqrt(d)))/(2*a);
	printf("%f \n %f \nroots are real and distinct",r1,r2);
	}
	else if(d==0)
	{
	r1=(-b-sqrt(d))/(2*a);
	r2=r1;
	printf("%f \n %f \n roots are real and equal",r1,r2);
	}
	else
	printf("no real roots, roots are imaginary");
}	
	
