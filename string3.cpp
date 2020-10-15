#include<bits/stdc++.h>
using namespace std;
int base4(string a)
{
	if(a.compare("00")==0) return 0;
	if(a.compare("01")==0) return 1;
	if(a.compare("10")==0) return 2;
	return 3;
}
string solution(string a)
{
	int n = a.size();
	if(n%2==1) a = '0' + a;
	int odd, even = 0;
	int isodd = 1;
	for(int i = 0; i < a.size(); i+=2)
	{
		if(isodd) odd+=base4(a.substr(i,2));
		else even+=base4(a.substr(i,2));
		isodd^1;
	}
	if(abs(odd-even)%5==0) return "Yes";
	return "No";
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

