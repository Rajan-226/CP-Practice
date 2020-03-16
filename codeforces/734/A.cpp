#include <stdio.h>

int main()
{
    int n,d=0,a=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(int i=0;i<n;i++)
    s[i]=='D'?d++:a++;
    if(d==a)
    printf("Friendship");
    else if(d>a)
    printf("Danik");
    else
    printf("Anton");

    return 0;
}
