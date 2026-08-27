#include <bits/stdc++.h>
using namespace std;

int a[11], stt = 0;
bool used[11];

void sinh(int i, int n){
    if(i == n){
        cout << ++stt << ": ";
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int num = 1; num <= n; num++){
        if(used[num] == false){
            a[i] = num;
            used[num] = true;
            sinh(i + 1, n);
            used[num] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    sinh(0, n);

    return 0;
}