#include <bits/stdc++.h>
using namespace std;

int points(const array<string, 10>& games) {
    int totalPoints = 0;

    for (auto &match : games) {
        int pos = match.find(':');
        int x = stoi(match.substr(0, pos));
        int y = stoi(match.substr(pos + 1));

        if (x > y) totalPoints += 3;
        else if (x == y) totalPoints += 1;
    }

    return totalPoints;
}

int main() {
    array<string, 10> games = {"3:1","2:2","0:1","4:0","1:1","2:3","3:0","0:0","1:2","2:1"};
    cout << points(games) << endl; 
    return 0;
}
