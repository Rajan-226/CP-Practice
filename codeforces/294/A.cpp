#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];

    int m;
    cin>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        if(a[x]>=y){
            if(x-1)
                a[x-1]+=y-1;
            if(x+1<=n)
                a[x+1]+=a[x]-y;
            a[x]=0;
        }
    }
    for(int i=1;i<=n;i++)
        cout<<a[i]<<"\n";
    
}