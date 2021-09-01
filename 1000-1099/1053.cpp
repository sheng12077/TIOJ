#include<bits/stdc++.h>
using namespace std;

int swap(int &a,int &b){
    int tmp=b;
    b=a;
    a=tmp; 
    return a,b;
}

signed main(){
    int n,m;
    while(cin>>n>>m){
        if (n==0 or m==0){
            cout<<"N";
        }
        else{
            if (n<m){
                swap(n,m);
            }
            if(n%m==0){
                cout<<"Y";
            }
            else{
                cout<<"N";
            }
        }
    }
}
