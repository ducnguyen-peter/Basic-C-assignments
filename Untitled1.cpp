#include <bits/stdc++.h> 
#define R 3 
#define C 3 
using namespace std; 
int a[1000][1000];
void solution(int n, int m) 
{ 
	int N = n, M = m;
	int row = 0, col = 0; 
	int pre, cur; 
	while (row < n && col < m) 
	{ 

		if (row + 1 == n || col + 1 == m) 
			break; 
		pre = a[row + 1][col]; 
		for (int i = col; i < m; i++) 
		{ 
			cur = a[row][i]; 
			a[row][i] = pre; 
			pre = cur; 
		} 
		row++; 
		for (int i = row; i < n; i++) 
		{ 
			cur = a[i][m-1]; 
			a[i][m-1] = pre; 
			pre = cur; 
		} 
		m--; 
		if (row < n) 
		{ 
			for (int i = m-1; i >= col; i--) 
			{ 
				cur = a[n-1][i]; 
				a[n-1][i] = pre; 
				pre = cur; 
			} 
		} 
		n--; 
		if (col < m) 
		{ 
			for (int i = n-1; i >= row; i--) 
			{ 
				cur = a[i][col]; 
				a[i][col] = pre; 
				pre = cur; 
			} 
		} 
		col++; 
	} 
	for (int i=0; i<N; i++) 
	{ 
		for (int j=0; j<M; j++) 
		cout << a[i][j] << " "; 
		cout << endl; 
	} 
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
