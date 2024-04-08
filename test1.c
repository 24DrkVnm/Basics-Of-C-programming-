#include<stdio.h>
void main(){
	int roll;
	float m1,m2,m3,A;
	printf("Enter your roll\n");
	scanf("%d",&roll);
	printf("please enter marks\n");
	scanf("%f",&m1);
	printf("please enter marks\n");
	scanf("%f",&m2);
	printf("please enter marks\n");
	scanf("%f",&m3);
	
	A=(m1+m2+m3/300)*100;
	printf("%f",A);


}
