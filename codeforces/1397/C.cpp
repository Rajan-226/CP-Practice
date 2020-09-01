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
void print(int a,int b){
    cout<<a<<" "<<b<<"\n";
}
void fun(){
    int n;
    cin>>n;
    ll a[n];
    fi(0,n) cin>>a[i];
    if(n==1){
        cout<<"1 1\n0\n1 1\n0\n1 1\n"<<-1*a[0]<<"\n";
        return ;
    }
    print(1,n-1);
    fi(0,n-1){
        ll rem=a[i]%n;
        rem*=(n-1);
        cout<<rem<<" ";
        a[i]+=rem;
    }
    nl;
    print(n,n);
    cout<<-1*a[n-1]<<"\n";
    a[n-1]=0;
    print(1,n);
    fi(0,n){
        cout<<-1*a[i]<<" ";
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
    // cin>>t;
    while(t--){
        fun();
    }
}