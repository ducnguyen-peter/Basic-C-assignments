#include<bits/stdc++.h>
using namespace std;
int solution(int a[], int n)
{
	int dem = 0;
	sort(a, a+n);
	int max = a[n-1], min = a[0];
	int b[max];
	memset(b,0,sizeof(b));
	for(int i = 0; i < n; i++) b[a[i]] = 1;
	for(int i = min; i <= max; i++) if(!b[i]) dem++;
	return dem;
}
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i = 0 ; i < n; i++) cin>>a[i];
		cout<<solution(a, n)<<endl;
	}
	return 0;
}

