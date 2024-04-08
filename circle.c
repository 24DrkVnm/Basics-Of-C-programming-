#include<stdio.h>
void main()
{ float r ;
  float area , circum;
  float pi = 3.14 ;
  printf("enter radius ");
  scanf("%f" , &r);
  area = pi*r*r; 
  printf("Area of circle is %f " , area);
  circum = 2*pi*r;
  printf("\ncircumference of circle is %f " , circum);
}
