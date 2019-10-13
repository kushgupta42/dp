/*
* Maximum sum Problem
* @Author: kush
* @Date:   2019-10-11 10:57:40
* @Last Modified by:   kush
* @Last Modified time: 2019-10-11 11:03:13
*/
#include<bits/stdc++.h>
using namespace std;
int maxisum(int n)
{
	int dp[n+1];
	dp[0]=0;dp[1]=1;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = max(dp[i/2]+dp[i/3]+dp[i/4],i);
	}
	return dp[n];
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("/mnt/extra/programming/io/input.txt", "r", stdin);
    freopen("/mnt/extra/programming/io/output.txt", "w", stdout);
    freopen("/mnt/extra/programming/io/error.txt", "w", stderr);
	#endif
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	cout<<maxisum(n)<<"\n";
    }     
    return 0;
}