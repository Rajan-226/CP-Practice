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
void fun(){
    int n;
    cin>>n;
    ll a[n];

    fi(0,n){
        cin>>a[i];
    }
    if(n%2==0){
        fi(0,n){
            if(a[i]>=0) db(-1*a[i]-1);
            else    db(a[i]);
        }
        return ;
    }
    int ind=-1,mn=INT_MIN;
    fi(0,n){
        if(a[i]>=0) a[i]=-1*a[i]-1;
        if(a[i]!=-1&&abs(a[i])>mn){
            mn=abs(a[i]);
            ind=i;  
        }
    }
    if(ind==-1){
       fi(0,n) cout<<"0 ";
    }
    else{
        a[ind]=-1*a[ind]-1;
        fi(0,n) db(a[i]);
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