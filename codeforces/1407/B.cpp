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
ll fastexp(ll a,ll n){
    ll nod=(ll)1e18;
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
    int a[n];
    int ind,mx=0;
    
    fi(0,n){
        cin>>a[i];
        if(a[i]>mx){
            mx=a[i];
            ind=i;
        }
    }
    int ans[n+1];

    ans[0]=mx;
    a[ind]=-1;
    int gcd=ans[0];
    int j=1;

    while(j<n){

        int index=0;
        mx=-1;

        while(index<n){
            if(a[index]!=-1){
                int d=__gcd(gcd,a[index]);
                if(d>mx){
                    mx=d;
                    ind=index;
                }
            }
            index++;
        }

        ans[j]=a[ind];
        a[ind]=-1;
        gcd=mx;

        j++;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    nl;

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