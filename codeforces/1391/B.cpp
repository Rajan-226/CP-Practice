#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define UM unordered_map<int,int>
#define MP map<int,int>
#define mxsize (int)1e6
void fun(){
    int n,m;
    cin>>n>>m;
    char a[n][m];
    fi(0,n)
        fj(0,m)
            cin>>a[i][j];
    int ans=0;
    fi(0,n){
        bool ok=1;
        fj(0,m){
            if(i==n-1&&a[i][j]!='R'){
                ans++;
            }
            else if(j==m-1&&a[i][j]!='D')
                ans++;
        }
    }
    cout<<ans-1<<"\n";

       
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif
    int t=1;
    cin>>t;
    while(t--){
        fun();
    }
}