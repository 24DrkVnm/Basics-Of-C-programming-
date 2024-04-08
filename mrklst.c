#include<stdio.h>
void main()
{
	int roll;
	float Sub1,Sub2,Sub3,prcnt,total;
	
	printf("please enter the roll number");
	scanf("%d",&roll);
	printf("please enter marks of first subject");
	scanf("%f",&Sub1);
	printf("please enter marks of first subject");
	scanf("%f",&Sub2);
	printf("please enter marks of first subject");
	scanf("%f",&Sub3);
	
	total = Sub1+Sub2+Sub3;
	prcnt = (total/300)*100;
	
	if (prcnt>90){
	printf("\nGrade is A+");
	}
	if ((prcnt>80) && (prcnt<=90)){
	printf("\nGrade is A");
	}
	if ((prcnt>70) && (prcnt <=80)){
	printf("\nGrade is B+");
	}
	if ((prcnt>60) && (prcnt <=70)){
	printf("\nGrade is B");
	}
	if ((prcnt>50) && (prcnt <=60)){
	printf("\nGrade is C+");
	}
	if ((prcnt>40) && (prcnt <=50)){
	printf("\nGrade is C");
	}
	if (prcnt<40){
	printf("\nStudent has failed");
	}
	
	
	
}
