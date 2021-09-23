#include<bits/stdc++.h>
using namespace std;
//#define int long long

signed main(){

   ios::sync_with_stdio(0);
   cin.tie(0);

    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        a.push_back(num);
    }
    int s=a.size();
    int dp[n+1];
    vector<int>vec;

    dp[0]=1;
    vec.push_back(a[0]);
    int len=1;
    for(int i=0;i<s;i++){
        if(a[i]>vec.back()){
            vec.push_back(a[i]);
            len++;
            dp[i]=len;
        }
        else{
            auto k=lower_bound(vec.begin(),vec.end(),a[i]);
            *k=a[i];
            dp[i]=(k-vec.begin()+1);
        }
    }
    cout<<*max_element(dp,dp+n);
}
