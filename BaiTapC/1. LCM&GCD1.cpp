#include<bits/stdc++.h>
using namespace std;
int ucln(int a, int b){
	while(b != 0){
		long long t = a % b;
		a = b;
		b = t;
	}
	return a;
}
main(){
	long long t, a, b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		cout << (long long) (a*b) / ucln(a,b) << " " << ucln(a,b) << endl;
	}
}

