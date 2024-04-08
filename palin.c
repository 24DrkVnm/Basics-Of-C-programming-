#include<stdio.h>
void main(){
int a,b=0,n;
printf("Please enter number to be checked");
scanf("%d",&a);
n = a;
while(a>0)
	{
	b=b*10+(a%10);
	a=a/10;
 	}

if (b==n) 
	printf("number is a palindrome");
	
else 
	printf("Given Number is not a palindrome");

}
