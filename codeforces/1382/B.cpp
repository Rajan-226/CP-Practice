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
bool fun(){
    int n;
    cin>>n;
    ll a[n];
    bool ok=1;
    fi(0,n){
        cin>>a[i];
        if(a[i]==1)
            ok=0;
    }
    if(n==1||ok){
        return 1;
    }
    int i=0;
    while(i<n&&a[i]==1){
        i++;
    }
    if(i==n){
        if(n%2)
            return 1;
        else
            return 0;
    }
    if(i%2)
        return 0;
    else
        return 1;


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
        if(fun())
            cout << "First\n";
        else
            cout << "Second\n"; 
    }
}