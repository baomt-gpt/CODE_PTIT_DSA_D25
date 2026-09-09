#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;

void backtrack(int pos, int start){
    if(pos == k){
        for(int j = 0; j < k; j++){
            cout << a[j];
        }
        cout << " ";
        return;
    }
    for(int i = start; i <= n; i++){
        a[pos] = i;
        backtrack(pos + 1, i + 1);
    }
}

void TestCase(){
    cin >> n >> k;
    a.resize(k + 1);
    backtrack(0, 1);
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


// #include <bits/stdc++.h>
// using namespace std;

// void backtrack(int i, int n, int k, int start, vector<int>& a){
//     if(i == k){
//         for(int j = 0; j < k; j++){
//             cout << a[j];
//         }
//         cout << " ";
//         return;
//     }
//     for(int val = start; val <= n; val++){
//         a[i] = val;
//         backtrack(i + 1, n, k, val + 1, a);
//     }
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int q; cin >> q;
//     while(q--){
//         int n, k; cin >> n >> k;
//         vector<int> a(k);
//         backtrack(0, n, k, 1, a);
//         cout << "\n";
//     }

//     return 0;
// }