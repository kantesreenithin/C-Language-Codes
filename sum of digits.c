//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem
#include <stdio.h>
#include <string.h>    
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0, x; 
    
    scanf("%d",&n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n!=0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;

    }
    printf("%d",sum);
    return 0;
}