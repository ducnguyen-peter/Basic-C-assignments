#include<bits/stdc++.h>
using namespace std;
void solution(int n)
{
	int m = 4*n*2*n;
	int a1[m], a2[m];
	a1[0] = 4*n*2*n + 2*n;
	int cur = a1[0];
	int forward = 1, step = 2;
	int index = 1;
	while(index<m)
	{
		for(int i = 0; i < step; i++)
		{
			a1[index] = cur-4*n*forward;
			cur = a1[index];
			index++;
			if(index>=m) break;
		}
		if(index>=m) break;
		for(int i = 0; i < step; i++)
		{
			a1[index] = cur + forward;
			cur = a1[index];
			index++;
			if(index>=m) break;
		}
		forward *=(-1);
		step+=2;
	}
	for(int i = 0; i < m; i++) a2[i] = 16*n*n-a1[i]+1;
	for(int i = 0; i < m; i++) cout<<a1[i]<<" ";
	cout<<endl;
	for(int i = 0; i < m; i++) cout<<a2[i]<<" ";
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		solution(n);
	}
	return 0;
}

