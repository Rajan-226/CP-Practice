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
map<int,int> sq,rec,res;
int s=0,r=0;
void fun(){
    char a;
    int k;
    cin>>a>>k;
    if(a=='+'){
        if(res[k]==0){
            res[k]++;
        }
        else{
            res[k]--;
            if(rec[k]==0){
                rec[k]++;
                r++;
            }
            else{
                rec[k]--;
                sq[k]++;
                s++;
                r--;
            }
        }
    }
    else{
        if(res[k]>0){
            res[k]--;
        }
        else{
            if(rec[k]>0){
                rec[k]--;
                res[k]++;
                r--;
            }
            else{
                sq[k]--;
                rec[k]++;
                s--;
                r++;
                res[k]++;
            }
        }
    }
    if((s>=2)||(s==1&&r>=2)){
        cout<<"YES\n";
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
    int n;
    cin>>n;
    map<int,int> mp;
    fi(0,n){
        int k;
        cin>>k;
        mp[k]++;
    }
    for(auto i:mp){
        int k=i.S;
        sq[i.F]=k/4;
        k%=4;
        rec[i.F]=k/2;
        k%=2;
        res[i.F]=k;
    }
    for(auto i:sq){
        s+=i.S;
    }
    for(auto i:rec){
        if(i.S>0){
            r++;
        }
    }
    int t=1;
    cin>>t;
    while(t--){
        fun();
    }
}