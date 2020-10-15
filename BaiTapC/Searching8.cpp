#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int binarysearch(ll n, ll a[], ll x){
//	ll D = 0, C = n-1, G = (D+C)/2;
//	while(D <= C){
//		if(x > a[G]) D = G + 1;
//		else if(x < a[G]) C = G - 1;
//		else return G;
//		G = (D+C)/2;
//	}
//}

main(){
	ll t, n, x, a[1001], i, dem[1001];
	cin >> t;
	while(t--){
		cin >> n >> x;
		ll check = 0;
		for(int i = 0; i < n; i++){
			dem[i] = 0;
		}
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(x == a[i]){
				dem[a[i]]++;
				check++;
			} 
		}
		if(check == 0) cout << -1 << endl;
		for(int i = 0; i < n; i++){
			if(dem[i] > 0){
				cout << dem[i] << endl;
			} 
		}
	}
}

