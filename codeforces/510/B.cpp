#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pi 3.141592653589
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
ll fastexp(ll a,ll n,ll nod=LLONG_MAX){
    ll ans=1;
    while(n){
        if(n&1)
            ans=(ans*a)%nod;
        a=(a*a)%nod;
        n>>=1;
    }
    return ans;
}
#define mxsize (int)3e5
char a[50][50];
int vis[50][50];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
char ch;
int n,m;
bool isvalid(int x,int y){
    return x>=0&&y>=0&&x<n&&y<m&&a[x][y]==ch;
}
bool dfs(int x,int y){
    vis[x][y]=1;
    fi(0,4){
        int curx=x+dx[i],cury=y+dy[i];
        if(isvalid(curx,cury)){
            if(vis[curx][cury]==2)    return 1;
            if(!vis[curx][cury]){
                if(dfs(curx,cury))  return 1;
            }
        }
    }
    vis[x][y]=2;
    return 0;
}
void fun(){
    cin>>n>>m;
    fi(0,n){
        fj(0,m){
            cin>>a[i][j];
        }
    }
    fi(0,n){
        fj(0,m){
            if(!vis[i][j]){
                ch=a[i][j];
                if(dfs(i,j)){
                    cout<<"Yes\n";
                    return ;
                }
            }
        }
    }
    cout<<"No\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(20);
    cout<<fixed;
    // #ifndef ONLINE_JUDGE
    //     freopen("/ATOM/input.txt", "r", stdin);
    //     freopen("/ATOM/output.txt", "w", stdout);
    // #endif
    int t=1;
    // cin>>t;
    while(t--){
        fun();
    }
}