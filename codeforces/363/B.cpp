#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   #ifndef ONLINE_JUDGE
      freopen("/ATOM/input.txt", "r", stdin);
      freopen("/ATOM/output.txt", "w", stdout);
   #endif
   int n,k,ans=0,ind=1;
   scanf("%d %d",&n,&k);
   int a[n];
   for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
   for(int i=0;i<k;i++)
      ans+=a[i];
   int sum=ans;
   for(int i=k;i<n;i++){
      sum+=a[i]-a[i-k];
      if(sum<ans){
         ans=sum;
         ind=i-k+2;
      }
   }
   cout<<ind;
}