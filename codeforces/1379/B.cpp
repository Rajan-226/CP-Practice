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
    ll l,r,m;
    cin>>l>>r>>m;
    fi(l,r+1){
        if(m%i==0){
            cout<<i<<" "<<l<<" "<<l<<"\n";
            return ;
        }
    }
    fi(l,r+1){
        ll bc=r-i;
        ll mbc=m-bc;
        ll k=l;
        while(mbc/k>=1&&k<=r){
            if(mbc%k==0){
                cout<<k<<" "<<r<<" "<<i<<"\n";
                return ;
            }
            k++;
        }
        mbc=m-(i-r);
        k=l;
        while(mbc/k>=1&&k<=r){
            if(mbc%k==0){
                cout<<k<<" "<<i<<" "<<r<<"\n";
                return ;
            }
            k++;
        }
    }
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