#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	int f[18];
	f[0] = 0, f[1] = 1;
	for(int i = 2; i < 18; i++)
	{
		f[i] = f[i-1] + f[i-2];
	}
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i = 0; i<n; i++) cin>>a[i];		
		for(int i = 0; i < n; i++)
		{
			int check = 0;
			for(int j = 0; j < 18; j++)
			{
				if(a[i]==f[j]) 
				{
					check = 1;
					break;
				}
			}
			if(check==1) cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

