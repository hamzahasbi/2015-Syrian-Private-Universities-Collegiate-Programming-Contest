/*
	Author: Anass BENDARSI 
	Date: 16/06/2016 16:29:38
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
	for(int k=1;k<=t;k++){
		string mot;
		int tab[26]={0};
		cin>>mot;
		for(int i=0;i<mot.size();i++){
			tab[mot[i]-'a']++;	
		}
		/*for(int i=0;i<26;i++){
			cout<<tab[i]<<" ";
		}
		cout<<endl;*/
		int c=0;
		for(int i=0;i<26;i++){
			if(tab[i]%2==1) c++;
		}
		if(c>1) cout<<"Case "<<k<<": "<<"impossible"<<endl;
		else{
			string str="",str2="";
			int indice=-1;
			for(int i=0;i<26;i++){
				if(tab[i]%2==1) indice=i;
				for(int j=0;j<tab[i]/2;j++){
					str+='a'+i;
				}
			}
			for(int i=str.size()-1;i>=0;i--){
				str2+=str[i];
			}
			if(indice>=0)str+='a'+indice;
			str+=str2;
		 cout<<"Case "<<k<<": "<<str<<endl;
		}
	}

	return 0;
}
