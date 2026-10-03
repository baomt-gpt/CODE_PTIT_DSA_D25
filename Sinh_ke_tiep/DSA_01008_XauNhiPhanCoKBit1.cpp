#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<int>& a, int n, int k, int i, int cnt){
    if(i == n){
        if(cnt == k){
            for(int j = 0; j < n; j++){
                cout << a[j];
            }
            cout << "\n";
        }
        return;
    }

    a[i] = 0;
    backtrack(a, n, k, i + 1, cnt);

    a[i] = 1;
    backtrack(a, n, k, i + 1, cnt + 1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int q; cin >> q;
    while(q--){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        backtrack(a, n, k, 0, 0);
    }

    return 0;
}