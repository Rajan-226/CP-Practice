#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define nl cout<<"\n";
#define UM unordered_map<int,int>
#define ULL unordered_map<ll,int>
void fun(){
    string s;
    cin>>s;
    int one=0,two=0,three=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='1')
            one++;
        else if(s[i]=='2')
            two++;
        else if(s[i]=='3')
            three++;
    }
    int i=0;
    while(one--){
        s[i]='1';
        i+=2;
    }
    while(two--){
        s[i]='2';
        i+=2;
    }
    while(three--){
        s[i]='3';
        i+=2;
    }
    cout<<s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif
        fun();
}