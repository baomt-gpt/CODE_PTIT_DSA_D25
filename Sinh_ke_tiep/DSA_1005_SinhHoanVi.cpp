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


// #include <bits/stdc++.h>
// using namespace std;

// void backtrack(int i, int n, vector<int>& a, vector<bool>& used){
//     if(i == n){
//         for(int j = 0; j < n; j++){
//             cout << a[j];
//         }
//         cout << " ";
//         return;
//     }
//     for(int val = 1; val <= n; val++){
//         if(used[val] == false){
//             a[i] = val;
//             used[val] = true;
//             backtrack(i + 1, n, a, used);
//             used[val]= false;
//         }
//     }
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int q; cin >> q;
//     while(q--){
//         int n; cin >> n;
//         vector<int> a(n);
//         vector<bool> used(n + 1, false);
//         backtrack(0, n, a, used);
//         cout << "\n";    
//     }

//     return 0;
// }