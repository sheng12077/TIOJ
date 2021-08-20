#include<bits/stdc++.h>
using namespace std;

signed main(){
    int a;
    int b=1;
    cin>>a;
    while(a>=b*2){
        b*=2;
    }
    cout<<((a-b)*2+1)<<endl;
}

//https://www.youtube.com/watch?v=uCsD3ZGzMgE&t=1s
