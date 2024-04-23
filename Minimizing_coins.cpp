#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,price;
    cin>>n>>price;
    vector<int>c(n);
    for(int &v:c)cin>>v;
    vector<int>dp(price+1,1e9);
    dp[0]=0;
    for(int i=1;i<=price;i++)
    {
        for(int  j=0;j<n;j++)
        {
            if(i-c[j]>=0)
                dp[i]=min(dp[i],dp[i-c[j]]+1);



        }

        
    }

    cout<<(dp[price]==1e9?-1:dp[price]);




    return 0;
}
