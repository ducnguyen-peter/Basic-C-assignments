#include<bits/stdc++.h>
#include<set>
#include<string>
using namespace std;
typedef long long ll;
bool solution(string a, ll k)
{
	set<char> set;
//	qwqqwqeqqwdsdadsdasadsfsdsdsdasasas
//	set = {q, w, e, }
	for(ll i = 0; i < a.size(); i++)
	{
		if(set.find(a[i])==set.end())
		{
			set.insert(a[i]);
		}
	}
	return k>=26-set.size();
}
int main()
{
	int t; cin>>t;
	while(t--){
		string s; ll k;
		cin>>s>>k;
		cout<<solution(s, k)<<endl;
	}
	return 0;
}

