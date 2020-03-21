#include <bits/stdc++.h>
using namespace std;
void fun(){
  int n,s=0;
  cin>>n;
  if(n==1){
    cout<<"-1"<<endl;
    return;
  }
  char str[n+1];
  str[s++]=50;
  n--;
  while(n--)
    str[s++]=51;
  str[s]='\0';
  cout<<str<<endl;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    fun();
  }
}
