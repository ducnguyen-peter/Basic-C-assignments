#include<bits/stdc++.h>
using namespace std;
int solution(int a[], int n, int x)
{
	sort(a, a+n);
	for(int i = 0; i < n; i++)
	{
		if(binary_search(a, a+n, x+a[i]))
		{
			return 1;
		}
	}
	return -1;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n, x; cin>>n>>x;
		int a[n];
		for(int i = 0; i < n; i++) cin>>a[i];
		cout<<solution(a,n,x)<<endl;
	}
	return 0;
}

