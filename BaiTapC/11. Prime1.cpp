#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;
void xuli(ll n){
	if (n <= 1) cout << n;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			cout << i << " ";
			n = n / i;
		}
	}
	if(n > 1) cout << n;
}
main(){
	ll t, n;
	cin >> t;
	while(t--){
		cin >> n;
		xuli(n);
		cout << endl;
	}
}
