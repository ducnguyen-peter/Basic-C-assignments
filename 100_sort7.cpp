#include<bits/stdc++.h>
using namespace std;
void solution(int a[], int n)
{
	int b[n], l = 0, r = 0;
	for(int i = 0; i < n; i++) b[i] = a[i];
	sort(b, b + n);
	for(int i = 0; i < n; i++)
		if(a[i]!=b[i]) 
		{
			l = i+1;
			break;
		}
	for(int i = n-1; i >= 0; i--)
		if(a[i]!=b[i])
		{
			r = i + 1;
			break;
		}
	cout<<l<<" "<<r<<endl;
//	a[] = {10 12 20 30 25 40 32 31 35 50 60}
//	b[] = {10 12 20 25 30 31 32 35 40 50 60}
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n+1];
		for(int i = 0; i < n; i++) cin>>a[i];
		solution(a, n);
	}
	return 0;
}

