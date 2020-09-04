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
void fun(){
    int n,x,y;
    cin>>n>>x>>y;
    if(n==2){
        cout<<x<<" "<<y<<"\n";
        return ;
    }
    int dif,start,last=INT_MAX;
    fi(1,x+1){
        fj(1,y-x+1){

            int st=i,d=j;
            vector<int> v;
            int c=0;
            
            while(c<n){
                v.push_back(st);
                st+=d;
                c++;
            }

            if(binary_search(v.begin(),v.end(),x)&&binary_search(v.begin(),v.end(),y)){
                if(v.back()<last){
                    dif=j;
                    start=i;
                    last=v.back();
                }
            }

        }
    }

    int c=0;
    while(c<n){
        cout<<start<<" ";
        start+=dif;
        c++;
    }
    nl;

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