#include <bits/stdc++.h>

using namespace std;

bool works(string d, string g, int u){
	for(int j = 0; j < u; j++){
		if(d[j] != g[j]){
			return false;
		}
	}
	return true;	
}
void rsolve(){
	int n; cin >> n;
	string first = "";
	string last = "";
	for(int i = 0; i < n;i++){
		string q; cin >> q;
		string f = ""; string l = "";
		bool askSeen = false;
		for(char c: q){
			if(c == '*'){
				askSeen = true;
			}
			else{
				if(askSeen == true){
					l  += c;
				}	
				else{
					f += c;
				}
			}
		}
		reverse(l.begin(), l.end());
		if (i == 0){
			first = f;
			last = l;
			}
		int u;int fu;string bigf;string bigl; 	
		if(first.length() > f.length()){
			fu = f.length();	
			bigf = first;
		}
		else{
			fu = first.length();
			bigf = f; 
		}
		if(last.length() > l.length()){
			u = l.length();	
			bigl = last;
		}
		else{
			u = last.length();
			bigl = l; 
		}
	//	if(f != ""){
			if(works(first, f, fu)){
				first = bigf;	
			}
			else{
				cout << "*";
				goto flag;
			}
	//	}
	//	if(l != ""){
			if(works(last, l, u)){
				last = bigl;	
			}
			else{
				cout << "*";
				goto flag;
			}
	//	}
	}
	if(first == last){
		cout << first << "DAB"<< last;
	}
	else{
	reverse(last.begin(), last.end());
	cout << first << last;
	flag:;
	}
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
