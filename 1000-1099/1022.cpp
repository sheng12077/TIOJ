#include <bits/stdc++.h>
using namespace std;
#define int long long  

signed main(){

    ios_base::sync_with_stdio(0);
	cin.tie(0);

    int k;
    cin>>k;
    while(k--){
        int n,m;
        cin>>n>>m;
        int grid[n][m];
        int path[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
                path[i][j]=0;
            }
        }
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        queue<int>qx;
        queue<int>qy;
        qx.push(0);
        qy.push(0);
        path[0][0]=0;
        while(!qx.empty()){
            int x=qx.front();
            int y=qy.front();
            qx.pop();
            qy.pop();
            for(int i=0;i<4;i++){
                int tx=x+dx[i];
                int ty=y+dy[i];
                if(path[tx][ty]==0 and abs(grid[tx][ty]-grid[x][y])<=5 and tx>=0 and ty>=0 and tx<n and ty<m){
                    path[tx][ty]=path[x][y]+1;
                    qx.push(tx);
                    qy.push(ty);
                }
            }
        }
        cout<<path[n-1][m-1]<<"\n";
    }
}
