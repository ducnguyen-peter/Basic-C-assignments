#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n, x; cin>>n>>x;
		int a[n];
		for(int i = 0; i < n; i++) cin>>a[i];
		int *m = find(a, a+n, x);
		if(m-a==n) cout<<-1<<endl;
		else cout<<m-a+1<<endl;
	}
	return 0;
}

