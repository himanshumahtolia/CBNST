#include<stdio.h>
//main function
int main()
{
//declaring the variables
int i,j=1,n,c1=1,c2=0;
float x,x1[10],y[10],d[10],p=1,s=0;
//taking the number of values
printf("\nEnter the number of values: ");
scanf("%d",&n);
//taking the values of x and f(x)
printf("\nEnter the values of x and f(x): ");
printf("\nx\tf(x)\n");
for(i=0;i<n;i++)
scanf("%f %f",&x1[i],&y[i]);
//taking the value of x for which y is to be calculated
printf("\nEnter the value of x to find y: ");
scanf("%f",&x);
s=y[0];
//performing newton’s divide difference
do
{
for(i=0;i<n-1;i++)
{
d[i]=((y[i+1]-y[i])/(x1[i+j]-x1[i]));
y[i]=d[i];
}
c1=1;
for(i=0;i<j;i++)
c1*=(x-x1[i]);
c2+=(y[0]*c1);
n--;
j++;
}while(n!=1);
//calculating the final value
s+=c2;
//printing the result
printf("y(%f)=%f",x,s);
return 0;
}
