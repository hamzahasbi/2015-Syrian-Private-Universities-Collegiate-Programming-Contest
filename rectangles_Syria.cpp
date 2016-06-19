/*
	Author: Anass BENDARSI 
	Date: 16/06/2016 13:14:50
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int tab[102]={0};
		for(int m=0;m<n;m++){
			int i,j,k;
			cin>>i>>j>>k;
			for(int l=i+1;l<=j ;l++){
				if(tab[l]<k) tab[l]=k;
			}
		}
		long r=0;
		for(int m=0;m<101;m++) r+=tab[m];
		cout<<r<<endl;
	}
	return 0;
}
