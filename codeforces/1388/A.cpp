#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define mxsize (int)1e6
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
void yn(bool check){
    if(check)	cout<<"YES\n";
    else		cout<<"NO\n";
}
void fun(){
    ll n;
    cin>>n;
    int sum=6+10+14;
    if(sum<n){
        if(n != 36 && n != 40 && n != 44) {
            cout << "YES\n";
            cout << "6 10 14 " << n - sum << '\n';
        }else if(n > 10+6+15) {
            cout << "YES\n";
            cout << "10 6 15 " << n - (10 + 6 + 15) << '\n';
        }else {
            cout << "NO\n";    
        }

    }
    else{
        cout<<"NO\n";
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