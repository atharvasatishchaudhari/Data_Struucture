#include <stdio.h>
#include <stdlib.h>

int sum(int);

void main(void)
{
    int s;
    printf("Please enter the n for which you want the sum :- ");
    scanf("%d",&s);
    int summation;
    summation=sum(s);
    printf("The sum of first %d number is %d", s, summation);

    return;
}

int sum (int n)
{
    if(n<1)
    {
        return 0;
    }
    return n+sum(n-1);
}
