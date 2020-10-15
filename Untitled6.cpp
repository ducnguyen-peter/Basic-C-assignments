#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		string s;; cin>>s;
		int dem = 0;
		for(int i = 0; i < s.length(); i++)
		{
			while(s[i]>='1' && s[i]<='9')
			{
				i++;
			}
			dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}

