#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(int a[], int n, int k, int x)
{
	int pivot = lower_bound(a, a + n, x) - a;
	if(a[pivot]>=x) pivot--;
	if(pivot==-1)
	{
		for(int j = pivot; j < k; j++) cout<<a[j]<<" ";
	}
	else if(pivot==n)
	{
		for(int j = pivot-k; j <= pivot-1; j++) cout<<a[j]<<" ";
	}
	else
	{
		int i = pivot, j = pivot+1;
		while((i>=0 || j<n) && k>0)
		{
			cout<<a[i--]<<" ";
			k--;
			if(a[j]==x) 
			{
				cout<<"";
				j++;
				cout<<a[j++]<<" ";
				k--;
			}
			else
			{
				cout<<a[j++]<<" ";
				k--;
			}
		}
	}
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n, k, x; cin>>n;
		int a[n];
		for(int i = 0; i < n; i++) cin>>a[i];
		cin>>k>>x;
		solution(a, n, k, x);
	}
	return 0;
}

