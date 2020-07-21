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
    int n,m;
    cin>>n>>m;
    MP mp;
    fi(0,n){
        int k;
        cin>>k;
        mp[k]++;
    }
    int ans=-1;
    fi(0,m){
        int k;
        cin>>k;
        if(mp[k]&&ans==-1){
            ans=k;
        }
    }
    if(ans==-1){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n1 "<<ans<<"\n";
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