#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define UM unordered_map<int,int>
#define MP map<int,int>
#define mxsize (int)2e3


int n,m;
int vis[mxsize][mxsize];
char inp[mxsize][mxsize];
int ans[(int)1e6];
int dx[4]={-1,1,0,0};   //up down left right
int dy[4]={0,0,-1,1};
bool is_valid(int x,int y){
    if(x<0||y<0||x>=n||y>=m)
        return 0;
    return 1;
}

int bfs(int x,int y,int colour){
    queue<pair<int,int>> q;
    q.push({x,y});
    int cnt=0;
    vis[x][y]=colour;
    while(!q.empty()){
        int curx=q.front().F;
        int cury=q.front().S;
        q.pop();
        fi(0,4){
            int nxtx=curx+dx[i];
            int nxty=cury+dy[i];
            if(is_valid(nxtx,nxty)){
                if(vis[nxtx][nxty]==0){
                    if(inp[nxtx][nxty]=='*'){
                        cnt++;
                        continue;
                    }
                    vis[nxtx][nxty]=colour;
                    q.push({nxtx,nxty});
                }
            }
        }
    }
    ans[colour]=cnt;
}
void fun(){
    int q;
    cin>>n>>m>>q;
    fi(0,n){
        fj(0,m){
            cin>>inp[i][j];
        }
    }
    int c=1;
    while(q--){
        int x,y;
        cin>>x>>y;
        x--;y--;
        if(vis[x][y]==0)    bfs(x,y,c++);
        cout<<ans[vis[x][y]]<<"\n";
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("/ATOM/input.txt", "r", stdin);
        freopen("/ATOM/output.txt", "w", stdout);
    #endif
    int t=1;
    // cin>>t;
    while(t--){
        fun();
    }
}