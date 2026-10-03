#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<int>& a, vector<bool>& used, vector<int>& result, int n, int pos){
    if(pos == n){
        for(int j = 0; j < n; j++){
            cout << result[j] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = 0; i < n; i++){
        if(!used[i]){
            used[i] = true;
            result.push_back(a[i]);
            backtrack(a, used, result, n, pos + 1);
            used[i] = false;
            result.pop_back();
        }
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
    sort(a.begin(), a.end());
    vector<bool> used(n, false);
    vector<int> result;
    backtrack(a, used, result, n, 0);

    return 0;
}