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
    int a[n],d[n];
    fi(0,n) cin>>a[i];
    if(n==1){
        cout<<"-1\n";
        return;
    }
    map<int,int> mp;
    sort(a,a+n);
    fi(1,n){
        mp[a[i]-a[i-1]]++;
    }
    vector<int> ans;
    if(mp.size()==1){
        if(a[0]==a[n-1]){
            ans.push_back(a[0]);
        }
        else{
            auto it=mp.begin();
            int dif=it->F;
            ans.push_back(a[0]-dif);
            if(n==2&&(a[0]+a[1])%2==0)
                ans.push_back((a[0]+a[1])/2);
            ans.push_back(a[n-1]+dif);
        }
    }
    else if(mp.size()==2){
        int dif1=a[1]-a[0];
        bool ok=0,okkk=0;
        if(dif1==a[2]-a[1])
            okkk=1;
        for(int i=2;i<n;i++){
            int dif2=a[i]-a[i-1];
            if(okkk&&dif2!=dif1){
                if(ok){
                    ans.clear();
                    break;
                }
                if(a[i-1]+2*dif1==a[i]){
                    ans.push_back(a[i-1]+dif1);
                }
                ok=1;
            }
            else if(dif2!=dif1){
                if(ok){
                    ans.clear();
                    break;
                }
                if(a[0]+2*dif2==a[1]){
                    dif1=dif2;
                    ans.push_back(a[0]+dif2);
                }
                else if(a[i-1]+2*dif1==a[i]){
                    ans.push_back(a[i-1]+dif1);
                }
                ok=1;
            }
        }
    }
    cout<<ans.size()<<"\n";
    for(auto i:ans)
        cout<<i<<" ";
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
    // cin>>t;
    while(t--){
        fun();
    }
}