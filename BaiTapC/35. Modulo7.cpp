#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int ucln(ll a, ll b){
	while(b != 0){
		ll t = a % b;
		a = b;
		b = t;
	}
	return a;
}
main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		int a[100001];
		cin >> n;
		ll min;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(i == 0)  min = a[0];
			if(a[i] < min) min = a[i];
		}
		ll gcd = 0;
		for(int i = 0; i < n; i++){
			a[i] = a[i] - min;
			gcd = ucln(gcd, a[i]);
		}
		int dem = 0;
		for(int i = 1; i*i <= gcd; i++){
			if(gcd % i == 0){
				if(i < gcd/i) dem = dem + 2;
				else dem = dem + 1;
			}
		}
		cout << dem << endl;
	}
}

