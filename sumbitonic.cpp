/*
* @Author: kush
* @Date:   2019-10-13 17:36:56
* @Last Modified by:   kush
* @Last Modified time: 2019-10-13 20:41:02
*/
#include<bits/stdc++.h>
using namespace std;
int biot(int n,int arr[])
{
	int MSIBS[n], MSDBS[n]; 
	int max_sum = INT_MIN;
    for (int i = 0; i < n; i++) { 
        MSDBS[i] = arr[i]; 
        MSIBS[i] = arr[i]; 
    } 

	for (int i = 1; i < n; i++) 
        for (int j = 0; j < i; j++) 
            if (arr[i] > arr[j] && MSIBS[i] < MSIBS[j] + arr[i]) 
                MSIBS[i] = MSIBS[j] + arr[i]; 
    for (int i = n - 2; i >= 0; i--) 
        for (int j = n - 1; j > i; j--) 
            if (arr[i] > arr[j] && MSDBS[i] < MSDBS[j] + arr[i]) 
                MSDBS[i] = MSDBS[j] + arr[i]; 

    for (int i = 0; i < n; i++) 
        max_sum = max(max_sum, (MSDBS[i] + MSIBS[i] - arr[i])); 

    return max_sum;
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
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>arr[i];
    	}
    	cout<<biot(n,arr)<<"\n";
    }     
    return 0;
}