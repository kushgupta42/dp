/*
* Reach a given score
* @Author: kush
* @Date:   2019-10-12 02:41:57
* @Last Modified by:   kush
* @Last Modified time: 2019-10-12 02:44:47
*/
#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
	int arr[n+1]={0};
	arr[0] = 1;
	for(int i=3;i<=n;i++)
		arr[i]+=arr[i-3];
	for(int i=5;i<=n;i++)
		arr[i]+=arr[i-5];
	for(int i=10;i<=n;i++)
		arr[i]+=arr[i-10];
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
    	cout<<check(n)<<"\n";
    }
    return 0;
}