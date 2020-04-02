#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n,r,c=0;
   cin>>n>>r;
   while(n--){
      ll int k;
      int a[10]={0};
      cin>>k;
      while(k){
         a[k%10]+=1;
         k/=10;
      }
      for(k=0;k<=r;k++)
         if(a[k]==0)
            break;
         
      if(k==r+1)
         c++;

   }  
   cout<<c;
}