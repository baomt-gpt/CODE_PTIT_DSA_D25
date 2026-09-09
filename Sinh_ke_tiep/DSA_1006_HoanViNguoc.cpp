#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<int>& a, vector<bool>& used, int i, int n){
    if(i == n){
        for(int j = 0; j < n; j++){
            cout << a[j];
        }
        cout << " ";
        return;
    }
    for(int val = n; val >= 1; val--){
        if(!used[val]){
            used[val] = true;
            a[i] = val;
            backtrack(a, used, i + 1, n);
            used[val] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        vector<int> a(n);
        vector<bool> used(n + 1, false);
        backtrack(a, used, 0, n);
        cout << "\n";
    }

    return 0;
}