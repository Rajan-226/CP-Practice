#include <stdio.h>

int main()
{
    long long int m=0,i,j,k,l;
    scanf("%lld %lld",&i,&j);
    for(k=1;k<=i;k++)
    {
        l=k%5;
        m=m+(j+l)/5;
    }
    printf("%lld",m);

    return 0;
}