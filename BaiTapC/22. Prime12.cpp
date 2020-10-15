#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//Prime 12

main(){
	ll t, n, k;
	cin >> t;
	vector<int>a;
	while(t--){
		cin >> n >> k;
		vector<int>a;
		for(int i = 2; i <= sqrt(n); i++){
			while(n % i == 0){
				a.push_back(i);
				n = n / i;
			}
		}
		if(n > 1) a.push_back(n);
		if(k > a.size()) cout << "-1\n";
		else cout << a[k-1] << endl;
	}
}

