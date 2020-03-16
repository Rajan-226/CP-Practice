#include <stdio.h>

int main()
{
    int n,k,sum=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        int r;
        scanf("%d",&r);
        sum+=r>k?2:1;
    }
    printf("%d",sum);

    return 0;
}