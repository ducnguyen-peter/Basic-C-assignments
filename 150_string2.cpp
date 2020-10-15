#include<bits/stdc++.h>
using namespace std;
int solution(string a)
{
	int b = 0;
	for(int i = 0; i < a.length(); i++)
	{
		b = (b*10+(a[i]-'0'))%11;
	}
	if(b==0) return 1;
	return 0;
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

