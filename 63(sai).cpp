#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n, m; cin>>n>>m;
		vector<int> a1(n), a2(m);
		for(int i = 0; i < n; i++) cin>>a1[i];
		for(int i = 0; i < m; i++) cin>>a2[i];
		for(int j = 0; j < a2.size(); j++)
		{
			int i = 0;
			while(i<a1.size())
			{
				if(a1[i]==a2[j])
				{
					cout<<a1[i]<<" ";
					a1.erase(a1.begin()+i);
				}
				else i++;
			}
		}
		sort(a1.begin(), a1.end());
		for(int i = 0; i < a1.size(); i++) cout<<a1[i]<<" ";
		cout<<endl;
	}
	return 0;
}

