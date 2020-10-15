#include<bits/stdc++.h>
using namespace std;
int n, a[21];
void init()
{
	for(int i = 1; i <= n; i++) a[i] = i;
}
void result()
{
	for(int i = 1; i <= n; i++) cout<<a[i];
	cout<<" ";
}
int OK;
void solution()
{
	int i = n;
	while(i>1 && a[i-1]>a[i]) i--;
	if(i==1) OK = 0;
	int k = n;
	while(a[k]<a[i-1]) k--;
	swap(a[i-1],a[k]);
	int l = i, r = n;
	while(l<r)
	{
		swap(a[l],a[r]);
		l++; r--;
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		cin>>n;
		init();
		OK = 1;
		while(OK)
		{
			result();
			solution();
		}
		cout<<endl;
	}
	return 0;
}

