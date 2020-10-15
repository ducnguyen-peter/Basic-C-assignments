#include<bits/stdc++.h>
using namespace std;
/*bool compare(pair<int, int> a, pair<int, int> b)
{
	return a.first<b.first;
}*/
int solution(int a[], int n)
{
	pair<int, int> apos[n];
	for(int i = 0; i < n; i++)
	{
		apos[i].first = a[i];
		apos[i].second = i;
	}
	sort(apos, apos + n);
	vector<bool> vis(n, false);
	int ans = 0;
	for(int i = 0; i < n; i++)
	{
		if(vis[i] || apos[i].second == i) continue;
		int cyclesize = 0;
		int j = i;
		while(!vis[j])
		{
			vis[j] = 1;
			j = apos[j].second;
			cyclesize++;
		}
		if(cyclesize>0) ans+=cyclesize-1;
	}
	return ans;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i = 0; i < n; i++) cin>>a[i];
		cout<<solution(a,n)<<endl;
	}
	return 0;
}

