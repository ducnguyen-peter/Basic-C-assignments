#include<bits/stdc++.h>
using namespace std;
int a[100][100];
void solution(int n, int m)
{
	int top = 0, bottom = n-1, left = 0, right = m-1;
	int dir = 0;
	while(top<=bottom && left<=right)
	{
		if(dir==0)
		{
			for(int i = left; i <= right; i++)
			{
				cout<<a[top][i]<<" ";
			}
			top++;
		}
		else if(dir==1)
		{
			for(int i = top; i <= bottom; i++)
			{
				cout<<a[i][right]<<" ";
			}
			right--;
		}
		else if(dir==2)
		{
			for(int i = right; i >= left; i--)
			{
				cout<<a[bottom][i]<<" ";
			}
			bottom--;
		}
		else if(dir==3)
		{
			for(int i = bottom; i>=top; i--)
			{
				cout<<a[i][left]<<" ";
			}
			left++;
		}
		dir = (dir+1)%4;
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n, m; cin>>n>>m;
		for(int i = 0; i < n; i++) 
		for(int j = 0; j < m; j++)cin>>a[i][j];
		solution(n, m);
		cout<<endl;
	}
	return 0;
}

