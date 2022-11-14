//Write a program to check whether a given number is there in the Fibonacci series or not.

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
        if(num==c || c>num)
            break;
       }if(num==c)
          printf("%d is available in the fibonnaci series",num);
        else
          printf("%d is not available in the fibonnaci series",num);
return 0;
}

