const int MAX_A = 1e6;

array<int, MAX_A + 1> lp{};
vi prm;

rep(i, 2, MAX_A + 1) {
    if (!lp[i]) {
        lp[i] = i;
        prm.push_back(i);
    }
    for (int j = 0; j < sz(prm) && prm[j] <= lp[i] && i * prm[j] <= MAX_A; ++j) {
        lp[i * prm[j]] = prm[j];
    }
}
