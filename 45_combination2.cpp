#include<bits/stdc++.h>
using namespace std;
int n, k, a[21];
void init()
{
	for(int i = 1; i <= k; i++)
	{
		a[i] = i;
	}
}
void result(int a[], int n)
{
	for(int i = 1; i<=n; i++) cout<<a[i];
	cout<<" ";
}
int OK;
void solution()
{
	int i = k;
	while(i>0 && a[i]==n-k+i) i--;
	if(i>0)
	{
		a[i]++;
		for(int j = i+1; j<=k; j++)
		{
			a[j] = a[i] + j - i;
		}
	}
	else OK = 1;
}
int main()
{
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		init();
		OK = 0;
		while(OK!=1)
		{
			result(a,k);
			solution();
		}
		cout<<endl;
	}
	return 0;
}

