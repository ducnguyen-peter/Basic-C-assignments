#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t; cin>>t;
	while(t--){
		ll n,k; cin>>n>>k;
		cout<<n*(n+1)/2<<endl;
/*		ll res=(k*(k-1)/2)*(n/k);
		int x=n-(n/k)*k;
		res+= (x*(x+1))/2;
		cout<<res<<endl;*/
	}
	return 0;
}
//(a + b) % n = [(a % n) + (b % n)] % n
