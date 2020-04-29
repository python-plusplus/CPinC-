//New Inspiration
//https://dmoj.ca/problem/ccc20s3/editorial

#include <bits/stdc++.h>

using namespace std;

void solve(){
	string  n; string h; 
	cin >> n;
	cin >> h;
	int haylen = h.length();
	int count = 0;
	for(int i = 0; i < haylen; i++){
		string tempstr = h.substr(i, n.length());
		if (find(begin(strlist), end(strlist), tempstr) != end(strlist)){
			continue;
		}
		if (tempmap == nmap) {
			strlist.push_back(tempstr);
			count += 1;	
		}	
	}
	cout << count;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}

