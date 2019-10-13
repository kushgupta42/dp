/*
* no of paths to orign
* @Author: kush
* @Date:   2019-10-14 00:22:27
* @Last Modified by:   kush
* @Last Modified time: 2019-10-14 00:50:05
*/
#include<bits/stdc++.h>
using namespace std;
int noofpaths(int n,int m)
{
	int arr[m+1][n+1];
	
	for(int i=0;i<=n;i++)
		arr[0][i] = 1;

	for (int i = 0; i <= m; i++)
		arr[i][n] = 1;
	
	for(int i=1;i<=m;i++)
	{
		for (int j = n-1; j >=0 ; j--)
		{
			arr[i][j] = arr[i-1][j] + arr[i][j+1];
			
		}
		
	}
	return arr[m][0];

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
    	int n,m;
    	cin>>n>>m;
    	cout<<noofpaths(n,m)<<"\n";
    }
    return 0;
}