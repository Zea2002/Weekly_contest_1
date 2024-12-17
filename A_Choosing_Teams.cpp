#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> y(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> y[i];
    }

    int eligible = 0;

    for (int i = 0; i < n; i++)
     {
        if (5 - y[i] >= k) {
            eligible++;
        }
    }

    cout << eligible / 3 << endl;

    return 0;
}
