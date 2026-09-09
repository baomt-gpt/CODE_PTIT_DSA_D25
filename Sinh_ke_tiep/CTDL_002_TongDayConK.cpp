#include <bits/stdc++.h>
using namespace std;

int n, k, ans = 0;
vector<int> current;

void backtrack(vector<int>& a, int i, int sum){
	if(i == n){
		if(sum == k){
		for(int i = 0; i < current.size(); i++){
			cout << current[i] << " ";
		}
		++ans;
		cout << "\n";
		}
		return;
	}
	
	backtrack(a, i + 1, sum);

	current.push_back(a[i]);
	backtrack(a, i + 1, sum + a[i]);
	current.pop_back();
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	backtrack(a, 0, 0);
	cout << ans;

	return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int cnt = 0;

// void TongDayCon(vector<int>& a, vector<int>& choose, int i, int n, int S){
// 	if(i == n){
// 		int sum = 0;
// 		for(int j = 0; j < n; j++){
// 			if(choose[j] == 1){
//                 sum += a[j];
//             }
// 		}
// 		if(sum == S){
//             for(int j = 0; j < n; j++){
//                 if(choose[j] == 1){
//                     cout << a[j] << " ";
//                 }
//             }
//             cout<< "\n";
// 			cnt++;
//         }
// 		return;
// 	}
// 	choose[i] = 0;
// 	TongDayCon(a, choose, i + 1, n, S);

// 	choose[i] = 1;
// 	TongDayCon(a, choose, i + 1, n, S);
// }

// int main(){
// 	int n, k; cin >> n >> k;
// 	vector<int> a(n), choose(n);
// 	for(int i = 0; i < n; i++){
// 		cin >> a[i];
// 	}
// 	TongDayCon(a, choose, 0, n, k);
// 	cout << cnt;

// 	return 0;
// }