#include<bits/stdc++.h>
using namespace std;
int solution(string a)
{
	int res = 0;
	int n = a.length();
	res+=n;
	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
			if(a[i]==a[j]) res++;
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

