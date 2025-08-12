#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
vector<string> v = {"Swimming", "Foatball", "Running"};
vector<string> ans = {};

void day(int n, string s) {
    if (n == 0) {
        cnt++;
        for (auto it: ans)cout << it << " ";
        cout << endl;
        return;
    }
    for (auto it: v) {
        if (it == s)continue;
        ans.push_back(it);
        day(n - 1, it);
        ans.pop_back();
    }
}

int main() {
    int n;
    cin >> n;
    day(n, " ");
    cout << cnt << endl;
}
