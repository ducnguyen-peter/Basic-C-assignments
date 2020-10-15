#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll reduce(int a, char s[]){ // chuyen doi so lon b
	ll mod = 0;
	for(int i = 0; i < strlen(s); i++){
		mod = (mod*10 + s[i]-'0') % a;
	}
	return mod;
}
ll ucln(ll a, ll b){
	while(b != 0){
		ll t = a % b;
		a = b;
		b = t;
	}
	return a;
}
ll GCDofLager(ll a, char s[]){
	ll b = reduce(a,s);
	return ucln(a,b);
}
main(){
	ll t, a;
	char s[251];
	cin >> t;
	while(t--){
		cin >> a >> s;
		cout << GCDofLager(a,s) << endl;
	}
}

