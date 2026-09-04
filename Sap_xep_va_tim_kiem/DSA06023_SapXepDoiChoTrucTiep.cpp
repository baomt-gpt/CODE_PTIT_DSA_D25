#include <bits/stdc++.h>
using namespace std;

void interChangeSort(vector<int>& a, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
        cout << "Buoc " << i + 1 << ": ";
        for(int x : a){
            cout << x << " ";
        }
        cout << "\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    interChangeSort(a, n);

    return 0;
}