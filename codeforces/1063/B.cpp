#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007
#define pb push_back
#define nl cout<<"\n"
#define db(x) cout<<x<<" "
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define F first
#define S second
#define UM unordered_map<int,int>
#define MP map<int,int>


#define mxsize (int)2e3+5


int dx[4]={-1,1,0,0};   //up down left right
int dy[4]={0,0,-1,1};
bool vis[mxsize][mxsize];
pair<int,int> dis[mxsize][mxsize];
char arr[mxsize][mxsize];
int n,m;
int maxx,maxy;
bool is_valid(int x,int y){
    if(x<0||y<0||x>=n||y>=m)
        return 0;
    if(vis[x][y]==1||arr[x][y]=='*')
        return 0;
    return 1;
}
int ans=0;
void bfs(int x,int y){
    deque<pair<int,int>> q;
    q.push_back({x,y});
    dis[x][y].F=0;
	dis[x][y].S=0;
    vis[x][y]=1;
    while(!q.empty()){
		ans++;
        int curx=q.front().F;
        int cury=q.front().S;
        q.pop_front();
        fi(0,4){
            if(is_valid(curx+dx[i],cury+dy[i])){
                int nxtx=curx+dx[i];
                int nxty=cury+dy[i];
				if(i==2){
					if(dis[curx][cury].F<maxx){
						q.push_back({nxtx,nxty});
						vis[nxtx][nxty]=1;
						dis[nxtx][nxty].F=dis[curx][cury].F+1;
						dis[nxtx][nxty].S=dis[curx][cury].S;
					}
				}
				else if(i==3){
					if(dis[curx][cury].S<maxy){
						// db(dis[nxtx][nxty].S);
						q.push_back({nxtx,nxty});
						vis[nxtx][nxty]=1;
						dis[nxtx][nxty].F=dis[curx][cury].F;
						dis[nxtx][nxty].S=dis[curx][cury].S+1;
					}
				}
				else{
					q.push_front({nxtx,nxty});
					vis[nxtx][nxty]=1;
                	dis[nxtx][nxty].F=dis[curx][cury].F;
					dis[nxtx][nxty].S=dis[curx][cury].S;
				}
            }
        }
    }
}
void fun(){
	int r,c;
    cin>>n>>m>>r>>c>>maxx>>maxy;
    fi(0,n){
        fj(0,m){
            cin>>arr[i][j];
        }
    }
    bfs(r-1,c-1);

	// fi(0,n){
	// 	fj(0,m)	db(vis[i][j]);nl;
	// }
	// nl;
	// fi(0,n){
	// 	fj(0,m)	db(dis[i][j].S);nl;
	// }
    db(ans);
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