/*
Distinct occurrences
* @Author: kush
* @Date:   2019-10-13 16:15:18
* @Last Modified by:   kush
* @Last Modified time: 2019-10-13 16:30:56
*/
#include<bits/stdc++.h>
using namespace std;
int distoccur(string s,string t)
{
	int n = s.length();
	int m = t.length();
	if(m>n)
		return 0;
	if(m==0)
		return 1;
	int arr[m+1][n+1];
	for (int i = 0; i <= m; i++)
	{
		arr[i][0] = 0;
	}
	for (int i = 0; i <=n; i++)
	{
		arr[0][i] = 1;
	}
	for (int i = 1; i <=m; i++)
	{
		for (int j = 1; j <=n; j++)
		{
			if(s[j-1]!=t[i-1])
				arr[i][j] = arr[i][j-1];
			else
				arr[i][j] = arr[i][j-1] + arr[i-1][j-1];
		}
	}
	// for (int i = 0; i <= m; ++i)
	// {
	// 	for (int j = 0; j <=n ; j++)
	// 	{
	// 		cout<<arr[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }
	return arr[m][n];
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
    	string s,t;
    	cin>>s>>t;
    	cout<<distoccur(s,t);
    }     
    return 0;
}