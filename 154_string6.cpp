#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
string sum(string a, string b)
{
	string ans = "";
	while(a.length()<b.length()) a = '0'+a;
	while(b.length()<a.length()) b = '0'+b;
	int nho = 0;
	for(int i = a.length()-1; i >= 0; i--)
	{
		int so = int(a[i]-'0') + int(b[i]-'0') + nho;
		if(so>9)
		{
			nho = 1;
			ans = char(so%10+'0') + ans;
		}
		else 
		{
			ans = char(so+'0')+ans;
			nho = 0;
		}
	}
	if(nho>0) ans = '1' + ans;
	return ans;
}
ll toint(string a)
{
	ll ans = 0;
	for(ll i = 0; i < a.length(); i++) ans = ans*10+int(a[i]-'0');
	return ans;
}
void solution(string &a, string &b)
{
	for(int i = 0; i < a.length(); i++)
		if(a[i]=='6') a[i] = '5';
	for(int i = 0; i < b.length(); i++)
		if(b[i]=='6') b[i] = '5';
	cout<<toint(a)+toint(b)<<" ";
	for(int i = 0; i < a.length(); i++)
		if(a[i]=='5') a[i] = '6';
	for(int i = 0; i < b.length(); i++)
		if(b[i]=='5') b[i] = '6';
	cout<<toint(a)+toint(b)<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		string a, b; cin>>a>>b;
		solution(a, b);
	}
	return 0;
}

