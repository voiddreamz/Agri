#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef long long LL;

LL gcd(LL a, LL b) {
    while (b) {
        LL t = a % b;
        a = b;
        b = t;
    }
    return a;
}

void solve() {
    LL n;
    cin >> n;
    vector<LL> a(n);
    for (LL i = 0; i < n; ++i) {
        cin >> a[i];
    }

    LL answer = -1;
    for (LL x = 2; x <= 1000000; ++x) {
        for (LL i = 0; i < n; ++i) {
            if (gcd(a[i], x) == 1) {
                answer = x;
                break;
            }
        }
        if (answer != -1)
            break;
    }

    // 如果没找到，可以继续试着枚举更大的素数
    // 但按题目范围，输出-1即可（也可以枚举1000003试试）
    cout << answer << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
