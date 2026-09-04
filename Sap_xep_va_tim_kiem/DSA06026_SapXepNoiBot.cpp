#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int>& a, int n){
    for(int i = 0; i < n; i++){
        bool check = false;
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                check = true;
                swap(a[j], a[j + 1]);
            }
        }
        if(check){
            cout << "Buoc " << i + 1 << ": ";
            for(int x : a) cout << x << " ";
            cout << "\n";
        }
        else break;
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

    BubbleSort(a, n);

    return 0;
}