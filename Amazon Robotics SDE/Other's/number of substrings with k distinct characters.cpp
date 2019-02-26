// #include<bits/stdc++.h> 
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

string countkDist(string str, int k) {
	int n = str.length();
	int res = 0;
	int cnt[26];
	string ans = "";
	for(int i=0;i<n;i++){
		int dist_cnt = 0;
		int dup_cnt = 0;

		memset(cnt, 0, sizeof(cnt));
		string temp = "";

		for(int j=i;j<n;j++){
			if(cnt[str[j]-'a']==0) dist_cnt++;
			if(cnt[str[j]-'a']==1) dup_cnt++;
			cnt[str[j]-'a']++;
			temp.push_back(str[j]);
			if(dist_cnt == k-1 && dup_cnt ==1) {res++;ans = temp; }
			if(dist_cnt>k-1) break;
		}
	}
	// return res;
	return ans;
}

int main(){
	string str = "awaglk"; 
    int k = 4; 
    cout << "Total substrings with exactly "
         << k <<" distinct characters :"
         << countkDist(str, k) << endl; 
    return 0; 
}

