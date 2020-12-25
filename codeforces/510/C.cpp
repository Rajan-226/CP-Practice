#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pi 3.141592653589
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
ll fastexp(ll a,ll n,ll nod=LLONG_MAX){
    ll ans=1;
    while(n){
        if(n&1)
            ans=(ans*a)%nod;
        a=(a*a)%nod;
        n>>=1;
    }
    return ans;
}
#define mxsize (int)3e5
unordered_map<char,vector<char>> mp;
unordered_map<char,int> indegree;
void fun(){
    int n;
    cin>>n;
    string last;
    cin>>last;
    fi(1,n){
        string temp;
        cin>>temp;
        for(int i=0;i<last.size();i++){
            if(i==temp.size()){
                cout<<"Impossible\n";
                return ;
            }
            if(last[i]!=temp[i]){
                mp[last[i]].push_back(temp[i]);
                indegree[temp[i]]++;
                break;
            }
        }
        last=temp;
    }
    vector<char> tsort;
    queue<char> q;
    for(char c='a';c<='z';c++){
        if(indegree[c]==0){
            q.push(c);
        }
    }
    while(!q.empty()){
        char c=q.front();
        tsort.push_back(c);
        q.pop();
        for(auto child:mp[c]){
            indegree[child]--;
            if(indegree[child]==0){
                q.push(child);
            }
        }
    }
    if(tsort.size()!=indegree.size()){
        cout<<"Impossible\n";
        return ;
    }
    for(auto c:tsort)   cout<<c;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(20);
    cout<<fixed;
    // #ifndef ONLINE_JUDGE
    //     freopen("/ATOM/input.txt", "r", stdin);
    //     freopen("/ATOM/output.txt", "w", stdout);
    // #endif   
    int t=1;
    // cin>>t;
    while(t--){
        fun();
    }
}