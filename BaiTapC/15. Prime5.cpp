#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, m, n;
	cin >> t;
	while(t--){
		cin >> m >> n;
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
		for(int i = m; i <= n; i++){
			if(i != 1){
				if(a[i] == true){
				    cout << i << " ";
			    }
			}
			
		}
		cout << endl;
	}
}

