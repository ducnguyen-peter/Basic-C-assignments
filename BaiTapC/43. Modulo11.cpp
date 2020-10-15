#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

main(){
	ll t, a, b, c;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		a = a % c;
		b = b % c;
		cout << (a*b) % c << endl;
	}
}



