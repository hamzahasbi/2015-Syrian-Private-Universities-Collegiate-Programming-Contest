/*
	Author: Anass BENDARSI 
	Date: 17/06/2016 01:50:30
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t>>n;
	while(t--){
		int x1,y1,x2,y2;
		cin>>x1>>y1;
		cin>>x2>>y2;
		if((abs(x1-x2)%2==0 && abs(y1-y2)%2==0)
			||(abs(x1-x2)%2==1 && abs(y1-y2)%2==1))
			cout<<max(abs(x1-x2),abs(y1-y2))<<endl;
		else cout<<"can't reach!"<<endl;
	}

	return 0;
}
