#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    int tmp=n;
    if(n>m){
        for (int i=0;i<n-m+1;i++){
            for (int j=0;j<tmp;j++){
                cout<<"*";
            }
            cout<<"\n";
            tmp--;
        }
    }
    else{
        for (int i=0;i<m-n+1;i++){
            for (int j=0;j<tmp;j++){
                cout<<"*";
            }
            cout<<"\n";
            tmp++;
        }
    }
}
