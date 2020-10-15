#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solution(ll a[], ll n, ll k)
{
	if(k>n) 
	{
		return -1;
	}
	ll csum[n];//tong cac phan tu tu 1 den i
	csum[0] = a[0];
	for(ll i = 1; i < n; i++)
	{
		csum[i] = csum[i-1] + a[i];
	}
	ll max_sum = csum[k-1]//tong cua day con dau tien
	, max_end = k-1;//vi tri phan tu cuoi day dau tien
	for (ll i=k; i<n; i++) 
    { 
        ll curr_sum = csum[i] - csum[i-k]; //tong day con hien tai
        if (max_sum<curr_sum) //neu day con hien tai lon hon tong day truoc
        { 
            max_sum = curr_sum; //cap nhat max
            max_end = i; //cap nhat vi tri ket thuc
        } 
    } 
    return max_end - k + 1;//tra ve vi tri bat dau cua day con can tim
}
int main()
{
	int t; cin>>t;
	while(t--){
		ll n, k; cin>>n>>k;
		ll a[n+1];
		for(int i = 0; i < n; i++) cin>>a[i];
		ll m = solution(a,n,k);
		for(ll i = m; i < m + k; i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

