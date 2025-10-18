#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // 计算前缀和
        vector<int> prefix_sum(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];
        }

        int result = 0;
        // 遍历所有可能的子数组
        for (int l = 0; l < n; l++) {
            for (int r = l; r < n; r++) {
                int sum = prefix_sum[r + 1] - prefix_sum[l];
                int avg = sum / (r - l + 1);
                result = max(result, avg);
            }
        }

        cout << result << endl;
        t--;
    }
    return 0;
}
