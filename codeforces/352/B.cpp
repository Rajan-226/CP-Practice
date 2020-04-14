#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   #ifndef ONLINE_JUDGE
      freopen("/ATOM/input.txt", "r", stdin);
      freopen("/ATOM/output.txt", "w", stdout);
   #endif
   int n,c=0;
   cin>>n;
   map<int,int> cd;
   map<int,int> index;
   for(int i=1;i<=n;i++){
      int k;
      cin>>k;
      if(cd.find(k)==cd.end()&&cd[k]!=-1){
         cd[k]=0;
         index[k]=i;
      }else if(cd[k]!=-1){
         if(cd[k]==0){
            cd[k]=i-index[k];
            index[k]=i;
         }else{
            if(cd[k]!=i-index[k]){
               cd[k]=-1;
               c++;
            }
            else{
               cd[k]=i-index[k];
               index[k]=i;
            }
         }
      }
   }
   cout<<cd.size()-c<<"\n";   
   for(auto i : cd){
      if(i.second!=-1){
         cout<<i.first<<" "<<i.second<<"\n";
      }
   }

}