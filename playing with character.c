https://www.hackerrank.com/challenges/playing-with-characters/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char ch,s[10],sen[100];
    scanf("%c",&ch);
    printf("%c\n",ch);
    scanf("%s",&s);
    printf("%s",s);
    scanf("%[^/n]s",&sen);
    printf("%s",sen);
    return 0;

}



