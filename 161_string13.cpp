#include<bits/stdc++.h>
#include<string>
#include<set>
using namespace std;
int solution(string a, int k)
{
	int n = a.length();
	int ans = 0;
	int count[26];
	for(int i = 0; i < n; i++)
	{
		int distinct = 0;
		memset(count,0,sizeof(count));
		for(int j = i; j < n; j++)
		{
			if(count[a[j]-'a']==0) distinct++;
			count[a[j]-'a']++;
			if(distinct==k) ans++;
			if(distinct>k) break;
		}
	}
	return ans;
}
int main()
{
	int t; cin>>t;
	while(t--){
		string s; int k;
		cin>>s>>k;
		cout<<solution(s, k)<<endl;
	}
	return 0;
}

