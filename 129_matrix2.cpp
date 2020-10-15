#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
int a[100][100];
//int d[100000];
int solution(int n)
{
	int ans = 0;
/*	for(int i = 0; i < n; i++)
	{
		set<int> set;
		for(int j = 0; j < n; j++)
		{
			if(set.find(a[i][j])==set.end()) 
			{
				set.insert(a[i][j]); d[a[i][j]]++;
			}
		}
	}
	for(int i = 0; i < 100000; i++)
	{
		if(d[i]==n) ans++;
	}*/
	map<int, int> mp;
	for(int i = 0; i < n; i++) mp[a[0][i]] = 1;
	for(int i = 1; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(mp[a[i][j]]==i)
			{
				mp[a[i][j]] = i+1;
				if(i==n-1) ans++;
			}
		}
	}
	return ans;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) cin>>a[i][j];
		cout<<solution(n)<<endl;
	}
	return 0;
}

