/*
* @Author: kush
* @Date:   2019-10-11 17:36:16
* @Last Modified by:   kush
* @Last Modified time: 2019-10-11 23:45:39
*/
#include<bits/stdc++.h>
using namespace std;
int offering(int arr[],int n)
{
	int left[n],right[n];
	left[0] = 1;
	right[n-1]=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[i-1])
			left[i]=left[i-1]+1;
		else 
			left[i] = 1;
	}
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i] > arr[i+1])
			right[i] = right[i+1] + 1;
		else
			right[i] = 1;
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum+=max(left[i],right[i]);
	}
	return sum;
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
    	cout<<offering(arr,n)<<"\n";
    }     
    return 0;
}