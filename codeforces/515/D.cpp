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
#define mxsize (int)3e3
int n,m;
int dx[4]={-1,1,0,0};   //up down left right
int dy[4]={0,0,-1,1};
char sym1[4]={'^','v','<','>'};
char sym2[4]={'v','^','>','<'};
char a[mxsize][mxsize];
bool isvalid(int x,int y){
    if(x<0||y<0||x>=n||y>=m||a[x][y]!='.')    return 0;
    return 1;
}
void fun(){
    queue<pair<int,int>> q;

    cin>>n>>m;
    
    int in[n][m];
    fi(0,n){
        fj(0,m){
            cin>>a[i][j];
            in[i][j]=0;
        }
    }
    fi(0,n){
        fj(0,m){
            if(a[i][j]!='*'){
                fk(0,4){
                    if(isvalid(i+dx[k],j+dy[k])){
                        in[i][j]++;
                    }
                }
            }
            if(in[i][j]==1)         q.push({i,j});
        }
    }

    while(!q.empty()){
        int x=q.front().F;
        int y=q.front().S;
        q.pop();
        fk(0,4){
            int nx=x+dx[k],ny=y+dy[k];
            if(isvalid(nx,ny)){
                
                a[nx][ny]=sym1[k];
                a[x][y]=sym2[k];

                fj(0,4){
                    x=nx+dx[j];
                    y=ny+dy[j];
                    if(isvalid(x,y)){
                        in[x][y]--;
                        if(in[x][y]==1)             q.push({x,y});
                    }
                }

                break;
            }
            
        }

    }

    fi(0,n){
        fj(0,m){
            if(a[i][j]=='.'){
                cout<<"Not unique";
                return ;
            }
        }
    }

    fi(0,n){
        fj(0,m){
            cout<<a[i][j];
        }
        nl;
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