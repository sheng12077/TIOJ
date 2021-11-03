#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define inf 1e9
#define maxn 100005

vector<pair<int,int>>tree[maxn];
int dis[maxn];
bool visited[maxn]={false};

void dfs(int now,int pre){
    for(auto next:tree[now]){
        int u=next.first;
        int k=next.second;
        if(u!=pre){
            visited[u]=true;
            dis[u]=dis[now]+k;
            dfs(u,now);
        }
    }
}


signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    while(cin>>n and n!=0){
        //init
        for(int i=1;i<=n;i++){
            tree[i].clear();
            dis[i]=0;
        }
        for(int i=1;i<n;i++){
            int a,b,w;
            cin>>a>>b>>w;
            tree[a].push_back({b,w});
            tree[b].push_back({a,w});
        }
        dfs(1,-1);
        int mx=0;
        int index=0;
        for(int i=1;i<=n;i++){
            if(dis[i]>mx){
                index=i;
                mx=dis[i];
            }
        }
        for(int i=1;i<=n;i++){
            dis[i]=0;
        }
        dfs(index,-1);
        cout<<*max_element(dis,dis+n)<<endl;
    }
}
