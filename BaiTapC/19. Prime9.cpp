#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main(){
	ll t, n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 2; i <= n; i++){
			if(n % i == 0){
				cout << i <<" ";
				int dem = 0;
				while(n % i == 0){
					dem ++;
					n = n / i;
				}
				cout << dem << " ";
			}
		}
		cout << endl;
	}
}
