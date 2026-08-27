#include <bits/stdc++.h>
using namespace std;

int a[101], c[101], choose[101], bestChoose[101];    // c là giá trị, a là trọng lượng
int bestValue = 0;

void ToiUu(int n, int i, int value, int weight, int target){
    if(i == n){
        if(value > bestValue){
            bestValue = value;
            for(int j = 0; j < n; j++){
                bestChoose[j] = choose[j];
            }
        }
        return;
    }
    choose[i] = 0;
    ToiUu(n, i + 1, value, weight, target);

    if(weight + a[i] <= target){
        choose[i] = 1;
        ToiUu(n, i + 1, value + c[i], weight + a[i], target);
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, w; cin >> n >> w;
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ToiUu(n, 0, 0, 0, w);
    cout << bestValue << "\n";
    for(int i = 0; i < n; i++){
        cout << bestChoose[i] << " ";
    }

    return 0;
}