#include<bits/stdc++.h>
using namespace std;
string solution(string a)
{
	int n = a.length(), index = -1;
	for(int i = n - 2; i >= 0; i--)
		if(a[i]>a[i+1])
		{
			index = i;
			break;
		}
	int smaller = -1;
	for(int i = n-1; i >= index; i--)
	{
		if(a[i]<a[index]) 
		{
			if(smaller==-1) smaller = i;
			else if(a[i]>=a[smaller]) smaller = i;
		}
	}
	if(index==-1) return "-1";
	if(smaller!=-1)
	{
		swap(a[index], a[smaller]);
		return a;
	}
	return "-1";
}
int main()
{
	int t; cin>>t;
	while(t--){
		string a; cin>>a;
		cout<<solution(a)<<endl;
	}
	return 0;
}

