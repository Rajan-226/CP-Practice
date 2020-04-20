#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool fun(){
   ll n;
   cin>>n;
   ll a[n],sum=0,s=0;
   unordered_map<ll,int> first,second;
   for(int i=0;i<n;i++){
      cin>>a[i];
      sum+=a[i];
      if(i)    second[a[i]]+=1;
   }

   if(sum&1)      return 0;

   first[a[0]]=1;
   for(int i=0;i<n;i++){
      s+=a[i];
      if(s==sum/2)
         return 1;
      else if(s<sum/2){
         ll temp=sum/2-s;
         if(second[temp]>0)
            return 1;
      }
      else{
         ll temp=s-sum/2;
         if(first[temp]>0)
            return 1;
      }
      first[a[i+1]]+=1;
      second[a[i+1]]-=1;
   }
   return 0;
   
}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   #ifndef ONLINE_JUDGE
      freopen("/ATOM/input.txt", "r", stdin);
      freopen("/ATOM/output.txt", "w", stdout);
   #endif
   if(fun())
      cout<<"YES";
   else
      cout<<"NO";
}