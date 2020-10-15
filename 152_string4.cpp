#include<bits/stdc++.h>
using namespace std;
int solution(string a, int k)
{
	int n = a.length(), ans = 0;
	for(int i = 0; i < n; i++)
	{
		int m = 0;
		for(int j = i; j < n; j++)
		{
			m = (m*10+(a[j]-'0'))%k;
			if(m==0) ans++;
		}
	}
	return ans;
}
int main()
{
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		cout<<solution(s, 8)-solution(s, 24)<<endl;
	}
	return 0;
}

