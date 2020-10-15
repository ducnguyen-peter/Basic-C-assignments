#include<bits/stdc++.h>
#include<vector>
using namespace std;
int a[100][100];
vector<int> newmat;
void solution(int n, int m, int k)
{
	int top = 0, bottom = n-1, left = 0, right = m-1;
	int dir = 0;
	while(top<=bottom && left<=right)
	{
		if(dir==0)
		{
			for(int i = left; i <= right; i++)
			{
				newmat.push_back(a[top][i]);
			}
			top++;
		}
		else if(dir==1)
		{
			for(int i = top; i <= bottom; i++)
			{
				newmat.push_back(a[i][right]);
			}
			right--;
		}
		else if(dir==2)
		{
			for(int i = right; i >= left; i--)
			{
				newmat.push_back(a[bottom][i]);
			}
			bottom--;
		}
		else if(dir==3)
		{
			for(int i = bottom; i>=top; i--)
			{
				newmat.push_back(a[i][left]);
			}
			left++;
		}
		dir = (dir+1)%4;
	}
	int res = 0;
	for(int i = 0; i < k; i++)
	{
		res+=newmat[i];
	}
	cout<<res<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n, m, k; cin>>n>>m>>k;
		for(int i = 0; i < n; i++) 
		for(int j = 0; j < m; j++) cin>>a[i][j];
		solution(n, m, k);
		newmat.clear();
	}
	return 0;
}

