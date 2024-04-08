#include<stdio.h>
void main(){
	int a,b,c;
	printf ("Please enter the first number");
	scanf ("%d", &a);
	printf ("Please enter the second number");
	scanf ("%d", &b);
	printf ("Please enter the third number");
	scanf ("%d", &c);
	
	if ((a>b) && (a>c) )
	printf("%d s the greatest",a);
	
	else if ( (b>a) && (b>c))
	printf("%d is greatest",b);
	
	else 
	printf("%d is the greatest",c);
	




}
