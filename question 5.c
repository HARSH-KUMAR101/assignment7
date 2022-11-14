//Write a program to check whether two given numbers are co-prime numbers or not
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
       }if(i==1)
        printf("%d and %d are co-prime numbers ",a,b);
        else
        printf("%d and %d are not co-prime numbers ",a,b);
return 0;
}
