#include <stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]>=65&&s1[i]<=90)
        s1[i]+=32;
        if(s2[i]>=65&&s2[i]<=90)
        s2[i]+=32;
    }
    if(strcmp(s1,s2)<0)
    printf("-1");
    else if(strcmp(s1,s2)>0)
    printf("1");
    else
    printf("0");
}
