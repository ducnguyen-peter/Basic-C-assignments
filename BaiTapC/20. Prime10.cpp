#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int snt(ll n){
	if(n < 2) return 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 1;
	}
	return 0;
}
int tong(ll n){
	int tg = 0;
	while(n != 0){
		tg = tg + n % 10;
		n = n / 10;
	}
	return tg;
}
int xuli(ll n){
	int tg = 0, x = tong(n);;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			tg = tg + tong(i);
			n = n / i;
		}
	}
	if (n > 1) tg = tg + tong(n);
	return (tg == x);
}
main(){
	ll t, n;
	cin >> t;
	while(t--){
		cin >> n;
		if(snt(n) && xuli(n))  cout << "YES\n";
		else cout << "NO\n";        
	}
}

