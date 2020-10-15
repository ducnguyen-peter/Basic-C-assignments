#include<bits/stdc++.h>
using namespace std;
void solution(int a[], int n)
{
	int chan = n/2, le = n - chan;
	int tmp[n];
	for(int i = 0; i < n; i++) tmp[i] = a[i];
	sort(tmp, tmp + n);
	for(int i = 0, j = 0; i < n, j < le; i+=2, j++)
	{
		a[i]=tmp[j];
	}
	int j = le;
	for(int i = 1; i < n; i+=2)
	{
		a[i]=tmp[j];
		j++;
	}
	for(int i = 0; i < n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i = 0; i < n; i++) cin>>a[i];
		solution(a,n);
	}
	return 0;
}

