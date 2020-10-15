#include<bits/stdc++.h>
using namespace std;
void result(int a[], int n)
{
	for(int i = 0; i < n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
void solution(int a[], int n)
{
	int b[n];
	for(int i = 0; i < n; i++) b[i] = a[i];
	for(int i = 1; i < n-1; i++)
	{
		b[i] = a[i-1]*a[i+1];
	}
	b[0] = a[0]*a[1];
	b[n-1] = a[n-1]*a[n-2];
	result(b,n);
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		solution(a,n);
	}
	return 0;
}

