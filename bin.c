#include<stdio.h>
int bin(int n)
{
    if(n>1)
        bin(n/2);
    printf("%d",n%2);
}

int main()
{
    bin(7);
    printf("\n");
    bin(128);
}
