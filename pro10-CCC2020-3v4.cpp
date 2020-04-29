//https://brilliant.org/wiki/rabin-karp-algorithm/
//http://cse.unl.edu/~choueiry/S06-235/files/NumberTheoryApplications-HandoutNoNotes.pdf
//
#include <bits/stdc++.h>

using namespace std;

int getHash(string a){
	int ganghash = 1;
	for(char c : a){
		ganghash *= int(c);	
	}
	return ganghash;
}

void solve(){
	string  n; string h; 
	cin >> n;
	cin >> h;
	long needlehash = getHash(n);	
	long hash = 1; 
	int nedlen = n.length();
	int count = 0;
	vector<int> hashlist;
	for(int i = 0; i < h.length(); i++){
		int hashc = int(h.at(i));
		if(i >= nedlen){
			hash/=int(h.at(i - nedlen)) * pow(2, nedlen-1);
			hash*= hashc * pow(2, nedlen - 1);
		}	
		else{
			cout << hashc << " " << pow(2,i) << " "<< hash << "\n";
			hash *= hashc * pow(2, i);
		}
		cout << hash << "\n" << needlehash << "\n";
		bool notin = find(begin(hashlist), end(hashlist), hash) == end(hashlist) ? true : false; 
		if(hash % needlehash ==0 && notin == true){
			count += 1;
			hashlist.push_back(hash);
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

