#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> a, int x){
	int left = 0;
	int right = a.size() - 1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(a[mid] == x) return 1;
		else if(a[mid] < x){
			left = mid + 1;
		} 
		else right = mid - 1;
	}
	return -1;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int q; cin >> q;
	while(q--){
		int n, x; cin >> n >> x;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		cout << BinarySearch(a, x) << "\n";
	}
	
	return 0;
}
