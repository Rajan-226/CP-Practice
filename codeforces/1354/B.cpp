#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
int work(string s,int n,char a,char b,char c){
    int i=0,ans=INT_MAX;
    while(i<n){
        if(s[i]==a){
            int cnt=1;
            i++;
            while(s[i]==b&&s[i]!=c&&i<n){
                i++;
                cnt++;
            }
            if(s[i]==c&&cnt>1){
                ans=min(ans,cnt+1);
            }
        }
        else
            i++;
    }
    if(ans==INT_MAX)
        return 0;
    else
        return ans;
}
void fun(){
    string s;
    cin>>s;
    int n=s.size(),ans=INT_MAX,temp;
    temp=work(s,n,'1','2','3');
    if(temp)        ans=min(ans,temp);
    temp=work(s,n,'3','2','1');
    if(temp)        ans=min(ans,temp);
    temp=work(s,n,'2','1','3');
    if(temp)        ans=min(ans,temp);
    temp=work(s,n,'3','1','2');
    if(temp)        ans=min(ans,temp);
    temp=work(s,n,'2','3','1');
    if(temp)        ans=min(ans,temp);
    temp=work(s,n,'1','3','2');
    if(temp)        ans=min(ans,temp);

    if(ans==INT_MAX)    cout<<"0\n";
    else                cout<<ans<<"\n";
}
/*
1 2 3
3 2 1
2 1 3
3 1 2
1 2 3
3 2 1
*/
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