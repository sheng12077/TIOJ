#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 1e9
#define maxn 10000005

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while(cin>>n and n!=0){
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            int c,e;
            cin>>c>>e;
            pq.push({e,c});
        }
        int ans=0;
        int cook=0;
        while(!pq.empty()){ 
            auto k=pq.top();
            pq.pop();
            int a=k.first;
            int b=k.second;
            cook+=b;
            ans=max(ans,cook+a);
        }
        cout<<ans<<endl;
    }
}
