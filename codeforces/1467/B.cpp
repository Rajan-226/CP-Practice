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

void fun(){     //Bad imple, go ahead
    int n;
    cin>>n;
    int arr[n];
    fi(0,n) cin>>arr[i];
    char a[n];
    a[0]='l';
    a[n-1]='l';
    int ans=0;
    fi(1,n-1){
        if(arr[i]<arr[i-1]&&arr[i]<arr[i+1]){
            a[i]='v';
            ans++;
        }
        else if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            a[i]='h';
            ans++;
        }
        else{
            a[i]='%';
        }
        // db(a[i]);
    }
    int mx=0;
    fi(1,n-1){
        if(a[i-1]==a[i+1]&&a[i]!=a[i-1]&&a[i]!='%'&&a[i+1]!='%'&&a[i-1]!='%'){
            if(i==1)    mx=1;
            else{
                mx=3;
            }
            break;
        }
        else if(mx!=2){
            if(a[i]=='v'&&a[i+1]=='h'){
                if(i==1)    mx=2;       
                else if(i+1==n-2)    mx=2;
                else if(arr[i-1]==arr[i-2]) mx=2;
                else if(arr[i+2]==arr[i+3]) mx=2;           //Hadd dekh raa conditions ki
                else if(arr[i-1]>=arr[i+1])  mx=2;      
                else if(arr[i+2]<=arr[i])    mx=2;
            }
            else if(a[i]=='h'&&a[i+1]=='v'){
                if(i==1)    mx=2;       
                else if(i+1==n-2)    mx=2;
                else if(arr[i-1]==arr[i-2]) mx=2;
                else if(arr[i+2]==arr[i+3]) mx=2;
                else if(arr[i-1]<=arr[i+1])  mx=2;
                else if(arr[i+2]>=arr[i])    mx=2;
            }
        }
    }
    ans-=mx;
    if(mx==0){
        if(ans) ans--;   
    }
    cout<<ans<<"\n";
    // kaisa hi que h
    // Ab toh shi hoga hi pkka, randoms generate krke test kra h ab toh
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(20);
    cout<<fixed;
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