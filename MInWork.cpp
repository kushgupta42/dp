/*
* Skip the work 
* @Author: kush
* @Date:   2019-10-13 15:40:49
* @Last Modified by:   kush
* @Last Modified time: 2019-10-13 15:56:20
*/
#include<bits/stdc++.h>
using namespace std;
int minwork(int arr[],int n)
{
	if(n<=0)
		return 0;
	int incl = arr[0];
	int excl = 0;
	for(int i=1;i<n;i++)
	{
		int new_incl = arr[i] + min(incl,excl);
		int new_excl = incl;
		incl = new_incl;
		excl = new_excl;
	}
	return min(incl,excl);
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
    	int arr[n];
    	for (int i = 0; i < n; i++)
    	{
    		cin>>arr[i];
       	}
       	cout<<minwork(arr,n)<<"\n";
    }     
    return 0;
}