#include <bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   #ifndef ONLINE_JUDGE
      freopen("/ATOM/input.txt", "r", stdin);
      freopen("/ATOM/output.txt", "w", stdout);
   #endif
   int n,sum=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
      cin>>a[i];
      sum+=a[i];
   }
   sort(a,a+n,greater<int>());
   int i,sum2=0;
   for(i=0;i<n;i++){
      sum2+=a[i];
      if(sum2>sum/2)
         break;
   }
   cout<<i+1;

}