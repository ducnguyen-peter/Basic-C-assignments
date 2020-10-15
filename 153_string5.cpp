#include<bits/stdc++.h>
#include<map>
using namespace std;
void solution(string s)
{
	map<char,int> m;
	map<char,int> ::iterator it;
	int freq=0;
	for(int i=0;i<s.length();i++) m[s[i]]++;
	for(it=m.begin();it!=m.end();it++) freq=max(freq,it->second);
	if(freq>s.length()/2) cout<<0<<endl;
	else cout<<1<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		solution(s);
	}
	return 0 ;
}
