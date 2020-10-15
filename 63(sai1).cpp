#include<bits/stdc++.h>
using namespace std;
int binary(int a[], int n, int x, int low, int high)
{
	if(high>=low)
	{
		int mid = low + (high-low)/2;
		if((mid==0||x>a[mid-1]) && a[mid]==x) return mid;
		if(x>a[mid]) return binary(a,n,x,mid+1,high);
		return binary(a,n,x,low,mid-1);
	}
	return -1;
}
void solution(int a1[], int a2[], int n, int m)
{
	int tmp[n], vis[n];
	for(int i = 0; i < n; i++) 
	{
		tmp[i] = a1[i];
		vis[i] = 0;
	}
	sort(tmp, tmp + n);
	int ind = 0;
	for(int j = 0; j < m; j++)
	{
		int f = binary(tmp, n, a2[j], 0, n-1);
		if(f==-1) continue;
		for(int i = f; (i<n && tmp[i] == a2[j]); i++)
		{
			a1[ind++] = tmp[i];
			vis[i] = 1;
		}
	}
	for(int i = 0; i < n; i++)
	{
		if(vis[i]==0)
		{
			a1[ind++] = tmp[i];
		}
	}
	for(int i = 0; i < n; i++) cout<<a1[i]<<" ";
	cout<<endl;
}

int main()
{
	int t; cin>>t;
	while(t--){
		int n, m; cin>>n>>m;
		int a1[n], a2[m];
		for(int i = 0; i < n; i++) cin>>a1[i];
		for(int i = 0; i < m; i++) cin>>a2[i];
		solution(a1, a2, n, m);
	}
	return 0;
}

