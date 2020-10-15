#include<bits/stdc++.h>
using namespace std;
void solution(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i+1]!=0&&a[i]==a[i+1])
		{
			a[i] = a[i]*2;
			a[i+1] = 0;
		}
	}
	int i = 0, j = 0;
	for(; i<n; i++)
	{
		if(a[i]!=0) 
		{
			cout<<a[i]<<" ";
			j++;
		}
	}
	while(j<n && j++) cout<<0<<" ";
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i = 0; i < n; i++) cin>>a[i];
		solution(a, n);
	}
	return 0;
}

