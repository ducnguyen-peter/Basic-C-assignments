#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
int a[100][100];
void solution(int n, int m)
{
	vector<pair<int, int> > pos;
	for(int x = 0; x < n; x++)
	{
		for(int y = 0; y < m; y++)
		{
			if(a[x][y]) pos.push_back(make_pair(x,y));
		}
	}
	for(int i = 0; i < pos.size(); i++)
	{
		int x = pos[i].first;
		int y = pos[i].second;
		for(int j = 0; j < m; j++) a[x][j] = 1; 
		for(int j = 0; j < n; j++) a[j][y] = 1;
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n, m; cin>>n>>m;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++){
				cin>>a[i][j];
			}
		}
		solution(n, m);
		cout<<endl;
	}
	return 0;
}

