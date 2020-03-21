#include <bits/stdc++.h>
using namespace std;
int main()
{
	long double x,y,a,b;
	int n;
	cin>>x>>y>>n;
	long double Min=INT_MAX;
	long double p;
	int i;
	for(i=1;i<=n;i++)
	{
		p=(long long int)((x*i)/y);
		if(abs(x/y-p/i)<Min)
		{
			Min=abs(x/y-p/i);
			a=p;
			b=i;
		}
		p=ceil((x*i)/y);
		if(abs(x/y-p/i)<Min)
		{
			Min=abs(x/y-p/i);
			a=p;
			b=i;
		}	
	}
	cout<<a<<"/"<<b<<endl;	
	return 0;
}