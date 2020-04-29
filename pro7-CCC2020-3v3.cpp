//New Inspiration
//https://dmoj.ca/problem/ccc20s3/editorial
#include <bits/stdc++.h>

using namespace std;


unordered_map<char, int> getLetterCount(string a){
	unordered_map<char,int> umap;
	for(char c: a){
		if (umap.find(c) == umap.end()){
			umap[c] = 1;
		}	
		else{
			umap[c] += 1;
		}
	}
	return umap;
}

void solve(){
	string  n; string h; 
	cin >> n;
	cin >> h;
	int haylen = h.length();
	const unordered_map<char, int> nmap = getLetterCount(n);
	vector<unordered_map<char, int>> maplist;
	vector<string> strlist;
	int count = 0;
	for(int i = 0; i < haylen; i++){
		string tempstr = h.substr(i, n.length());
		unordered_map<char, int> tempmap = getLetterCount(tempstr);
		if (find(begin(strlist), end(strlist), tempstr) != end(strlist)){
			continue;
		}
		if (tempmap == nmap) {
			maplist.push_back(tempmap);
			strlist.push_back(tempstr);
			count += 1;	
		}	
	
	cout << count;

}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}

