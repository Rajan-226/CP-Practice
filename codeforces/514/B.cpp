#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,n;
    scanf("%d %d %d",&n,&x,&y);
    int c=0,k=0,l=0;
    double a[n];
    for(int i=0;i<n;i++){
        int p,q;
        scanf("%d %d",&p,&q);
        if((p-x)!=0)
        a[l++]=(double)(q-y)/(p-x);
        else
        k=1;
    }
    sort(a,a+l);
    for(int i=0;i<l;i++){
        while(a[i]==a[i+1]&&i<n-1)
            i++;
        c++;
    }
    printf("%d",c+k);
	return 0;
}
