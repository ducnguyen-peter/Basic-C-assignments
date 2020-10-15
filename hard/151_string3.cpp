#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using namespace std;
int lastdigit2N(int n)
{
	if(n==0) return 1;
	int h=1;
	int x=2;
	while(n>0)
	{
		if(n%2) h=h*x%10;
		x=x*x%10;
		n/=2;
	}
	return h;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		int last=0, n = s.length()-1;
		for(int i=s.length()-1; i>=0; i--)
		{
			if(s[i]=='1')
				last=(last + lastdigit2N(n-i))%10;
		}
		if(last==0 || last==5) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
}
