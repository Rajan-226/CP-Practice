#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void fun(){
   int a[9][9];
   for(int i=0;i<9;i++){
      ll num;
      cin>>num;
      int j=8;
      while(num){
         a[i][j--]=num%10;
         num/=10;
      }
   }
   for(int i=0;i<9;i++){
      for(int j=0;j<9;j++)
         if(a[i][j]==1)
            cout<<"2";
         else
            cout<<a[i][j];
      
      cout<<"\n";
   }
}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   #ifndef ONLINE_JUDGE
      freopen("/ATOM/input.txt", "r", stdin);
      freopen("/ATOM/output.txt", "w", stdout);
   #endif
   int t;
   cin>>t;
   while(t--){
      fun();
   }
}