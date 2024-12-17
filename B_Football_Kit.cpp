#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> teams(n);
    map<int, int> homeColorCount;

    for (int i = 0; i < n; ++i) {
        cin >> teams[i].first >> teams[i].second;
        homeColorCount[teams[i].first]++;
    }

    for (int i = 0; i < n; ++i) {
        int homeGames = n - 1;
        int awayGames = n - 1;

        int xi = teams[i].first;
        int yi = teams[i].second;

        int clashes = homeColorCount[yi];
        awayGames -= clashes;
        homeGames += clashes;

        cout << homeGames << " " << awayGames << "\n";
    }

    return 0;
}
