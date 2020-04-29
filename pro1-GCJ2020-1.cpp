#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

void rsolve(){
	int n;
	cin >> n;
	int repeatx = 0;
	int repeaty = 0;
	int trace = 0;
	int sums[105][105];

	for(int i = 0; i < n; i++){
		bool repeat = false;
		int guccisum[105];
		fill(begin(guccisum), end(guccisum), 0);
		for(int j = 0; j < n; j++){
			cin >> sums[i][j];
			int q = sums[i][j];
			int *result = find(begin(guccisum), end(guccisum), q);
			if(result != end(guccisum)){
				repeat = true;	
			}
			guccisum[j] = sums[i][j];
			sums[i][j] = q;
			if(i == j){
				trace += q;
			}
		}
		if(repeat == true){
			repeatx += 1;
		}
	}
	for(int g = 0; g < n; g++){
		bool repeat = false;
	   	int gangsum[105];	
		fill(begin(gangsum),end(gangsum),0);
		for(int k = 0; k < n; k++){
			int l;
			l = sums[k][g];
			int *result = find(begin(gangsum), end(gangsum), l);	
			if(result != end(gangsum)){
				repeat = true;
			}
			gangsum[k] = sums[k][g];

		}
	
		if(repeat == true){
			repeaty += 1;
		}	
	}	
	cout << trace << " " << repeatx << " " << repeaty << "\n";
}
void solve(){
	int t;
	cin >> t;
	for(int casenum = 1;casenum <= t ; casenum++){
		cout << "Case #" << casenum << ": ";
		rsolve();
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	solve();
	return 0;
}

