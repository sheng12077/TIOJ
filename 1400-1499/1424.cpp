#include <bits/stdc++.h>
using namespace std;
#define int long long  

signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	priority_queue<int,vector<int>,greater<int>>pq;
	int ans=0;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		pq.push(k);
	}
	for(int i=0;i<n-1;i++){
		int a=pq.top();
		pq.pop();
		int b=pq.top();
		pq.pop();
		pq.push(a+b);
		ans+=(a+b);
	}
	cout<<ans<<"\n";
}
