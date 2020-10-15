#include<bits/stdc++.h>
#include<stack>
#include<vector>
using namespace std;
int main()
{
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		vector<string> sentence;
		int n = s.length();
		for(int i = 0; i < n; i++)
		{
			string word = "";
			while(i<n && s[i]!=' ' && s[i]!='\n' && s[i]!='\t')
			{
				word = word + s[i];
				i++;
			}
			sentence.push_back(word);
		}
		for(int i = sentence.size()-1; i >= 0; i--)
			cout<<sentence[i]<<' ';
		cout<<endl;
	}
	return 0;
}

