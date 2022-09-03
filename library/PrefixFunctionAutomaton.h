#include "KMP.h"

void computeAutomaton(string s, vector<array<int, 26>>& aut) {
    s += '\0';
    int n = sz(s);
    vi p = pi(s);
    aut.resize(n);

    rep(i, 0, n) {
        rep(c, 0, 26) {
            if (i > 0 && 'a' + c != s[i]) {
                aut[i][c] = aut[p[i - 1]][c];
            } else {
                aut[i][c] = i + ('a' + c == s[i]);
            }
        }
    }
}
