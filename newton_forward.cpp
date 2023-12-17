 // Newton forward interpolation method

#include <stdio.h>
#include <math.h>
int main () 
{
  
float a[10][10], x, y;
  
int i, j, n, n1;
  
printf ("enter the n:- \n");
  
scanf ("%d", &n);
  
printf ("enter the x:\n ");
  
for (i = 0; i < n; i++)
    
scanf ("%f", &a[i][0]);
  
printf ("enter the y:\n ");
  
for (i = 0; i < n; i++)
    
scanf ("%f", &a[i][1]);
  
printf ("enter the value to predict\n");
  
scanf ("%f", &x);
  
for (j = 2; j < n + 1; j++)
    
    {
      
for (i = 0; i < n - j + 1; i++)
	
a[i][j] = a[i + 1][j - 1] - a[i][j - 1];
    
}
  
printf ("the differnce table is \n");
  
for (i = 0; i < n; i++)
    
    {
      
for (j = 0; j <= n - i; j++)
	
	{
	  
printf ("%0.2f\t\t", a[i][j]);
	
}
      
printf ("\n");
    
}
  
float u = (x - a[0][0]) / (a[1][0] - a[0][0]);
  
float u1 = u;
  
y = a[0][1];
  
int fact = 1;
  
for (int i = 2; i <= n; i++)
    {
      
y += (u / fact) * a[0][i];
      
fact = fact * i;
      
u = u * (u1 - (i - 1));

} 
     printf("Predicted value at  %.2f is %.4f",x,y);

 
}
