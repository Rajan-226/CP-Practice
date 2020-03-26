#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,c=1,a;
	cin>>n;
  cin>>a;
  n--;
	while(n--){
	    int k;
      cin>>k;
      if(k!=a){
        c++;
        a=k;
      }
	}
  cout<<c;
	return 0;
}
