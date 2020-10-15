#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, n, a[10001];
	cin >> t; 
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int check = 0, max = 0;
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(a[j] > a[i]){
					check = 1;
					int m = a[j] - a[i];
					if(m > max) max = m;
				}
			}
		}
		if(check == 0) cout << -1 << endl;
		else cout << max << endl;
	}
}

