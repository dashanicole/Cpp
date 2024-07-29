#include <stdio.h>
int divide(int x,int y,int quotient);
int getRem(int x,int y,int quotient,int product,int count,int remainder);

int main(){
int dividend,divisor,quotient=0,product=0,remainder,count=0;

printf("Input two positive numbers: ");
scanf("%d%d",&dividend,&divisor);
printf("\nDividend: %d\nDivisor: %d\nQuotient: %d",dividend,divisor,divide(dividend,divisor,quotient));
quotient=divide(dividend,divisor,quotient);
printf("\nRemainder: %d\n",getRem(dividend,divisor,quotient,product,count,remainder));
}
int divide(int x,int y,int quotient)
{
while(x>0){
      x-=y;
      quotient++;
      }
      if(x!=0)
        return quotient-1;
      else
        return quotient;
}
int getRem(int x,int y,int quotient,int product,int count,int remainder)
{
while(count!=y){
      product+=quotient;
      count++;
      remainder=x-product;
      }
      return remainder;	     
	         
return 0;
}

