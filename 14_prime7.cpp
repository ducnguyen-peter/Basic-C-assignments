#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solution(ll n)
{
	int dem = 0;
	if(n%2==0)
	{
		n/=2;
		dem++;
		if(n%2==0) return 0;
	}
	for(int i = 3; i*i <= n; i+=2)
	{
		if(n%i==0)
		{
			n/=i;
			dem++;
			if(n%i==0) return 0;
		}
	}
	if(dem+1==3) return 1;
	return 0;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		cout<<solution(n)<<endl;
	}
	return 0;
}

