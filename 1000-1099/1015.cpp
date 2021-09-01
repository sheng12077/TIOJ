#include<bits/stdc++.h>
using namespace std;

signed main(){


    long long a,b,n,m;
    while(cin>>a>>b){
        if(a==0 and b==0){
            break;
        }
        else{
        n=min(a,b);
        m=max(a,b);
        long long ans=n*(n+1)*(3*m-n+1)/6;
        cout<<ans<<"\n";
        }
    }
}

/*思路
1 × 1 的正方形有 N × M 個、
2 × 2 的正方形有 （N － 1） × （M － 1） 個、
3 × 3 的正方形有 （N － 2） × （M － 2） 個、
……
i × i 的正方形有 （N － i ＋ 1） × （M － i ＋ 1） 個、
……
N × N 的正方形有 M － N ＋ 1 個
因此 Σ （N － i ＋ 1） × （M － i ＋ 1） ，其中 1 ≦ i ≦ N 。
=> Σ N × M ＋ N ＋ M ＋ 1 － i × （N ＋ M ＋ 2）＋ i ^ 2
=> (N + 1) × (M + 1) － (N × (N + 1) ÷ 2) × （N ＋ M ＋ 2）＋ N * (N + 1) × (2 × N + 1) ÷ 6
=> N × （N ＋ 1） × （3M － N ＋ 1） ÷ 6 其中，N ≦ M
*/
