#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n, x; cin>>n>>x;
		int a[n+1];
		int dem = 0;
		for(int i = 0; i < n; i++) 
		{
			cin>>a[i];
			if(x==a[i]) dem++;
		}
		if(dem==0) cout<<-1<<endl;
		else cout<<dem<<endl;
	}
	return 0;
}

