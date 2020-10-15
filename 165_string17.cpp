#include<bits/stdc++.h>
#include<set>
using namespace std;
string solution(string a)
{
	set<char> s;
	int n = a.length();
	string tmp = "";
	for(int i = 0; i < n; i++)
	{
		if(s.find(a[i])==s.end())
		{
			s.insert(a[i]);
			tmp = tmp+a[i];
		}
		else
		{
			int x = tmp.find(a[i], 0);
			if(x!=-1) tmp.erase(tmp.begin()+x);
		}
	}
	return tmp;
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

