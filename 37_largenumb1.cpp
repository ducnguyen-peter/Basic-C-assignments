#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int nhohon(string s1, string s2)
{
	int n1 = s1.length(), n2 = s2.length();
	if(n1 < n2) return 1;
	if(n1 > n2) return 0;
	
	for(int i = 0; i < n1; i++)
	{
		if(s1[i]<s2[i]) return 1;
		else if(s1[i]>s2[i]) return 0;
	}
	return 2;
}
string diff(string a, string b)
{
	if(nhohon(a,b)==2) return "0";
	string res = "";
	if(nhohon(a,b)==1) a.swap(b);
	while(b.length()<a.length()) b = '0' + b;
	while(a.length()<b.length()) a = '0' + a;
	int nho = 0;
	for(int i = a.length()-1; i>=0; i--)
	{
		int sub = int(a[i]-'0') - int(b[i]-'0') - nho;
		if(sub<0)
		{
			res = char(sub+10+'0') + res;
			nho = 1;
		}
		else 
		{
			res = char(sub+'0') + res;
			nho = 0;
		}
	}
	int i = 0;
	while(res[i]=='0') i++;
	res.erase(0,i);
	return res;
}
int main()
{
	int t; cin>>t;
	while(t--){
		string a, b; cin>>a>>b;
		cout<<diff("126","111")<<endl;
	}
	return 0;
}

