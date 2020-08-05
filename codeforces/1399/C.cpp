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
    int n;
    cin>>n;
    int a[n],mx=0;
    fi(0,n) cin>>a[i];
    for(int sum=1;sum<=150;sum++){
        bool vis[n];
        int num=0;
        fi(0,n) vis[i]=0;
        fi(0,n){
            if(vis[i])  continue;
            int k=sum-a[i];
            for(int j=0;j<n;j++){
                if(i==j)    continue;
                if(k==a[j]&&vis[j]==0){
                    num++;
                    vis[i]=1;
                    vis[j]=1;
                    break;
                }
            }
        }
        mx=max(mx,num);
    }
    cout<<mx<<"\n";
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