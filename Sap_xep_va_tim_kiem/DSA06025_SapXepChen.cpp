#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int>& a, int n){
    cout << "Buoc 0: " << a[0] << "\n";
    for(int i = 1; i < n; i++){
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j -= 1;
        }
        a[j + 1] = key;
        cout << "Buoc " << i << ": ";
        for(int j = 0; j <= i; j++){
            cout << a[j] << " ";
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

    InsertionSort(a, n);

    return 0;
}