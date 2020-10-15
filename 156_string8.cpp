#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ll;
ll toint(string a)
{
	ll ans = 0;
	for(ll i = 0; i < a.length(); i++) ans = ans*10+int(a[i]-'0');
	return ans;
}
ll solution(string a)
{
	ll res = 0;
	for(ll i = 0; i < a.length(); i++)
	{
		string tmp = "";
		while(a[i]>='0' && a[i]<='9')
		{
			tmp = tmp + a[i];
			i++;
		}
		res+=toint(tmp);
	}
	return res;
}
int main()
{
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		cout<<solution(s)<<endl;
	}
	return 0;
}

