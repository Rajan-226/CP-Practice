#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    int n, l, radius;
    cin >> n >> l;
    int arr[n];
 
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    sort(arr, arr + n);
    radius = max(arr[0], l - arr[n - 1]) * 2;
 
    for (int i = 0; i < n - 1; i++)
        radius = max(radius, arr[i + 1] - arr[i]);
 
    cout.precision(20);
    cout << fixed << radius / 2.0 << endl;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif
    // int t;
    // cin>>t;
    // while(t--){
        fun();
    // }
}