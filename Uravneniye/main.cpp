#include <stdio.h>
#include <math.h>


int main()
{
double a=0,b=0,c=0,x1=0,x2=0;
int solves;

printf("Enter three coefficients\n");
printf("a= ");
scanf("%lg",&a);
printf ("b= ");
scanf("%lg",&b);
printf("c= ");
scanf("%lg/n",&c);

int LineRoot(double b,double c,double* x1); /* Function to solve line equation */
int SolveSquare (double a,double b,double c,double* x1,double* x2); /* Function to solve square equation */

solves = SolveSquare(a,b,c,&x1,&x2); /*number of roots*/


switch (solves)
{
case 0 :
 printf("No solves");
break;
case 1:
 printf ("Your equation have only one root:%lg",x1);
break;
case 2:
 printf ("Your eguations are:%lg and %lg",x1,x2);
break;
case -1:
 printf ("Infinity solves");
break;
}
}
int SolveSquare (double a,double b,double c,double* x1,double* x2)
{
int LineRoot(double b,double c,double** x1);
if (a==0)
 return LineRoot(b,c,&x1);
else
   {
  int d=0;
  d=b*b-4*a*c;
   if (d<0)
     {
    return 0;
     }
   if (d>0)
     {
      *x1=(-b+sqrt(d))/2/a;
      *x2=(-b-sqrt(d))/2/a;
      return 2;
     }
    if (d==0)
     {
      *x1=(-b/2/a);
     return 1;
     }
    }
}
int LineRoot(double b,double c,double** x1)
{
if (b==0)
  {
  if (c==0)
   return -1;
  else
    return 0;
     }
else
  {
     **x1=-c/b;
      return 1;}
}







