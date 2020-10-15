#include<bits/stdc++.h>
using namespace std;
int nhohon(string s1, string s2)
{
	int n1 = s1.length(), n2 = s2.length();
	if(n1<n2) return 1;
	if(n1>n2) return 0;
	for(int i = 0; i < n1; i++)
	{
		if(s1[i]<s2[i]) return 1;
		else if(s1[i]>s2[i]) return 0;
	}
	return 2;
}
string tru(string a, string b)
{
	if(nhohon(a,b)==2) return "0";
	string res = "";
	if(nhohon(a,b)) a.swap(b);
	while(a.length()<b.length()) a = '0' + a;
	while(a.length()>b.length()) b = '0' + b;
	int nho = 0;
	for(int i = a.length()-1; i >= 0; i--)
	{
		int so = int(a[i]-'0') - int(b[i]-'0') - nho;
		if(so<0)
		{
			res = char(so+10+'0') + res;
			nho = 1;
		}
		else
		{
			res = char(so+'0') + res;
			nho = 0;
		}
	}
	int i = 0;
	while(res[i]=='0') i++;
	res.erase(0,i);
	return res;
}
string multiply(string s1, string s2)
{
	if(s1=="0"||s2=="0") return "0";
	int len1 = s1.size();
	int len2 = s2.size();
	int len = len1 + len2;
	vector<int> a, b;
	for(int i = 0; i < len1; i++) a.push_back(int(s1[i]-'0'));
	for(int i = 0; i < len2; i++) b.push_back(int(s2[i]-'0'));
	vector<vector<int> > res(len2);
	int index = 0;
	for(int i = len2-1; i>=0; i--)
	{
		int t = 0;
		while(t<index)
		{
			res[index].push_back(0);
			t++;
		}
		int nho = 0, so = 0;
		for(int j = len1-1; j>=0; j--)
		{
			so = a[j]*b[i]+nho;
			res[index].push_back(so%10);
			nho=so/10;
		}
		if(nho>0) res[index].push_back(nho);
		while(res[index].size()<len) res[index].push_back(0);
		reverse(res[index].begin(), res[index].end());
		index++;
	}
	int nho = 0;
	string ans = "";
	for(int j = res[0].size()-1; j>=0; j--)
	{
		int so = nho;
		for(int i = 0; i<res.size(); i++)
		{
			so+=res[i][j];
		}
		ans = char(so%10+'0')+ans;
		nho = so/10;
	}
	if(nho>0) ans = char(nho+'0') + ans;
	while(ans[0]=='0') ans.erase(ans.begin());
	return ans;
}
/*string div(string a, string b)
{
	if(nhohon(a,b)) return "0";
	string res = "";
	while(nhohon(a,b)==0)
	{
		string temp1 = "";
		temp1 = temp1 + a[0];
		int i = 1;
		while(nhohon(temp1,b))
		{
			temp1 = temp1 + a[i];
			i++;
		}
		a.erase(0, i);
		int tmp = 0;
		while(nhohon(b,temp1))
		{
			temp1 = tru(temp1,b);
			tmp++;
		}
		cout<<tmp;
		res = res + char(tmp+'0');
		a = temp1 + a;
	}
	return res;
}*/
string div(string a, string b)
{
	if(nhohon(a,b)==1) return "0";
	string res = "";
	string tmp, tmp1, tmp2;
	int i = 0;
	tmp1.resize(1);
	while(i<a.size())
	{
		if(tmp=="0") tmp[0] = a[i];
		else tmp += a[i];
		if(nhohon(tmp,b)!=1||res.size()>0)
		{
			for(int j = 9; j>=0; j--)
			{
				tmp1[0] = char(j+'0');
				tmp2 = multiply(tmp1, b);
				if(nhohon(tmp, tmp2)!=1)
				{
					res = res + char(j+'0');
					tmp = tru(tmp, tmp2);
					break;
				}
			}
		}
		i++;
	}
	return res;
}
int main()
{
	int t; cin>>t;
	while(t--){
		string a, b;
		cin>>a>>b;
		cout<<div(a,b)<<endl;
	}
	return 0;
}

