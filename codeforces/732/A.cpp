#include <bits/stdc++.h>
using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int k,r,i;
   cin>>k>>r;
   for(i=1;i<10;i++){
      if((i*k)%10==0||(i*k)%10==r)
         break;
   }
   cout<<i;
}