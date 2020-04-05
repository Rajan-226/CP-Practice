#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
      freopen("/ATOM/input.txt", "r", stdin);
      freopen("/ATOM/output.txt", "w", stdout);
   #endif
	int n,c=2;
    cin>>n;
    int a[n+1]={0};
    while(c--){
        int k;
        cin>>k;
        while(k--){
            int num;
            cin>>num;
            a[num]+=1;
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            cout<<"Oh, my keyboard!";
            c=2;
            break;
        }
    }
    if(c==-1)
        cout<<"I become the guy.";
	return 0;
}
