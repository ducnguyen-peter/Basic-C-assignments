#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long base = 1e9+7;
ll a[10000];
void fibo(ll n){
	a[0] = 0;
	a[1] = a[2] = 1;
	for(int i = 3; i <= n; i++){
		a[i] = a[i-1] + a[i-2];
		a[i] = a[i] % base ;
	}
}
main(){
	ll t, n;
	cin >> t;
	while(t--){
		cin >> n;
		fibo(n);
		cout << a[n] << endl;
	}
}

