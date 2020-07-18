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
string s;
int check(int l,int r,int k){
    char c='a'+k;
    if(l==r){
        if(s[l]==c)
            return 0;
        else
            return 1;
    }
    int mid=(l+r)/2;
    int sz=(r-l+1)/2;
    int k1=sz-count(s.begin()+l,s.begin()+mid+1,c)+check(mid+1,r,k+1);
    int k2=sz-count(s.begin()+mid+1,s.begin()+r+1,c)+check(l,mid,k+1);
    return min(k1,k2);
}
void fun(){
    int n;
    cin>>n>>s;
    cout<<check(0,n-1,0)<<"\n";
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