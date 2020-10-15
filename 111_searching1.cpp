#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n, x; cin>>n>>x;
		int a[n];
		for(int i = 0; i < n; i++) cin>>a[i];
		int m = find(a, a+n, x)-a;
		if(m==n) cout<<-1<<endl;
		else cout<<m+1<<endl;
	}
	return 0;
}

