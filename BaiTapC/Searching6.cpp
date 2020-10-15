#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool compare(ll x, ll y){
	return abs(x) < abs(y);
}
void xuli(ll n, ll a[]){
	sort(a,a+n,compare);
	int min = INT_MAX,x,y;
	for(int i = 1; i < n; i++){
		if(abs(a[i-1] + a[i]) <= min){
			min = abs(a[i-1] + a[i]);
			x = i - 1;
			y = i;
		}
	}
	cout << a[x] + a[y] << endl;
}
main(){
	ll t, n;
	cin >> t;
	while(t--){
		cin >> n;
		ll *a = new ll[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		xuli(n,a);
    }
}

