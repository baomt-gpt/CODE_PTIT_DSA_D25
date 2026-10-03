#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int mod = 1000000007;

struct matran {
    ll a[2][2];

    // nap chong toan tu nhan
    friend matran operator * (matran x, matran y) {
        matran res;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                res.a[i][j] = 0;
                for (int k = 0; k < 2; k++) {
                    res.a[i][j] += x.a[i][k] * y.a[k][j];
                    res.a[i][j] %= mod;
                }
            }
        }
        return res;
    }
};

matran binpow(matran x, ll n) {
    if (n == 1)
        return x;

    matran X = binpow(x, n / 2);

    if (n % 2 == 0) {
        return X * X;
    }
    else {
        return X * X * x;
    }
}

int main() {
	int q; cin >> q;
	while(q--){
		ll n;
    cin >> n;

    matran x;
    x.a[0][0] = 1;
    x.a[0][1] = 1;
    x.a[1][0] = 1;
    x.a[1][1] = 0;

    matran res = binpow(x, n);

    cout << res.a[0][1] << endl;
	}
    
}