#include <bits/stdc++.h>
using namespace std;

void TestCase(){
    string s; cin >> s;
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] == '1') s[i] = '0';
        else{
            s[i] = '1';
            break;
        }
    }
    cout << s << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int q; cin >> q;
    while(q--){
        TestCase();

    }

    return 0;
}