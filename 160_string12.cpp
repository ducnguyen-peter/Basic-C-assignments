#include<bits/stdc++.h>
using namespace std;
int solution(string a)
{
	int count[256] = {0};
	set<char> d;
	for(int i = 0; i < a.length(); i++){
		if(d.find(a[i])==d.end())
			d.insert(a[i]);
	}
	int danhdau;
	set<char> set;
	for(int i = 0; i < a.length(); i++)
	{
		count[a[i]]++;
		if(set.find(a[i])==set.end())
			set.insert(a[i]);
		if(set.size()==d.size())
		{
			danhdau = i; break;
		}
	}
	int i = 0, j = danhdau+1;
	int ans = danhdau + 1;
	int start = 0;
	while(j<=a.length())
	{
		if(count[a[i]]>1)
		{
			count[a[i]]--;
			i++;
			if(j-i<ans)
			{
				ans = j - i;
				start = i;
			}
		}
		else
		{
			count[a[j]]++;
			j++;
		}
	}
	return ans;
}
int main()
{
	int t; cin>>t;
	while(t--){
		string a; cin>>a;
		cout<<solution(a)<<endl;
	}
	return 0;
}

