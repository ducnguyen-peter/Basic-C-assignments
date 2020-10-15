#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, n;
	cin >> t;
	while(t--){
		cin >> n;
		ll a[100000], dem = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n-1; i++){
				if(a[i] != 0 && a[i] == a[i+1]){
					a[i] = a[i] * 2;
					a[i+1] = 0;
				}
			}
		for(int i = 0; i < n; i++){
			if(a[i] != 0){
				cout << a[i] << " ";
				dem++;
			}
		}	
		for(int i = 0; i < n-dem; i++){
			cout << 0 << " ";
		}
		cout << endl;
	}
}

