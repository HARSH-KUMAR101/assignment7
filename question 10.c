//Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
#include<conio.h>
int main()
{
 int i,r,sum,x;
    printf("armstrongs num under 1000 are:\n");
       for(i=1;i<=1000;i++){
            sum=0;
            x=i;
           while(x!=0){
            r=x%10;
            sum=sum+r*r*r;
            x=x/10;
           }
           if(sum==i)
             printf("%d\n",i);
       }
 return 0;
}
