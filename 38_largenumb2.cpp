#include<bits/stdc++.h>
using namespace std;
string sum(string a, string b)
{
	string res = "";
	while(a.length()<b.length()) a = '0' + a;
	while(a.length()>b.length()) b = '0' + b;
	int nho = 0;
	for(int i = a.length()-1; i>=0; i--)
	{
		int add = int(a[i]-'0') + int(b[i]-'0') + nho;
		if(add>9)
		{
			res = char(add%10+'0') + res;
			nho = 1;
		}
		else
		{
			res = char(add+'0') + res;
			nho = 0;
		}
	}
	if(nho>0) res='1'+res;
	return res;
}
int main()
{
	int t; cin>>t;
	while(t--){
		string a, b;
		cin>>a>>b;
		cout<<sum(a,b)<<endl;
	}
	return 0;
}

