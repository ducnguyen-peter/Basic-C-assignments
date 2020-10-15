#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n+1];
		set<int>set;
		for(int i = 0; i < n; i++) cin>>a[i];
		int i = 0;
		for(; i < n; i++)
		{
			if(set.find(a[i])==set.end())
				set.insert(a[i]);
			else 
			{
				cout<<a[i]<<endl;
				break;
			}
		}
		if(i==n) cout<<-1<<endl;
	}
	return 0;
}

