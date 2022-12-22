#include<stdio.h>
int main()
{
    int n,q,sq,s=1;
    scanf("%d",&n);
    q=n;
    sq=n*n;
    while(n!=0)
    {
        s=s*10;
        n=n/10;
    }
    if(sq%s==q)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}