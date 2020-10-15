#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n+1];
		int sum1 = 0, sum2 = 0;
		for(int i = 1; i < n; i++) 
		{
			cin>>a[i];
			sum1+=a[i];
			sum2+=i;
		}
		sum2+=n;
		cout<<sum2-sum1<<endl;
	}
	return 0;
}

