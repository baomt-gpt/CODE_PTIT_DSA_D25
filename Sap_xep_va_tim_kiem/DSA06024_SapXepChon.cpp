#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int>& a, int n){
    for(int i = 0; i < n - 1; i++){
        int min_index = i;
        for(int j = i + 1; j < n; j++){
            if(a[min_index] > a[j]){
                min_index = j;
            }
        }
        swap(a[i], a[min_index]);
        cout << "Buoc " << i + 1 << ": ";
        for(int x : a) cout << x << " ";
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

    SelectionSort(a, n);

    return 0;
}