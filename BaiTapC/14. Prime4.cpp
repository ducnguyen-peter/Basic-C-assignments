#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main(){
	ll t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n], i;
		for(i = 1; i <= n; i++){
			a[i] = 1;
		}
		for(i = 2; i <= n; i++){
			if(a[i] == 1){
				a[i] = i;
				for(int j = i*i; j <= n; j = j + i){
					if(a[j] == 1) a[j] = i;
				}
			}
		}
		for(i = 1; i <= n; i++){
			if(a[i] == 1){
				a[i] = i;
			}
			cout << a[i] << " ";
		}
		cout << endl;
	}
}


