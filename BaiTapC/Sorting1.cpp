#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int compare(ll a, ll b){
	return a > b;
}
main(){
	ll t, n, a[1001], b[1001];
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a,a+n, compare);
		ll d = 0, c = n-1, j = 0;
		while(d <= c){
			b[j] = a[d];
			b[j+1]=a[c];
			d++;
			c--;
			j = j + 2;
		}
		for(int i = 0; i < n; i++){
			cout << b[i] <<" ";
		}
		cout << endl;
	}
}

