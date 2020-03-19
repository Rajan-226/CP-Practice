#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x=-1,y=-1,t=0,s=-1,e;
	cin>>n;
	string st;
	cin>>st;
	for(int i=0;i<n;i++){
	    if(x==-1&&st[i]=='R')
	        x=i+1;
	    if(y==-1&&st[i]=='L')
	        y=i+1;
	    if(s==-1&&st[i]!='.')
	        s=i+1;
	    if(st[i]!='.')
	        e=i+1;
	}
	if(y==-1)
	    cout<<s<<" "<<e+1;
	else if(x==-1)
	    cout<<e<<" "<<s-1;
	else
	    cout<<x<<" "<<y-1;
	return 0;
}