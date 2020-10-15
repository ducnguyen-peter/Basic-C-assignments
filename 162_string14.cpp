#include<bits/stdc++.h>
#include<string>
using namespace std;
int solution(string a)
{
	if(a.empty()) return 0;
	int dem = 1;
	for(int i = 0; i < a.length(); i++)
	{
		if(a[i]=='\t'||a[i]==' ') dem++;
	}
	return dem;
}
int main()
{
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		cout<<solution(s)<<endl;
	}
	return 0;
}

