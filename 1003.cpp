#include<bits/stdc++.h>
using namespace std;

signed  main(){
    int n;
    cin>>n;
    vector <int> vec (51);
    vec[0]=1;
    for (int i=1;i<=n;i++){
        vec[i]=vec[i-1]+i;
    }
    cout<<vec[n]<<endl;
}
