#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<bool> used;

void backtrack(int pos){
    if(pos == n){
        for(int j = 0; j < n; j++){
            cout << a[j];
        }
        cout << " ";
        return;
    }
    for(int val = 1; val <= n; val++){
        if(!used[val]){
            used[val] = true;
            a[pos] = val;
            backtrack(pos + 1);
            used[val] = false;
        }
    }
}

void TestCase(){
    cin >> n;
    a.resize(n + 1);
    used.resize(n + 1, false);
    backtrack(0);
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q; cin >> q;
    while(q--){
        TestCase();
    }

    return 0;
}