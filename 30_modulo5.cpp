#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t; cin>>t;
	while(t--){
		string n;
		ll m;
		cin>>n; cin>>m;
		ll s = 0;
		for(int i = 0; i < n.size(); i++)
		{
			s = (s*10+(n[i]-'0'))%m;
		}
		cout<<s<<endl;
	}
	return 0;
}

