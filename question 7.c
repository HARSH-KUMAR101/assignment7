//Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,num1,num2;
      printf("enter range of two  num to find prime numbers:");
      scanf("%d%d",&num1,&num2);
      for(i=num1;i<=num2;i++){
        for(j=2;j<=i;j++){
          if(i%j==0)
             break;
        }if(i==j)
          printf("%d\n",i);
      }
 return 0;
}
