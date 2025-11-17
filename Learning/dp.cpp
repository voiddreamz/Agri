
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

int n;
int t[100][100];
int dp[100][100];
using namespace std;

void solve() {
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            dp[i][j] = t[i][j] + max(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }
}
int main() {
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> temp;
            t[i][j] = temp;
        }
    }
    for (int i = 0; i < n; i++) {
        dp[n - 1][i] = t[n - 1][i];
    }
    solve();
}
