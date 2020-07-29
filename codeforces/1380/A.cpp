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
void fun(){
    int n;
    cin>>n;
    vector<int> v;
    int a[n];
    fi(0,n){
        cin>>a[i];
        if(v.empty()){
            v.push_back(i);
        }
        else if(v.size()==1){
            if(a[i]>a[v[0]])
                v.push_back(i);
            else if(a[i]<a[v[0]]){
                v.pop_back();
                v.push_back(i);
            }
        }
        else if(v.size()==2){
            if(a[i]<a[v[1]]){
                v.push_back(i);
            }
            else if(a[i]>a[v[1]]){
                v.pop_back();
                v.push_back(i);
            }
        }
    }
    if(v.size()==3){
        cout<<"YES\n";
        fi(0,3)
            db(v[i]+1);
        nl;
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