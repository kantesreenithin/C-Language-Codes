#include<stdio.h>

int main()
{
    int a,b;
    float c,d;

    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);  //https://www.hackerrank.com/challenges/sum-numbers-c/problem

   printf("%d %d\n",a+b,a-b);
   printf("%0.1f %0.1f",c+d,c-d);

   return 0;
}
