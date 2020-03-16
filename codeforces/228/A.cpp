#include <stdio.h>
int main()
{
    long long int a,b,c,d;
    int r=0;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(a==b||a==c||a==d)
    r++;
    if(b==c||b==d)
    r++;
    if(c==d)
    r++;
    printf("%d",r);
}
