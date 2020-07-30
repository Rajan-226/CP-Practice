#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define UM unordered_map<int,int>
#define MP map<int,int>
void yn(bool check){
    if(check)	cout<<"YES\n";
    else		cout<<"NO\n";
}
void fun(){
    int n,k,z;
    cin>>n>>k>>z;
    ll a[n],prf[n];
    fi(0,n){
        cin>>a[i];
        if(i)   prf[i]=prf[i-1]+a[i];
        else    prf[i]=a[i];
    }
    ll ans=0;
    ll sum=a[0];
    fi(1,k+1){
        ll temp=k-i;
        sum+=a[i];
        ll ss=sum;
        if(2*z>temp){
            ll si=temp/2;
            ll sj=temp%2;
            
            ss+=si*(a[i]+a[i-1]);
            ss+=sj*a[i-1];

            ans=max(ans,ss);
        }
        else{
            ss+=(a[i-1]+a[i])*z;
            temp-=2*z;
            ss+=prf[i+temp]-prf[i];
            ans=max(ans,ss);
        }
    }
    cout<<ans<<"\n";
    


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