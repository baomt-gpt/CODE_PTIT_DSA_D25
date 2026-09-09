#include <bits/stdc++.h>
using namespace std;

int k;
long long ans = 0;

void DayCon(vector<int>& a, int start, int lenght, int last){
    if(lenght == k){
        ++ans;
        return;
    }
    for(int i = start; i < a.size(); i++){
        if(a[i] > last){
            DayCon(a, i + 1, lenght + 1, a[i]);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    DayCon(a, 0, 0, -1);
    cout << ans;

    return 0;
}