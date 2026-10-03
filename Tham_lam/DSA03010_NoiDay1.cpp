#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int q; cin >> q;
    while(q--){
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            long long x; cin >> x;
            pq.push(x);
        }

        long long min = 0;

        while(pq.size() > 1){
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();

            long long sum = a + b;
            min += sum;

            pq.push(sum);

        }
        cout << min << "\n";
    }

    return 0;
}