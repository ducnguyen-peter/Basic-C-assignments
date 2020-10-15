#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t; cin>>t;
	while(t--){
		int k, n; cin>>k>>n;
		int a[k*n+1];
		for(int i = 0; i < k*n; i++) cin>>a[i];
		sort(a, a+k*n);
		for(int i = 0; i < k*n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}

