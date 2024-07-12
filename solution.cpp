#include <iostream>
#include <vector>
using namespace std;

int func(int n, int l, int r, vector<int>& a) {
    int ans = 0;
    int i = 0;
    while (i < n) {
        int csum = 0;
        int j = i;
        while (j < n) {
            if (csum + a[j] <= r) {
                csum += a[j];
            } else {
                break;
            }
            j++;
            if (l <= csum && csum <= r) {
                ans++;
                break;
            }
        }
        if (j == i) {
            i++;
        } else {
            i = j;
        }
    }
    return ans;
}

int main() {
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        cout << func(n, l, r, a) << endl;
    }
    return 0;
}
