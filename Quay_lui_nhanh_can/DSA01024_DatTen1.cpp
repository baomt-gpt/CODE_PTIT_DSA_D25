#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<string>& a, vector<string>& result,
               int n, int k, int start, int pos) {

    if (pos == k) {
        for (int j = 0; j < k; j++) {
            cout << result[j] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = start; i < n; i++) {
        result.push_back(a[i]);

        backtrack(a, result, n, k, i + 1, pos + 1);

        result.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    set<string> st;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        st.insert(s);
    }

    vector<string> a(st.begin(), st.end());

    vector<string> result;

    int m = a.size();

    backtrack(a, result, m, k, 0, 0);

    return 0;
}