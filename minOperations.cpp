/*
https://practice.geeksforgeeks.org/problems/find-optimum-operation/0
* @Author: kush
* @Date:   2019-10-13 16:50:01
* @Last Modified by:   kush
* @Last Modified time: 2019-10-13 16:52:45
*/
#include<bits/stdc++.h>
using namespace std;
int minoperations(int n)
{
	int oper=0;
	while(n)
	{
		oper++;
		if(n%2==0)
			n/=2;
		else if(n%2)
			n--;
	}
	return oper;
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
    	cout<<minoperations(n)<<"\n";
    }
    return 0;
}