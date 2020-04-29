#include <bits/stdc++.h>

using namespace std;

void rsolve(){
	string N; cin >> N;
	string A;
	string B;
	for(char c: N){
		if(c == '4'){
			A += "2";
			B += "2";
		}
		else{
			if(!A.empty()){
			   A += "0";
			}
			B += c;
		}
	}
	cout << A << " " << B << "\n";
}

void solve(){
	int t;
	cin >> t;
	for(int testcase = 1; testcase <= t; testcase++){
		cout << "Case #" << testcase << ": ";
		rsolve();
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
	
}
