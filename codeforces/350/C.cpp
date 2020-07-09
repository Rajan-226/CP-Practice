#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define nl cout<<"\n"
#define db(x) cout<<x<<"\n"
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
void print(ll k,char a){
    cout<<"1 "<<k<<" "<<a<<"\n";
}
void fun(){
    int n;  cin>>n;
    int ans=2*n;
    vector<pair<ll,pair<ll,ll>>> v;
    fi(0,n){
        ll x,y;
        cin>>x>>y;
        ll d=abs(x)+abs(y);
        v.push_back({d,{x,y}});
        if(x&&y)
            ans+=4;
        else
            ans+=2;
    }
    sort(v.begin(),v.end());
    cout<<ans<<"\n";
    fi(0,n){
        ll x=v[i].S.F,y=v[i].S.S;
        if(x==0||y==0){
            if(x==0){
                if(y>0){
                    print(y,'U');db(2);print(y,'D');
                }
                else{
                    y*=-1;
                    print(y,'D');db(2);print(y,'U');
                }
            }
            else{
                if(x>0){
                    print(x,'R');db(2);print(x,'L');
                }
                else{
                    x*=-1;
                    print(x,'L');db(2);print(x,'R');
                }
            }
        }
        else if(x>0&&y>0){
            print(x,'R');   print(y,'U');
            db(2);
            print(y,'D');   print(x,'L');
        }
        else if(x<0&&y<0){
            x*=-1;y*=-1;
            print(x,'L');   print(y,'D');
            db(2);
            print(y,'U');   print(x,'R');
        }
        else if(x<0&&y>0){
            x*=-1;
            print(x,'L');   print(y,'U');
            db(2);
            print(y,'D');   print(x,'R');
        }
        else{
            y*=-1;
            print(x,'R');   print(y,'D');
            db(2);
            print(y,'U');   print(x,'L');
        }
        cout<<"3\n";
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
    // cin>>t;
    while(t--){
        fun();
    }
}