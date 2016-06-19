/*
	Author: Hamza Hasbi
	Date: 16-Jun-16 12:00:38 PM
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,x=1;
	cin>>t;
	while(t--)
	{
		int n,r=0,ans=0;
		cin>>n;
		vector<int>score(n);
		int p[20];
		memset(p,0,sizeof(p));
		for(int i=0;i<n;i++)
		{
			cin>>score[i];
			
		}
		sort(score.begin(),score.end());
		for(int i=0;i<n;i++)
		{
			if(i==0) p[i]=score[i];
			else p[i]=p[i-1]+score[i];
		}
		int j;
		for(j=0;j<n;j++)
		{
			if(p[j]>300) break;
			ans+=p[j];
			r++;
		}
		cout<<"Case "<<x++<<": "<<r<<" "<<ans<<endl;
	}
	cout << flush;
  return 0;
}

