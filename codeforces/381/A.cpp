#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,ser=0,dim=0;
  cin>>n;
  int a[n],l=0,r=n-1;
	for(int i=0;i<n;i++)
		cin>>a[i];

	while(l<=r){
		if(a[l]>=a[r]){
			ser+=a[l];
			l++;
		}
		else{
			ser+=a[r];
			r--;
		}
		if(l<=r){
			if(a[l]>=a[r]){
				dim+=a[l];
				l++;
			}
			else{
				dim+=a[r];
				r--;
			}
		}
	}
	cout<<ser<<" "<<dim;
}
