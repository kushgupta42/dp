/*
* @Author: kush
* @Date:   2019-10-14 01:52:56
* @Last Modified by:   kush
* @Last Modified time: 2019-10-14 02:12:18
*/
#include<bits/stdc++.h>
using namespace std;
int noofmoves(string s)
{
	int i = s.length() -1;
	int count = 0;
	while(i>=0)
	{
		if((i+1)%2==0 && (s.substr(0,(i+1)/2) == s.substr((i+1)/2,(i+1)/2)))
		{
			count++;
			i=i/2; 
		}
		else
			{
				count++;
				i--;
			}
	}
	return count;
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
    	string s;
    	cin>>s;
    	cout<<noofmoves(s)<<"\n";
    }     
    return 0;
}