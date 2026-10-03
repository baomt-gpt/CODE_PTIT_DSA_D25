#include <bits/stdc++.h>
using namespace std;

void InsertionSortReverse(vector<int>& a, int n){
	vector<vector<int>> v;
	v.push_back(vector<int>(a.begin(), a.begin() + 1));
	for(int i = 1; i < n; i++){
		int key = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > key){
			a[j + 1] = a[j];
			j -= 1;
		}
		a[j + 1] = key;
		v.push_back(vector<int>(a.begin(), a.begin() + i + 1));
	}
	for(int i = v.size() - 1; i >= 0; i--){
		cout << "Buoc " << i << ": ";
		for(int x : v[i]){
			cout << x << " ";
		}
		cout << "\n";
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	InsertionSortReverse(a, n);
	
	return 0;
}
