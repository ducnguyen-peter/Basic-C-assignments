#include<bits/stdc++.h>
using namespace std;
int solution(int a[], int n, int k)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i]<=k) dem++;
	}
	int lonhon = 0;
	for(int i = 0; i < dem; i++)
	{
		if(a[i]>k) lonhon++;
	}
	int ans = lonhon;
	int i = 0, j = dem;
	while(j<n)
	{
		if(a[i]>k) lonhon--;
		if(a[j]>k) lonhon++;
		ans = min(ans, lonhon);
		i++; j++;
	}
	return ans;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n, k; cin>>n>>k;
		int a[n];
		for(int i = 0; i < n; i++) cin>>a[i];
//		cout<<solution(a,n,k)<<endl;
		cout<<solution(a,n,k)<<endl;
	}
	return 0;
}

