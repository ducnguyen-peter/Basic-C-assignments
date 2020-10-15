#include<bits/stdc++.h>
using namespace std;
int dem_so(int a){
	if(a==0) return 1;
	int dem=0;
	while(a){
		dem++;
		a/=10;
	}
	return dem;
}
bool cmp(int a, int b){
	long long x=a*pow(10,dem_so(b))+b;
	long long y=b*pow(10,dem_so(a))+a;
	return x>y;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++) cout<<a[i];
		cout<<endl;
	}
	return 0;
}

