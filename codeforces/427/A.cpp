#include <bits/stdc++.h>
using namespace std;
int main(){
   int n,c=0,sum=0;
   cin>>n;
   for(int i=0;i<n;i++){
      int k;
      cin>>k;
      sum+=k;
      if(sum<0){
         c++;
         sum=0;
      }
   }
   cout<<c;
}