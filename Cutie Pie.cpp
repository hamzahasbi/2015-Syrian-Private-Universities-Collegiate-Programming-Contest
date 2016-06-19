/*
	Author: Hamza Hasbi
	Date: 16-Jun-16 11:34:07 PM
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
		int n,m;
		cin>>n>>m;
		char p[50][50];
		memset(p,'0',sizeof(p));
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>p[i][j];
		/*for(int i=0;i<n;i++)
			for(int j=m;j<m+2;j++)
			{
				p[i][j]=p[i][j-m];
			}
		for(int i=n;i<n+2;i++)
			for(int j=0;j<m;j++)
			{
				p[i][j]=p[i-n][j];
			}
		for(int i=0;i<n;i++)
			for(int j=m;j<m+2;j++)
			{
				p[i][j]=p[i][j-m];
			}
			for(int i=0;i<n+2;i++)
			{
			for(int j=0;j<m+2;j++)
			
				cout<<p[i][j]<<" ";
				cout<<endl;
			}*/
			
		bool check=false;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			  {
			  	if(p[i][j]=='p' && i<2 && j<2)
			  	{
			  		if(p[i][j+1]=='i' && p[i][j+2]=='e') check=true;
			  		else if(p[i+1][j+1]=='i' && p[i+2][j+2]=='e') check=true;
			  		else if(p[i+1][j]=='i' && p[i+2][j]=='e') check=true;
				}
				else if(p[i][j]=='p' && i<2 && j>=2)
				{
					if(p[i][j+1]=='i' && p[i][j+2]=='e') check=true;
			  		else if(p[i+1][j+1]=='i' && p[i+2][j+2]=='e') check=true;
			  		else if(p[i+1][j]=='i' && p[i+2][j]=='e') check=true;
			  		else if(p[i][j-1]=='i' && p[i][j-2]=='e') check=true;
			  		else if (p[i+1][j-1]=='i' && p[i+2][j-2]=='e') check=true;
				}
				else if(p[i][j]=='p' && i>=2 && j<2)
				{
					if(p[i][j+1]=='i' && p[i][j+2]=='e') check=true;
			  		else if(p[i+1][j+1]=='i' && p[i+2][j+2]=='e') check=true;
			  		else if(p[i+1][j]=='i' && p[i+2][j]=='e') check=true;
					else if(p[i-1][j]=='i' && p[i-2][j]=='e') check=true;
					else if(p[i-1][j+1]=='i' && p[i-2][j+2]=='e') check=true;
				}
				
			  	else if(p[i][j]=='p' && i>=2 && j>=2)
			  	{
			  		if(p[i][j+1]=='i' && p[i][j+2]=='e') check=true;
			  		else if(p[i][j-1]=='i' && p[i][j-2]=='e') check=true;
			  		else if(p[i-1][j]=='i' && p[i-2][j]=='e') check=true;
			  		else if(p[i+1][j]=='i' && p[i+2][j]=='e') check=true;
			  		else if(p[i+1][j+1]=='i' && p[i+2][j+2]=='e') check=true;
			  		else if(p[i-1][j-1]=='i' && p[i-2][j-2]=='e') check=true;
			  		else if (p[i+1][j-1]=='i' && p[i+2][j-2]=='e') check=true;
			  		else if(p[i-1][j+1]=='i' && p[i-2][j+2]=='e') check=true;
				}
			  }
		}
		if(check) puts("Cutie Pie!");
		else puts("Sorry Man");
	}
	cout << flush;
  return 0;
}

