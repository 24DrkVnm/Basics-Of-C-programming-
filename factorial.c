#include<stdio.h>
void main(){
int a,fact=0,i;
printf("Please enter number to be checked");
scanf("%d",&a);
for(i=1;i<=a;i++){
	fact=fact+i;	
	}
printf("Factorial is %d",fact);
}
