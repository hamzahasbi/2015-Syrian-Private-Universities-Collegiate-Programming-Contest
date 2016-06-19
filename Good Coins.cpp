/*
	Author: Hamza Hasbi
	Date: 16-Jun-16 3:06:08 PM
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		if(__gcd(a,b)==1) puts("GOOD");
		else puts("NOT GOOD");
	}
	cout << flush;
  return 0;
}

