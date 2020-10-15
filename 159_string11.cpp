#include<bits/stdc++.h>
using namespace std;
string solution(string s,string t){
	int sdem[1111]={0},tdem[1111]={0};
	for(int i=0;i<t.length();i++) tdem[t[i]]++;
	int danhdau=-1;
	int dem=0;
	for(int i=0;i<s.length();i++){
		sdem[s[i]]++;
		if(tdem[s[i]]&&sdem[s[i]]<=tdem[s[i]]) dem=dem+1;
		if(dem==t.length()){
			danhdau=i;
			break;
		}
	}
	if(danhdau==-1) return "-1";
	int j=danhdau+1,i=0;
	int minlen=danhdau+1;
	int start=0;
	while(j<=s.length()){
		if(tdem[s[i]]<sdem[s[i]]){
			sdem[s[i]]--;
			i++;
			if(j-i<minlen){
				minlen=j-i;
				start=i;
			}
		}
		else{
			sdem[s[j]]++;
			j++;
		}
	}
	return s.substr(start,minlen);
}
int main(){
	int t; cin>>t;
	while(t--){
		string a, b; cin>>a>>b;
		cout<<solution(a, b)<<endl;
	}
	return 0;
}
