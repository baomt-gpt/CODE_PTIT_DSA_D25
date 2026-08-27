#include <bits/stdc++.h>
using namespace std;

bool ThuanNghich(vector<int> a){
    int n = a.size();
    for(int i = 0; i < n / 2; i++){
        if(a[i] != a[n - i - 1]) return false;
    }
    return true;
}

void sinh(vector<int>& nums, int i, int n){
    if(i == n){
        if(ThuanNghich(nums)){
            for(int i = 0; i < nums.size(); i++){
                cout << nums[i] << " ";
            }
            cout << "\n";
        }
        return;
    }
    for(int bit = 0; bit <= 1; bit++){
        nums[i] = bit;
        sinh(nums, i + 1, n);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> nums(n);
    sinh(nums, 0, n);

    return 0;
}