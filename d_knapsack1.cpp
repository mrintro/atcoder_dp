#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,w;
    cin>>n>>w;
    long long products[n][2];
    long long dp[n+1][w+1];
    for(long long i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        products[i][1]=a;
        products[i][0]=b;
    }
    for(long long i=0;i<=n;i++){
        for(long long j=0;j<=w;j++){
            if(i==0 || j==0) dp[i][j]=0;
            else{
                if(products[i-1][1]<=j)
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-products[i-1][1]]+products[i-1][0]);
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][w]<<endl;
}