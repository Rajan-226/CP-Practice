#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   #ifndef ONLINE_JUDGE
	  freopen("input.txt", "r", stdin);
	  freopen("output.txt", "w", stdout);
   #endif
   int n,k,c=0;
   cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++)     cin>>a[i];
   for(int i=0;i<n;i++)
      if(a[i]>=a[k-1]&&a[i]!=0)
         c++;
   cout<<c;
}