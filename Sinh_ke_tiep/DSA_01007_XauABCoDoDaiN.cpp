#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<char>& a, int n, int i){
    if(i == n){
        for(int j = 0; j < n; j++){
            cout << a[j];
        }
        cout << " ";
        return;
    }

    a[i] = 'A';
    backtrack(a, n, i + 1);

    a[i] = 'B';
    backtrack(a, n, i + 1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        vector<char> a(n);
        backtrack(a, n, 0);
        cout << "\n";
    }

    return 0;
}