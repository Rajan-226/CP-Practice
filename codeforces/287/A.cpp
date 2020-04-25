#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool fun(){
   char a[4][4];
   for(int i=0;i<4;i++){
      string s;
      cin>>s;
      for(int j=0;j<4;j++)
         a[i][j]=s[j];
   }
   for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
         if(a[i][j]==a[i+1][j]&&a[i][j]==a[i][j+1])
            return 1;
      }
   }
   for(int i=1;i<4;i++){
      for(int j=0;j<3;j++){
         if(a[i][j]==a[i][j+1]&&a[i][j]==a[i-1][j+1])
            return 1;
      }
   }
   for(int i=1;i<4;i++){
      for(int j=0;j<3;j++){
         if(a[i][j]==a[i][j+1]&&a[i][j]==a[i-1][j])
            return 1;
      }
   }
   for(int i=0;i<3;i++){
      for(int j=1;j<4;j++){
         if(a[i][j]==a[i][j-1]&&a[i][j]==a[i+1][j])
            return 1;
      }
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
   // int t;
   // cin>>t;
   // while(t--){
   if(fun())
      cout<<"YES";
   else
      cout<<"NO";
   // }
}