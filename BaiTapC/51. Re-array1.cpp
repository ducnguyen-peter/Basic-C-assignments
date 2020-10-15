#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1000];
main(){
	ll t, n, i, x;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			a[i] = false;
		}
		for(int i = 0; i < n; i++){
			cin >> x;
			if(x >= 0 && x <= 1000000) a[x] = true;
		}
		for(int i = 0; i < n; i++){
			if(a[i]) cout << i << " ";
			else cout << -1 << " ";
		}
		cout << endl;
	}
}

