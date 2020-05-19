#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    string s;   cin>>s;
    int ind=-1,last=s.size()-1;
    for(int i=0;i<last;i++){
        if((s[i]-'0')%2==0){
            if(s[last]>s[i]){
                ind=i;
                break;
            }
            ind=i;
        }
    }
    if(ind==-1)
        cout<<"-1\n";
    else{
        swap(s[last],s[ind]);
        cout<<s<<"\n";
        return ;
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
    // int t;
    // cin>>t;
    // while(t--){
        fun();
    // }
}