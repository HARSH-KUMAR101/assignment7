#include<stdio.h>
#include<conio.h>
int main()
{
 int a,n,loop=1,num,i,rem=0,count=0,sum=0;
    printf("enter a num to check whether it is armstrong or not:");
    scanf("%d",&num);
    a=num;
    while(a!=0){
       a=a/10;
       count++;
    }
    a=num;
     while(a!=0){
        rem=a%10;
     n=rem;
       while(loop<count){
          rem=rem*n;
          loop++;
       }loop=1;
        sum=sum+rem;
        a=a/10;
     }
     if(sum==num)
        printf("%d is an armstrong number",sum);
     else
        printf("%d is not an armstrong number",sum);
  return 0;
}
