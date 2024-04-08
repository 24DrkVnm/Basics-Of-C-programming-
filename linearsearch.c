#include<stdio.h>
void main(){
int n,ToSearch,flag=0,i;
printf("please enter the total number of elements in array");
scanf("%d",&n);
int a[n];
printf("Please enter the elements of array");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);}
printf("enter number to be searched");
scanf("%d",&ToSearch);
 for(i=0;i<n;i++){
 	if(a[i]==ToSearch)
 		flag = flag+1;}
 printf("Number was found %d times",flag);
 }
