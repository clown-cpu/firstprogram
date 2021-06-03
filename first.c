#include<stdio.h>
#include<stdlib.h>

int absdiff(int n)
{
    if(n>21)
    {
        return 2*(n-21);
    }
    return (n-21);
}



void main()
{
   printf("%d",absdiff(19));
}