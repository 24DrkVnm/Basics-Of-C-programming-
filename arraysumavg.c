//program to find sum and average of an array of n numbers//
#include<stdio.h>
void main(){
int n,i,sum=0;
float avg;
printf("please enter the total number of elements in array");
scanf("%d",&n);
//ARRAY IS INITIALIZED AFTER A VALU IS ASSIGNED TO VARIABLE N //
int a[n];
printf("Please enter the elements of array");
//FOR  LOOP IS INITIALIZED TO ENTER ELEMENTS INTO THE ARRAY ACCORDING TO NUMBER OF ELEMENTS(n) //
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	sum=sum+a[i];
	}
printf("sum of elements is %d",sum);
avg=sum/n;
printf("Average of given elements is %f",avg);
}
