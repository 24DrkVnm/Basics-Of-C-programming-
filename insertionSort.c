#include<stdio.h>
void main()
{
 	int i,j,n,temp,space=0,time=0;
 	printf("Enter the no. of elements in the array \n");
	scanf("%d",&n);
	time+=2;
	space=n*4;
	int arr[n];
	printf("enter the elements of the array \n");
	time++;
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
		time++;
		time++;
	}
 	for(i=1;i<=n-1;i++)
 	{
 		temp=arr[i];
 		j=i-1;
 		while((j>=0) && (temp<arr[j]))
 		{
 			arr[j+1]=arr[j];
 			j--;
 		}
 		arr[j+1]=temp;
 	}
 	
 	for(i=0;i<=n-1;i++)
	{
		printf("%d",arr[i]);
		time++;
		time++;
	}
 }
