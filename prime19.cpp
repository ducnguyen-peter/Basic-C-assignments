#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int prime[1000005]={0};
void sang()
{
	prime[0]=1; prime[1]=1;
		for(int i=2;i*i<=1000000;i++)
			if(prime[i]==0)
				for(int j=i*i; j<=1000000; j+=i)
					prime[j]=1;
}
void solution(ll l, ll r)
{
	for(int i = l; i<=r; i++)
	{
		if(prime[i]==0) cout<<i<<" ";
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll l,r; cin>>l>>r;
		sang();
		solution(l,r);
	}
	return 0;
}

