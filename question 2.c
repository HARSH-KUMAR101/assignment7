//Write a program to print first N terms of Fibonacci series
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
        printf("%d\n",c);
       }
  return 0;
}
