#include<bits/stdc++.h>
using namespace std;
string s;
int solution(string s)
{
	vector<pair<char,int> > a; 
    a.push_back({'@', -1}); 
    int maxlen = 0; 
    for (int i = 0; i < s.length(); ++i) 
    { 
        a.push_back({s[i], i}); 
        while (a.size()>=3 && a[a.size()-3].first=='1' && a[a.size()-2].first=='0' && a[a.size()-1].first=='0') 
        { 
            a.pop_back(); 
            a.pop_back(); 
            a.pop_back(); 
        } 
        int tmp = a.back().second; 
        maxlen = max(maxlen, i - tmp); 
    } 
    return s.length()-maxlen; 
}
int solution1(){
//	int n = s.size();
	while(1){
		size_t t = -1;
		t = s.find("100"); 
		if(t>=0 && t<s.size()) s.erase(s.begin()+t, s.begin()+t+3);
		else return s.size();
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
//		string a; cin>>a;
		cin>>s;
		cout<<solution1()<<endl;
	}
	return 0;
}
/*	2
	010010
	1011110000*/
