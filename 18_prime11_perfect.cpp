#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool checkNT(ll n)
{
	if(n<2) return false;
	if(n==2) return true;
	for(ll i=2; i<=sqrt(n); i++)
		if(n%i==0) return false;
	return true;
}
// Ncl so perfect c� dang (2^(p-1))*(2^p-1) trong d� (2^p-1) l� so nguy�n to
int main()
{
	int t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		if(n%2!=0 ) cout << 0 << endl;
		else
		{
			long long p=1;
			while(p<sqrt(n)) p*=2;//Khoi tao gi� tri 2^p tuong ung voi n
			if( (p*(p-1))/2==n && checkNT(p-1)) cout<<1<< endl;//Ktra xem c� bang n kh�ng v� (2^p-1) c� phai so nguy�n to ko
			else cout<<0<<endl;
		}
	}	
	return 0;
}
