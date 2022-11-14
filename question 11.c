//Write a program to find the position of first 1 in LSB.
#include<stdio.h>
#include<conio.h>
int main()
{
 int a,n,count=0;

   printf("enter a num:");
   scanf("%d",&n);

    while(n!=0){
       count++;
        if(n&1==1){
          printf("%dst position is the first 1 LSB",count);
           break;
        }
        else
        n=n>>1;
    }
 return 0;
}
