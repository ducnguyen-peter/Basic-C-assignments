#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long ll;
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
void fibonacci(ll n)
{
	string f[n+1];
	f[1] = "0", f[2] = "1";
	for(int i = 3; i <= n; i++)
	{
		f[i] = sum(f[i-1], f[i-2]);
	}
	cout<<f[n]<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		fibonacci(n);
	}
	return 0;
}

