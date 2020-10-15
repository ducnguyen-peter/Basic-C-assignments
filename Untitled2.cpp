#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int solution(int n, int m)
{
	int aux[n+1][m+1];
	for(int i = 0; i < m; i++)
	{
		aux[0][i] = a[0][i];
		for(int j = 1; j < n; j++)
			if(a[j][i]==0) aux[j][i] = 0;
			else aux[j][i] = aux[j-1][i] + 1;
	}
	for(int i = 0; i < n; i++)
	{
		int count[n+1] = {0};
		for(int j = 0; j < m; j++)
			count[aux[i][j]]++;
		int colnumb = 0;
		for(int j = n; j >= 0; j--)
		{
			if (count[j] > 0)
			{
				for(int k = 0; k < count[j]; k++)
				{
					aux[i][colnumb] = j;
					colnumb++;
				}
			}
		}
	}
	int cur, max = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cur = (j+1)*aux[i][j];
			if (cur>max) max = cur;
		}
	}
	return max;
} 
int main()
{
	int t; cin>>t;
	while(t--){
		int n, m; cin>>n>>m;
		for(int i = 0; i < n; i++) 
		for(int j = 0; j < m; j++) cin>>a[i][j];
		cout<<solution(n, m);
		cout<<endl;
	}
	return 0;
}

