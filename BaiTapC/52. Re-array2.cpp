#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, n, x;
	cin >> t;
	while(t--){
		cin >> n;
		long long a[n];
		int dem = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] != 0){
				dem ++;
				cout << a[i] << " ";
			}
		}
		for(int i = 1; i <= (n-dem); i++){
			cout << 0 << " ";
		}
		cout << endl;
	}	
}


