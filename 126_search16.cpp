#include<bits/stdc++.h>
#include<set>
using namespace std;
typedef long long ll;
void solution(ll a1[], ll a2[], ll a3[], ll n1, ll n2, ll n3)
{
	ll i = 0, j = 0, k = 0;
	bool kt = 0;
	while(i<n1 && j<n2 && k<n3)
	{
		if(a1[i]==a2[j] && a2[j]==a3[k])
		{
			cout<<a1[i]<<" ";
			i++; j++; k++;
			kt = 1;
		}
		else if(a1[i]<a2[j]) i++;
		else if(a2[j]<a3[k]) j++;
		else k++;
	}
	if(!kt) cout<<-1;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n1, n2, n3; cin>>n1>>n2>>n3;
		ll a1[n1], a2[n2], a3[n3];
		set<ll> set, res1;
		for(int i = 0; i < n1; i++) cin>>a1[i];
		for(int i = 0; i < n2; i++) cin>>a2[i];
		for(int i = 0; i < n3; i++) cin>>a3[i];
		solution(a1,a2,a3,n1,n2,n3);
		cout<<endl;
	}
	return 0;
}

