/*
* Number of Unique Paths 
* @Author: kush
* @Date:   2019-10-13 03:04:43
* @Last Modified by:   kush
* @Last Modified time: 2019-10-13 03:19:51
*/
#include<bits/stdc++.h>
using namespace std;
int uniqpath(int m,int n)
{
	long long int dp[m][n];
	for (int i = 0; i < n; i++)
		dp[0][i] = 1;
	for (int i = 0; i < m; i++)
		dp[i][0] = 1;
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<n;j++)
		{
			dp[i][j] = dp[i-1][j]+dp[i][j-1];
		}		
	}
	return	dp[m-1][n-1];
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
    	int m,n;
    	cin>>m>>n;
    	cout<<uniqpath(m,n)<<"\n";	
    }     
    return 0;
}