/*
* Count number of hops
* @Author: kush
* @Date:   2019-10-13 03:25:05
* @Last Modified by:   kush
* @Last Modified time: 2019-10-13 15:25:59
*/
#include<bits/stdc++.h>
using namespace std;
int nofohoops(int n)
{
	
	int arr[n+1];
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 2;
	for(int i=3;i<n+1;i++)
	{
		arr[i] = arr[i-1]+arr[i-2]+arr[i-3];
	}
	return arr[n];	
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
    	cout<<nofohoops(n);
    	cout<<"\n";
    }     
    return 0;
}