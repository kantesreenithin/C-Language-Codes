//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem
#include <stdio.h>
#include<stdlib.h>

void update(int *a,int *b) {
    // Complete this function 
    *a=(*a) + (*b);
    *b=abs(*a-*b-*b); //here 2 times *b because *a is updated 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

