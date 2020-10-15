#include<bits/stdc++.h>
using namespace std;
int sosanh(string s1, string s2)
{
	int n1 = s1.length(), n2 = s2.length();
	if(n1 < n2) return 1;
	if(n1 > n2) return 0;
	
	for(int i = 0; i < n1; i++)
	{
		if(s1[i]<s2[i]) return 1;
		else if(s1[i]>s2[i]) return 0;
	}
	return 0;
}
string solution(string a)
{
	string max = "";
	for(int i = 0; i < a.length(); i++)
	{
		string tmp = "";
		while(a[i]>='0'&&a[i]<='9')
		{
			tmp = tmp + a[i];
			i++;
		}
		if(sosanh(max, tmp)==1) max = tmp;
	}
	return max;
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

