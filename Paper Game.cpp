/*
	Author: Hamza Hasbi
	Date: 15-Jun-16 12:16:53 PM
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		bool check;
		cin>>x>>y;
		((x*y)%2==0)? check=true: check=false ;
		if(check) puts("Hasan");
		else puts("Hussain");
	}
	cout << flush;
  return 0;
}
