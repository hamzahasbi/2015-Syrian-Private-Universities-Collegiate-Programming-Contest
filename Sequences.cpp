/*
	Author: Hamza Hasbi
	Copyrights: "h.hamza" ==> "www.hamzahasbi.me"
	Date: 07/09/2017 15:55:29
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define uld unsigned long double
#define ui unsigned int
#define ud unsigned double
#define uf unsigned float
#define pi 2*acos(0.0)
#define module cin.ignore()
#define rep(i,l,r) for(auto i=l;i<=r;i++)
#define range(x,y) for(auto x:y)
//inline long longlcm(ll a,ll b) {return a*b/__gcd(a,b);}
//inline long long gcd(ll a,ll b) {return 1LL*b == 0 ? a : gcd(1LL*b, a*1LL % b*1LL);}
using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		vector <int> a(n);
		vector <vector<int> > pos(200000);
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			pos[a[i]].push_back(i);
		}
		int best = 0;
		for(int i = 0; i < n; ++i){
		      int next = a[i] + 1;
		      int len = 1;
		      int ind = i;
		      while (1) {
		        if (pos[next].size() == 0) break;
		        auto it = lower_bound(pos[next].begin(),pos[next].end(),ind);
		        if (it != pos[next].end()) {
		          next ++;
		          ind = *it;
		        }
		        else break;
		        len ++;
		      }
		      
		      best=max(best,len);
		}
		cout << best << endl;
	}
	
	return 0;
}
