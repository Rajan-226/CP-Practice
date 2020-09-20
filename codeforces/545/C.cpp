#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
template <typename T> istream &operator>>(istream &is, vector<T> &vec) { for (auto &v : vec) is >> v; return is; }
#define mxsize (int)1e6
ll fastexp(ll a,ll n,ll nod){
    if(nod==0)	nod=LLONG_MAX;
    ll ans=1;
    while(n){
        if(n&1)
            ans=(ans*a)%nod;
        a=(a*a)%nod;
        n>>=1;
    }
    return ans;
}
void fun(){
    int n;
    cin>>n;
    int x[n],h[n];
    int left[n],right[n];
    fi(0,n){
        cin>>x[i]>>h[i];
        left[i]=right[i]=0;
    }
    if(n==1){
        cout<<"1\n";
        return;
    }
    left[0]=1;
    right[0]=((x[0]+h[0])<x[1]);

    fi(1,n){
        // db(left[i-1]);db(right[i-1]);nl;

        left[i]=max(left[i-1]+((x[i]-h[i])>x[i-1]),right[i-1]+((x[i]-h[i])>(x[i-1]+h[i-1])));

        if(i==n-1)
            right[i]=max(left[i-1],right[i-1])+1;
        else
            right[i]=max(left[i-1],right[i-1])+((x[i]+h[i])<(x[i+1]));
    }

    cout<<max(left[n-1],right[n-1]);

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
    // cin>>t;
    while(t--){
        fun();
    }
}