#include<bits/stdc++.h>
#include<vector>
using namespace std;
//vector<vector<int> > a;
int a[1000][1000];
void solution(int n, int m)
{
	int 	 top = 0,
	left = 0,         right = m,
			bottom = n;
	int pre, cur;
	while(top<bottom && left<right)
	{
		if(top+1==bottom || left+1==right) break;
		pre = a[top+1][left];
		for(int i = left; i < right; i++)
		{
			cur = a[top][i];
			a[top][i] = pre;
			pre = cur;
		}
		top++;
		for(int i = top; i < bottom; i++)
		{
			cur = a[i][right-1];
			a[i][right-1] = pre;
			pre = cur;
		}
		right--;
		if(top<bottom)
		{
			for(int i = right - 1; i>=left; i--)
			{
				cur = a[bottom-1][i];
				a[bottom-1][i] = pre;
				pre = cur;
			}
		}
		bottom--;
		if(left<right)
		{
			for(int i = bottom - 1; i>=top; i--)
			{
				cur = a[i][left];
				a[i][left] = pre;
				pre = cur;
			}
		}
		left++;
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++) 
		{
			cout<<a[i][j]<<" ";
		}
		
	}
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n, m; cin>>n>>m;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++){
				cin>>a[i][j];
			}
		}
		solution(n,m);
	}
	return 0;
}

