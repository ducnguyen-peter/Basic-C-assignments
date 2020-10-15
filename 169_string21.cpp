#include <bits/stdc++.h> 
using namespace std; 
void solution(string a)
{
	sort(a.begin(), a.end());
	int sumDigits = 0;
	for(int i = 0; i < a.length(); i++) 
	{
		if(a[i]>='A'&&a[i]<='Z') cout<<a[i];
		else if(a[i]>='0'&&a[i]<='9')
		{
			sumDigits = sumDigits + int(a[i]-'0');
		}
	}
	cout<<sumDigits<<endl;
}
int main()
{ 
	int t; cin>>t;
	while(t--)
	{
		string s; cin >> s;
		solution(s);
	}
	return 0; 
}//alo
