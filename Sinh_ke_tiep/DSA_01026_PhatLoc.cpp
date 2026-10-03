#include <bits/stdc++.h>
using namespace std;

bool check(vector<char>& s) {
    if (s[0] != '8' || s.back() != '6')
        return false;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '8' && s[i - 1] == '8')
            return false;
    }

    int cnt6 = 0;
    for (char c : s) {
        if (c == '6') {
            cnt6++;
            if (cnt6 > 3)
                return false;
        }
        else {
            cnt6 = 0;
        }
    }

    return true;
}

void backtrack(vector<char>& s, int n, int i){
    if(i == n){
        if(check(s)){
            for(int j = 0; j < n; j++){
                cout << s[j];
            }
            cout << "\n";
        }
        return;
    }

    s[i] = '6';
    backtrack(s, n, i + 1);

    s[i] = '8';
    backtrack(s, n, i + 1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    vector<char> a(n);
    backtrack(a, n, 0);

    return 0;
}