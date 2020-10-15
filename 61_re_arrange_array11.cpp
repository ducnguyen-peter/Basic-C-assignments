#include<bits/stdc++.h>
using namespace std;
int solution(int a[], int n)
{
	int *f1 = new int[n];
	for (int i = 0; i < n; i++) 
    	f1[i] = 1;
	for(int i = 1; i < n; i++)
		for(int j = 0; j < i; j++)
			if(a[i]>a[j] && f1[i]<f1[j]+1)
				f1[i] = f1[j] + 1;


	int *f2 = new int[n];
	for (int i = 0; i < n; i++) 
    	f2[i] = 1;
	for(int i = n-2; i >= 0; i--)
		for(int j = n-1; j > i; j--)
			if(a[i]>a[j] && f2[i]<f2[j]+1)
				f2[i] = f2[j]+1;
	int max = f1[0]+f2[0]-1;
	for(int i = 1; i < n; i++)
		if(f1[i]+f2[i]-1>max)
			max = f1[i] + f2[i] - 1;
	return max;
}
int main()
{
	int t; cin>>t;
	while(t--){
		//khoi tao
		int n; cin>>n;
		int a[n];
		for(int i = 0; i<n; i++)
			cin>>a[i];
		cout<<solution(a, n)<<endl;
	}
	return 0;
}
