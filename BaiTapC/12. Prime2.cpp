#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
void SangNgTo(ll n){
	bool a[10007]; // khoi tao mang[2,3,...,n] la snt
	for(int i = 2; i <= n; i++){
		a[i] = true;
	}
	for(int i = 2; i <= n; i++){
		if(a[i] == true){
			for(int j = 2 * i; j <= n; j = j + i){
				a[j] = false;
			}
		}
	}
	for(int i = 2; i <= n; i++){
		if(a[i] == true){
			cout << i << " ";
		}
	}
}
main(){
	ll t,n;
	cin >> t;
	while(t--){
		cin >> n;
		SangNgTo(n);
		cout << endl;
	}
}

