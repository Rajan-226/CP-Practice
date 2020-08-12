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
    int a[4];

    for(int i = 0; i < 4; i++)
    cin >> a[i];

    int o = 0, mn = INT_MAX;



    for(int i = 0; i < 4; i++) {
        if(i < 3) {
            o += (a[i] & 1);
            mn = min(a[i],mn);
        }
    }
    if(a[3] % 2 == 0) {
        if(o == 3 && mn >= 1) {
            cout << "Yes\n";
            return;
        }

        if(o == 2) {
            cout << "No\n";
            return;
        }

        if(o == 1 || o == 0) {
            cout << "Yes\n";
            return;
        }

    }else {

        if(o == 0) {
            cout << "Yes\n";
            return;
        }

        if((o == 1)) {
            cout << "No\n";
            return;
        }


        if(o == 2 && mn >= 1) {
            cout << "Yes\n";
            return;
        }

        if(o == 3 && mn >= 1) {
            cout << "Yes\n";
            return;
        }

    }

    cout << "No\n";
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