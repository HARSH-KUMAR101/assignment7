//Write a program to calculate HCF of two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,i;
    printf("enter first number to find hcf:");
    scanf("%d",&a);
    printf("enter second number to find hcf:");
    scanf("%d",&b);
       for(i=a<b?a:b;i>=1;i--){
        if(a%i==0 && b%i==0)
            break;
       }printf("hcf of %d and %d is %d\n",a,b,i);
return 0;
}
