#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll GCD(ll a, ll b){
	if(b==0)	return a;
	else{
		return GCD(b,a%b);
	}
}

ll sol(ll x, ll y, ll z, int n){
		ll l = 1, r = 9;
		for(ll i = 0; i < n-1; i++){ 
			 l *= 10;
			 r = r * 10 + 9;
		}
		
		x = x * y / GCD(x, y);   
		y = x * z / GCD(x, z);
		if(l % y == 0) return l;
		else{
			ll m = 1 + (l / y);
			if(m * y > r)  return -1;
			else return (m * y); 
		}
		
}

int main(){
	int t; cin>>t;
	while(t--){
		ll x, y, z;
		int n;
		cin>>x>>y>>z>>n;
		cout<<sol(x,y,z,n)<<endl;
	}
	return 0;
}
