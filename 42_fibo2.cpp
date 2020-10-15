#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[94];
void sinhfibo()
{	
	f[1] = 0, f[2] = 1;
	for(int i = 3; i <= 93; i++)
	{
		f[i] = f[i-1] + f[i-2];
	}
}
int main()
{
	int t; cin>>t;
	sinhfibo();
	while(t--){
		ll n; cin>>n;
		int kt = 0;
		for(int i = 1; i <= 93; i++)
		{
			if(f[i]==n) kt = 1;
		}
		if(kt) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}

