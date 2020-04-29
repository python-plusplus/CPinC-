#include <bits/stdc++.h>

using namespace std;

void rsolve(){

}

void solve(){
	string  n; string h; 
	cin >> n;
	cin >> h;
	int count = 0;
	do{
		if(h.find(n) != string::npos){
			count += 1;
		}
	} while(next_permutation(begin(n), end(n)));	
	cout << count;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
}
