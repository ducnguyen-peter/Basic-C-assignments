#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solution(ll b, ll p)
{
	ll dem = 0;
	for(ll i = 1; i<p; i++)
	{
		if((i*i)%p==1)
		{
			if(i<=b){
				dem+=(b-i)/p+1;
			}
		}
	}
	cout<<dem<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll b, p; cin>>b>>p;
		solution(b,p);
	}
	return 0;
}

