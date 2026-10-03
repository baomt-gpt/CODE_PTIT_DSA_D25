#include <bits/stdc++.h>
using namespace std;

void BubbleSortReverse(vector<int>& a, int n){
	vector<vector<int>> v;
	for(int i = 0; i < n; i++){
		bool check = false;
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1]){
				check = true;
				swap(a[j], a[j + 1]);
			}
		}
		if(check) v.push_back(a);
		else break;
	}
	for(int i = v.size() - 1; i >= 0; i--){
		cout << "Buoc " << i + 1 << ": ";
		for(int x : v[i]){
			cout << x << " ";
		}
		cout << "\n";
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int q; cin >> q;
	while(q--){
		int n; cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		BubbleSortReverse(a, n);
	}
	
	return 0;
}
