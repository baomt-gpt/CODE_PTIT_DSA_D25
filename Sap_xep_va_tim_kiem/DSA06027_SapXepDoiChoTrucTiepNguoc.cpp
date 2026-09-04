#include <bits/stdc++.h>
using namespace std;

void interChangeSortReverse(vector<int>& a, int n){
    vector<vector<int>> v;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
        v.push_back(a);
    }
    for(int i = v.size() - 1; i >= 0; i--){
        cout << "Buoc " << i + 1 << ": ";
        for(int x : v[i]) cout << x << " ";
        cout << "\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        interChangeSortReverse(a, n);
    }

    return 0;
}