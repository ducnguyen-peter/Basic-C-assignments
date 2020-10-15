#include<bits/stdc++.h>
#include<string>
using namespace std;
void solution(string s)
{
	int max = 0, last = 0, j;
	for(int i = 0; i < s.length(); i++)
	{
		int noD = 0;
		switch(s[i])
		{
			case 'I':
				j = i + 1;
				while(s[j]=='D'&&j<s.length())
				{
					noD++; j++;
				}
				if(i==0)
				{
					max = noD + 2;
					cout<<++last<<max;
					last = max;
				}
				else
				{
					max = max + noD + 1;
					last = max;
					cout<<last ;
					for(int k = 0; k < noD; k++)
					{
						cout<<--last;
						i++;
					}
				}
				break;
			case 'D':
				if(i==0)
				{
					j = i + 1;
					while(s[j]=='D'&&j<s.length())
					{
						noD++; j++;
					}
					max = noD + 2;
					cout<<max<<max-1;
					last = max-1;
				}
				else
				{
					cout<<last-1;
					last--;
				}
				break;
		}
	}
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		solution(s);
	}
	return 0;
}

