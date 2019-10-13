/*
* Count of strings that can be formed using a, b and c under given constraints
* @Author: kush
* @Date:   2019-10-13 02:39:48
* @Last Modified by:   kush
* @Last Modified time: 2019-10-13 02:51:33
*/
#include<bits/stdc++.h>
using namespace std;
int countstr(int dp[][2][3],int n,int bc,int cc)
{
	if(bc<0||cc<0)
		return 0;
	if(n==0)
		return 1;
	if(bc==0 && cc==0)
		return 1;
	if(dp[n][bc][cc] != -1)
		return dp[n][bc][cc];
	int res = countstr(dp,n-1,bc,cc);
	res+=countstr(dp,n-1,bc-1,cc);
	res+=countstr(dp,n-1,bc,cc-1);
	dp[n][bc][cc] = res;
	return dp[n][bc][cc];
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
    	int dp[n+1][2][3];
    	memset(dp,-1,sizeof(dp));
    	cout<<countstr(dp,n,1,2)<<"\n";
    }    
    return 0;
}