/*
* Minimum number of deletions. 
* @Author: kush
* @Date:   2019-10-11 23:40:51
* @Last Modified by:   kush
* @Last Modified time: 2019-10-12 02:21:55
*/
#include<bits/stdc++.h>
using namespace std;
int lps(string s)
{
	int size = s.length();
	int arr[size][size]={0};
	for (int i = 0; i < size; i++)
	{
		arr[i][i]=1;
	}
	for(int ch = 2;ch<=size;ch++)
	{
		for (int i = 0; i+ch-1 < size; i++)
		{
			if(s[i]==s[i+ch-1] && ch==2)
				arr[i][i+ch-1] = 2;
			else if (s[i]==s[i+ch-1])
			{
				arr[i][i+ch-1] = arr[i+1][i+ch-2] + 2;
			}
			else 
			{
				arr[i][i+ch-1] = max(arr[i][i+ch-2],arr[i+1][i+ch-1]);
			}
		}
	}
	return size-arr[0][size-1];
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
    	string s;
    	cin>>s;
    	cout<<lps(s)<<"\n";
    }     
    return 0;
}