#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<vector<int>>& a,
 	vector<bool>& used,
	vector<vector<int>>& result,
	vector<int>& current,
	int row, int sum, int n, int k){
	if(row == n){
		if(sum == k){
			result.push_back(current);
		}
		return;
	}
	for(int j = 0; j < n; j++){
		if(used[j] == false){
			used[j] = true;
			current.push_back(j + 1);
			backtrack(a, used, result, current, row + 1, sum + a[row][j], n, k);
			current.pop_back();
			used[j] = false;
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n, k; cin >> n >> k;
	vector<vector<int>> a(n, vector<int>(n));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	vector<bool> used(n, false);
	vector<vector<int>> result;
	vector<int> current;
	backtrack(a, used, result, current, 0, 0, n, k);
	cout << result.size() << "\n";
    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[i].size(); j++){
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
	
	return 0;
}
