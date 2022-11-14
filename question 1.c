//Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
#include<conio.h>
int main()
{
  int num,i,a=1,b=0,c;
    printf("enter a num");
    scanf("%d",&num);
       for(i=1;i<=num;i++){
           c=a+b;
          a=b;
          b=c;
       }
         printf("%dth term of the fibonnaci series is %d",num,c);
  return 0;
}
