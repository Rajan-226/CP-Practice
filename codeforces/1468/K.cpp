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
void move(int &x,int &y,char c){
    if(c=='L')  x--;
    else if(c=='R') x++;
    else if(c=='U') y++;
    else y--;
}
void fun(){     //easy peasy/ aise contest mein ku ni aate nkli
    string s;
    cin>>s;
    int n=s.size();
    int bx=0,by=0;
    fi(0,n){
        move(bx,by,s[i]);
        int cx=0,cy=0;
        fi(0,n){
            int tx=cx,ty=cy;
            move(tx,ty,s[i]);
            if(tx!=bx||ty!=by){
                cx=tx;  cy=ty;
            }
        }
        if(cx==0&&cy==0){
            cout<<bx<<" "<<by<<"\n";
            return ;
        }
    }
    cout<<"0 0\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(20);
    cout<<fixed;
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