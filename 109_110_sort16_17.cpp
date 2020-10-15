#include<bits/stdc++.h>
using namespace std;
int d[10000];
bool compare(int a, int b)
{
	return d[a]>d[b] || (d[a]==d[b]&&a<b);
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		memset(d,0,sizeof(d));
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
			d[a[i]]++;
		}
		sort(a, a+n, compare);
		for(int i = 0; i < n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}

