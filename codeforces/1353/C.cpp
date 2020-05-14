#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
	int n; cin >> n;
    ll j = n/2;
    ll ans=0;
    ll x;
    for(int i = n; i > 1; i-=2){
        if(i - 2 > 0){
            x = i + i - 2;
            ans += x * j;
            j--;
        }
    }
    cout << (2ll*ans) << '\n';
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	#ifndef ONLINE_JUDGE
		freopen("/ATOM/input.txt", "r", stdin);
		freopen("/ATOM/output.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		fun();
	}
}