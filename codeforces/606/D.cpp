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
struct node{
    int w;
    int mst;
    int index;
};

void fun(){
    int n,m;
    cin>>n>>m;
    node v[m];
    pair<int,int> ans[m];
    fi(0,m){
        cin>>v[i].w>>v[i].mst;
        v[i].index=i;
    }
    sort(v,v+m,[](node &A,node &B){
        return A.w<B.w||(A.w==B.w&&A.mst>B.mst);        //O bhai msttt ek dum kadak
    });
    int curnode=1;
    int maker=3,makel=1;
    fi(0,m){
        int a,b;
        if(!v[i].mst){
            if(maker>curnode){
                cout<<"-1\n";
                return ;
            }
            a=maker;
            b=makel;
            makel--;
            if(makel==0){
                maker++;
                makel=maker-2;
            }
        }
        else{
            a=curnode;
            b=curnode+1;
            curnode++;
        }
        int ind=v[i].index;
        ans[ind].F=a;
        ans[ind].S=b;
    }
    fi(0,m){
        cout<<ans[i].F<<" "<<ans[i].S<<"\n";
    }
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
    // cin>>t;
    while(t--){
        fun();
    }
}