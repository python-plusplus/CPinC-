#include <bits/stdc++.h>

using namespace std;

void rsolve(){
	int j; int k;
	cin << j << k;
	x = abs(j); y = abs(k);
	int maxI = 0;
	if (x == 1 && y == 1)
	bool impos = false;
	for(int i = 0; i < n; i++){
		maxN += i;
		if (maxN >= n){
			maxI = i;		
			break;
		}
	}
	if (n % 2 == 0){
		;	
		
	 
}
void solve(){
	int t;
	cin >> t;
	for(int testcase = 1; testcase <= t; testcase++){
		cout << "Case #" << testcase << ": ";
		rsolve();
		cout << "\n";
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}

