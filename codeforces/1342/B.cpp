#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void fun(){
    string t;
    cin>>t;
    int n=t.size();
    bool ok=1;
    for(int i=1;i<n;i++){
       if(t[i]!=t[i-1]){
          ok=0;
          break;
       }
    }
    if(ok){
       cout<<t<<"\n";
       return ;
    }
    cout<<t[0];
    for(int i=1;i<n;i++){
      if(t[i-1]=='0'){
         if(t[i]=='1')
            cout<<"1";
         else
            cout<<"10";
      }
      else{
         if(t[i]=='0')
            cout<<"0";
         else
            cout<<"01";
      }
    }
    cout<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       fun();
    }
}