/*
	Author: Hamza Hasbi
	Date: 17-Jun-16 11:06:27 PM
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define ans 100000
using namespace std;
ll search (vector<ll>a,ll x)
{
	ll minx=ans;
	for(ll i=0;i<a.size();i++)
	{
		if(a[i]>x && a[i]<minx) 
		{
			minx=a[i];
		}
	}
	return minx;
}
main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t ;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<vector<ll>> tab(20002);
		ll x;
		ll maxx=0,c=0,indice=-1;
		for(ll i=1;i<=n;i++)
		{
			cin>>x;
			tab[x].push_back(i);
		}
		/*for(ll i=0;i<=7;i++)
		{
			for(int j=0;j<tab[i].size();j++)
			cout<<i<<"  "<<tab[i][j]<<" ";
			cout<<endl;
		}*/		
		for(ll i=0;i<=20000;i++)
		{
			ll r=search(tab[i],indice);
			//cout<<indice<<" "<<r<<endl;
			if(tab[i].size()>0 && r!=ans) 
			{
				indice=r;
				c++;
			}
			else 
			{
				if(c>maxx) maxx=c;
				indice=-1;
				c=0;
			}
		}
		if(c>maxx) maxx=c;
		cout<<maxx<<endl;
	}
	//cout << flush;
  return 0;
}

