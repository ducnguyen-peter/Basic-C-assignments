#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n+5];
		for(int i = 2; i <= n; i++){
			a[i] = true;
		}
		for(int i = 2; i <= n; i++){
			if(a[i] == true){
				for(int j = i*2; j <= n; j = j+i){
					a[j] = false;
				}
			}
		}
		for(int i = 2; i <= n; i++){
			if(a[i] == 1 && a[n-i] == 1){
				cout << i <<" "<< n-i;
				break;
			}
		}
		cout << endl;
	}
}

