/*
* @Author: kush
* @Date:   2019-10-10 23:04:44
* @Last Modified by:   kush
* @Last Modified time: 2019-10-10 23:53:25
*/
#include<bits/stdc++.h>
using namespace std;
#define maxi 101
int goldmine(int gold[][maxi],int n,int m)
{
	int goldtable[n][m]={0};
	for(int col = m-1;col>=0;col--)
	{
		for (int row = 0; row < n; row++)
		{
			int right;
			int rightup;
			int rightdown;			
			if (col == m-1)
				right =0;
			else
				right = goldtable[row][col+1];
			
			if(row == 0 || col == m-1)
					rightup =0;
			else
				rightup = goldtable[row-1][col+1];
			if(row == n-1 || col==m-1)
				rightdown = 0;
			else
				rightdown = goldtable[row+1][col+1];

			goldtable[row][col] = gold[row][col] + max(right,max(rightdown,rightup));
			// cout<<goldtable[row][col]<<" ";

		}
		//cout<<"\n";
		
	}
	// for (int i = 0; i < n; i++)
 //    	{
 //    		for (int j = 0; j < m; j++)
 //    		{
 //    			cout<<goldtable[i][j]<<" ";
 //    		}
 //    		cout<<"\n";
 //    	}
	int res = goldtable[0][0];
		for (int i = 1; i <n ; i++)
		{
			res = max(res,goldtable[i][0]);
		}
		return res;
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
    	int arr[maxi][maxi];
    	for (int i = 0; i < n; i++)
    	{
    		for (int j = 0; j < m; j++)
    		{
    			cin>>arr[i][j];
    		}
    	}
    	// for (int i = 0; i < n; i++)
    	// {
    	// 	for (int j = 0; j < m; j++)
    	// 	{
    	// 		cout<<arr[i][j]<<" ";
    	// 	}
    	// 	cout<<"\n";
    	// }
    	cout<<goldmine(arr,n,m)<<"\n";
    }     
    return 0;
}