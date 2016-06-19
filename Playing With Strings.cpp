/*
	Author: Hamza Hasbi
	Date: 16-Jun-16 5:14:01 PM
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
bool palindrome (string s)
{
	 for(int i=0;i<s.length();i++)
        {
            if(s[i]!=s[s.size()-1-i]) return false;
        }
        return true;
}
bool compare (pair<char,int>a,pair<char,int>b)
{
	if(a.second>b.second) return true;
	else if (a.second==b.second && a.first < b.first) return true;
	else return false;

}
main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,x=1;
	cin>>t;
	while(t--)
	{
		string s;
		int odd=0;
		bool test1=false;
		cin>>s;
		map<char,int>occ;
		vector<pair<char,int>> p;
		for(int i=0;i<s.size();i++)
		{
			occ[s[i]]++;
		}
		for(int i=0;i<s.size();i++)
		{
			p.push_back(make_pair(s[i],occ[s[i]]));
		}
		sort(p.begin(),p.end());
		vector<char>ans(s.size());
		int g=0,d=s.size()-1,i=0,j=s.size()-1;
		while(g<=d && i<j)
		{
			ans[g]=p[i].first;
			ans[d]=p[++i].first;
			g++;d--;i+=1;
		}
		string res="";
		for(int i=0;i<s.size();i++)
		{
			cout<<ans[i];
			res+=ans[i];
		}
		if(palindrome(res)) cout<<"Case "<<x++<<": "<<res<<endl;
		else cout<<"Case "<<x++<<": "<<"impossible"<<endl;
	}
	cout << flush;
  return 0;
}

