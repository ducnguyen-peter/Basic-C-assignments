#include<bits/stdc++.h>
using namespace std;
int a[100][100];
void solution(int n)
{
	for(int i = 0; i < n; i++) cout<<a[0][i]<<" ";
	cout<<endl;
	for(int i = 1; i < n-1; i++)
	{
		cout<<a[i][0];
		int j = 0;
		while(j<=n)
		{
			cout<<" "; j++;
		}
		cout<<a[i][n-1]<<endl;
	}
	for(int i = 0; i < n; i++) cout<<a[n-1][i]<<" ";
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++){
				cin>>a[i][j];
			}
		}
		solution(n);
		cout<<endl;
	}
	return 0;
}

