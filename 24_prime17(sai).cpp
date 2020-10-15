#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isprime(ll n)
{
	if(n<2) return 0;
	if(n==2) return 1;
	ll dem = 0;
	for(int i = 2; i*i<=n; i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
//int prime[1000005]={0};
//void sang()
//{
//	prime[0]=1; prime[1]=1;
//		for(int i=2;i*i<=1000000;i++)
//			if(prime[i]==0)
//				for(int j=i*i; j<=1000000; j+=i)
//					prime[j]=1;
//}
ll solution(ll l, ll r)
{
	int dem = 0;
	for(ll i = l; i*i<=r; i++)
		if(isprime(i)) dem++;
	return dem;
}
int main()
{
	int t; cin>>t;
//	sang();
	while(t--){
		ll l,r; cin>>l>>r;
		cout<<solution(l,r)<<endl;
	}
	return 0;
}

