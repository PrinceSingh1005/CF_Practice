#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;

        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = l; i <= r; i++) {
            pq.push(i);
        }

        int operations = 0;
        while (!pq.empty()) {
            int smallest = pq.top(); pq.pop();
            if (!pq.empty() && pq.top()== 0) continue;

            if (!pq.empty()) {
                int next_smallest = pq.top(); pq.pop();
                pq.push(smallest * 3);
                pq.push(next_smallest / 3);
            } else {
                pq.push(smallest * 3);
                pq.push(0);
            }
            operations++;
        }

        cout << operations << "\n";
    }

    return 0;
}
