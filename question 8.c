//Write a program to find next Prime number of a given number
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,num,j;
    printf("enter a num:");
    scanf("%d",&num);
      for(i=num+1;i;i++){
        for(j=2;j<=i;j++){
           if(i%j==0)
              break;
        }
        if(i==j){
           printf("%d is the next prime num of given number",i);
           break;
        }
      }
  return 0;
}
